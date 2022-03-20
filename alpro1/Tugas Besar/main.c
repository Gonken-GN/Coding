#include <stdio.h>
#include <string.h>
void decimaltoOctal(int deciNum)
{
    int octalNum = 0, countval = 1;
    int dNo = deciNum;
    while (deciNum != 0) {
        int remainder = deciNum % 8;
        octalNum += remainder * countval;
        countval = countval * 10;
        deciNum /= 8;
    }
    printf("%d", octalNum);
}
void decToHexa(int n) 
{    
    char hexaDeciNum[100];  
    int i = 0; 
    while(n!=0) 
    {     
        int temp  = 0; 
        temp = n % 16; 
        if(temp < 10) 
        { 
            hexaDeciNum[i] = temp + 48; 
            i++; 
        } 
        else
        { 
            hexaDeciNum[i] = temp + 55; 
            i++; 
        } 
        n = n/16; 
    }  
    for(int j=i-1; j>=0; j--) 
        printf("%c", hexaDeciNum[j]); 
} 
int printSelisih(int arr1[], int arr2[], int m, int n) 
{ 
    int i = 0, j = 0; 
    while (i < n && j < m) { 
        if (arr1[i] < arr2[j]){ 
            printf(" %d", arr1[i]);
			i++; 
		}else if (arr2[j] < arr1[i]){ 
         printf(" %d", arr2[j]);
		 j++;
		}else { 
            j++;
            i++; 
        } 
    } 
} 
int printIntersection(int arr1[], int arr2[], int m, int n) 
{ 
    int i = 0, j = 0; 
    while (i < n && j < m) { 
        if (arr1[i] < arr2[j]) 
            i++; 
        else if (arr2[j] < arr1[i]) 
            j++; 
        else 
        { 
            printf(" %d ", arr2[j++]); 
            i++; 
        } 
    } 
} 
int printUnion(int arr1[], int arr2[], int m, int n) 
{ 
    int i = 0, j = 0; 
    while (i < n && j < m) { 
        if (arr1[i] < arr2[j]) 
            printf(" %d ", arr1[i++]); 
        else if (arr2[j] < arr1[i]) 
            printf(" %d ", arr2[j++]); 
        else { 
            printf(" %d ", arr2[j++]); 
            i++; 
        } 
    } 
  
    while (i < n) 
        printf(" %d ", arr1[i++]); 
    while (j < m) 
        printf(" %d ", arr2[j++]); 
} 
int euclidean(int a, int b, int *x, int *y) 
{ 
	if (a == 0) 
	{ 
		*x = 0; 
		*y = 1; 
		return b; 
	} 

	int x1, y1;  
	int gcd = euclidean(b%a, a, &x1, &y1); 
	*x = y1 - (b/a) * x1; 
	*y = x1; 

	return gcd; 
} 
int main()
{
    char tanda = '_';
    char nama[100];
	char gender;
	char pesan[100], ch;
	int i, kunci;
	char input, ins1, ins2;
	int j, k = 0;
	int x, y, a , b;
	
    printf("		|============== Selamat Datang ==============|\n");
    printf("		|            Oleh: Raden Fadhil A.A          |\n");
    printf("		|                 NIM: 2004305               |\n");
    printf("		|               Ilmu Komputer C-1            |\n");
    printf("|---------------|============= Selamat Mencoba ==============|---------------|\n");
    printf("\nMasukkan nama Anda (gunakan '%c' untuk memberikan spasi): ", tanda);
    scanf("%s", nama);
	printf("Laki-laki(L) atau Perempuan(P) (Contoh input: L): ");
	scanf(" %c", &gender);
    for(i=0;i<strlen(nama);i++){
        if(nama[i] == '_'){
            nama[i] = ' ';
        }
    }
	if(gender == 'L' || gender == 'l'){
		printf("\n Selamat datang, Bapak %s\n", nama);
	}else if(gender == 'P' || gender == 'p'){
		printf("\n Selamat datang, Ibu %s\n", nama);
	}else{
		printf("Selamat datang, %s\n", nama);
	}
    
    printf("\n Silahkan Pilih salah satu menu di bawah ini:\n");
	printf("    1. Algoritma dan Bilangan Bulat\n");
	printf("    2. Konversi Biner\n");
	printf("    3. Himpunan\n");
	printf(" Anda memilih menu nomor: ");
	scanf(" %c", &input);
	switch(input){
		case'1'	:
		printf("|============================ Algoritma dan Bilangan Bulat ============================|\n");
		if(gender == 'L' || gender == 'l'){
			printf("\n Silahkan, Bapak %s pilih materi yang ingin anda akses: \n", nama);
		}else if(gender == 'P' || gender == 'p'){
			printf("\n Selamat datang, Ibu %s pilih materi yang ingin anda akses:\n", nama);
		}else{
			printf("Selamat datang, %s\n pilih materi yang ingin anda akses:", nama);
		}
		printf("    1. Algoritma Euclidean\n");
		printf("    2. Aritmetika Modulo\n");
		printf("    3. Kongruen\n");
		printf("    4. Kriptografi (caesar cipher)\n");
		printf("    5. Bilangan Prima\n");
		printf("Anda memilih materi (masukkan angka seperti '1' tanpa tanda kutip): ");
		scanf(" %c", &ins1);
		if(ins1 == '1'){
			printf("\n||========================================================||\n");
			printf("||==================  Algoritma Euclidean  ===============||\n");
			printf("||========================================================||\n");
			printf("\nMasukkan input (contoh: '80 12'): ");
			scanf("%d %d", &a, &b);
			int g = euclidean(a, b, &x, &y); 
			printf("PBB(%d, %d) = %d", a, b, g);
			if(g == 1){
				printf(" (Relatif prima)\n");
			}else{
				printf(" (Bukan relatif prima)\n");
			}
			printf("\n|============== Terima Kasih ==============|\n");
		}else if(ins1 == '2'){
			int a2, b2;
			int totmo;
			printf("\n||========================================================||\n");
			printf("||==================   Aritmetika Modulo   ===============||\n");
			printf("||========================================================||\n");
			printf("\nMasukkan input (contoh 23 5): ");
			scanf("%d %d", &a2, &b2);
			totmo = a2 % b2;
			if(totmo < 0){
				i=0;
				while(i < 0){

				}
			}
			printf("%d mod %d = %d\n", a2, b2, totmo);
			printf("\n|============== Terima Kasih ==============|\n");
		}else if(ins1 == '3'){
			printf("\n||========================================================||\n");
			printf("||==================       Kongruen        ===============||\n");
			printf("||========================================================||\n");
			printf("\nMasukkan input (contoh 38 13 5): ");
			int a3, b3, c3, count = 0;
			int totkong;
			scanf("%d %d %d", &a3, &b3, &c3);
			totkong = (a3-b3) / c3;
			for(i=1;i<totkong;i++){
				if(totkong%i==0){
					count++;
				}
			}
			if(count != 0){
				printf("%d kongruen %d (mod %d)",a3, b3, c3);
			}else{
				printf("%d bukan kongruen %d (mod %d)",a3, b3, c3);
			}
			printf("\n|============== Terima Kasih ==============|\n");
		}else if(ins1 == '4'){
			printf("\n||========================================================||\n");
			printf("||==================      Kriptografi      ===============||\n");
			printf("||========================================================||\n");
			printf("\nAnda telah memilih materi kriptografi (caesar cipher)\n");
			printf("Pilih salah satu menu ini: \n");
			printf("	1. Progam Enkripsi\n");
			printf("	2, Progam Dekripsi\n");
			int pilihkro;
			printf("Anda memilih materi nomor: ");
			scanf("%d", &pilihkro);
			if(pilihkro == 1){
				printf("|============================ Progam Enkripsi ============================|\n");
				printf("\nMasukkan sebuah pesan untuk dienkripsi: ");
				scanf("%s", pesan);
				printf("Masukkan kunci: ");
				scanf("%d", &kunci);
					for(i = 0; pesan[i] != '\0'; ++i){
						ch = pesan[i];
						
						if(ch >= 'a' && ch <= 'z'){
							ch = ch + kunci;
							
							if(ch > 'z'){
								ch = ch - 'z' + 'a' - 1;
							}
							
							pesan[i] = ch;
						}
						else if(ch >= 'A' && ch <= 'Z'){
							ch = ch + kunci;
							
							if(ch > 'Z'){
								ch = ch - 'Z' + 'A' - 1;
							}
							
							pesan[i] = ch;
					}
				}
			printf("pesan enkripsi: %s\n", pesan);
			printf("\n|============== Terima Kasih ==============|\n");
			}else if(pilihkro == 2){
			char pesan2[100], ch2;
			int i, kunci2;
			printf("|============================ Progam Dekripsi ============================|\n");
			printf("\nMasukkan sebuah pesan untuk didekripsi: ");
			scanf("%s", pesan2);
			printf("Enter key: ");
			scanf("%d", &kunci2);
			
			for(i = 0; pesan2[i] != '\0'; ++i){
				ch2 = pesan2[i];
				
				if(ch2 >= 'a' && ch2 <= 'z'){
					ch2 = ch2 - kunci2;
					
					if(ch2 < 'a'){
						ch2 = ch2 + 'z' - 'a' + 1;
					}
					
					pesan2[i] = ch2;
				}
				else if(ch >= 'A' && ch <= 'Z'){
					ch2 = ch2 - kunci2;
					
					if(ch2 < 'A'){
						ch2 = ch2 + 'Z' - 'A' + 1;
					}
					
					pesan2[i] = ch2;
				}
			}
			printf("Decrypted pesan2: %s\n", pesan2);
			printf("\n|============== Terima Kasih ==============|\n");
			}
		}else if(ins1 == '5'){
			printf("\n||========================================================||\n");
			printf("||==================     Bilangan Prima    ===============||\n");
			printf("||========================================================||\n");
			int n5, a5;
			printf ("Masukkan sebuah angka (contoh: 199): ");
			scanf ("%d",&n5);
			for (i=1;i<=n5;i++)
			{
				if(n5%i==0)
				a5=a5+1;
			}
			if (a5==2){
			printf ("\nBilangan tersebut adalah komposit\n");
			}else{
			printf ("\nbilangan tersebut adalah prima\n");
			}
			printf("\n|============== Terima Kasih ==============|\n");
		}
		break;
		case'2':
		printf("|============================ Konversi desimal ============================|\n");
		int ins2;
		if(gender == 'L' || gender == 'l'){
			printf("\n Selamat datang di progam biner, silahkan Bapak %s pilih materi yang ingin anda akses: \n", nama);
		}else if(gender == 'P' || gender == 'p'){
			printf("\n Selamat datang di progam biner, silahkan Ibu %s pilih materi yang ingin anda akses:\n", nama);
		}else{
			printf("Selamat datang di progam biner, silahkan %s\n pilih materi yang ingin anda akses:\n", nama);
		}
		printf("	1. Biner & desimal \n");
		printf("	2. Desimal & hexadesimal\n");
		printf("	3. Desimal & Octal\n");
		printf("Anda memilih materi nomor: ");
		scanf("%d", &ins2);
		if(ins2 == 1){
			printf("\n||========================================================||\n");
			printf("||==================     Biner & Desimal   ===============||\n");
			printf("||========================================================||\n");
			int pilihbin;
			printf("\nAnda telah memilih materi Biner & Desimal\n");
			printf("Silahkah pilih salah satu menu di bawah ini: \n");
			printf("	1. Konversi biner ke desimal\n");
			printf("	2. Konveri desimal ke biner\n");
			printf("Anda memilih menu nomor: ");
			scanf("%d", &pilihbin);
			if(pilihbin == 1){
				printf("|============================ Binary to Decimal ============================|\n");
				int desimal = 0;
				char str[100];
				printf("\nMasukkan input biner(contoh: 101): ");
				scanf("%s", str);
				for(i=strlen(str)-1;i>=0;i--){
					int temp = 2;
					if(str[i] == '1'){
						if(k == 0){
							temp = 1;
						}else{
							int l=1;
							while(l<k){
								temp = temp * 2;
								l++;
							}
						}
					}else{
						temp = 0;
					}
					desimal += temp;
					k++;
				}
					printf("Bilangan desimal dari %s adalah %d\n", str, desimal);
					printf("\n|============== Terima Kasih ==============|\n");
				}else if(pilihbin == 2){
					printf("|============================ Decimal to Binary ============================|\n");
					int kunci;
					printf("\nMasukkan sebuah angka desimal sembarang (contoh: 12): ");
					scanf(" %d", &kunci);//meminta user untuk memasukkan angka
					printf("Biner dari desimal %d adalah ", kunci);
					int k;//iterator
					i=1;
					int h;
					int biner[10];//deklarasi array 
					while(kunci>0){
						biner[i]=kunci%2;
						kunci=kunci/2;
						i=i+1;
						k=i;
					}
					h = k - 1;
					int x = k - 1;
					int biner1[x];
					int j = 0;
					while(h > 0) {
						biner1[j] = biner[h];
						j++;
						h--;
					}
					for(i=0;i<x;i++){
						printf("%d", biner1[i]);
					}
					printf("\n|============== Terima Kasih ==============|\n");
				}
		}else if(ins2 == 2){
			printf("\n||========================================================||\n");
			printf("||================    Desimal & Hexadesimal   ============||\n");
			printf("||========================================================||\n");
			int n;
			printf("\n Konversi desimal ke hexadesimal\n");
			printf(" Masukka input (contoh: 100): ");
			scanf("%d", &n);
			printf("Bentuk hexadesimal dari %d adalah ", n);
			decToHexa(n);
			printf("\n");
			printf("\n|============== Terima Kasih ==============|\n");
		}else if(ins2 == 3){
			printf("\n||========================================================||\n");
			printf("||=================     Desimal & Octal    ===============||\n");
			printf("||========================================================||\n");
			int n;
			printf("\n Progam konversi desimal ke Octal\n");
			printf("Masukkan input desimal sembarang (cotoh: 100): ");
   			 scanf("%d", &n);
				printf("Bentuk octal dari %d adalah ", n);
			decimaltoOctal(n);
			printf("\n");
			printf("\n|============== Terima Kasih ==============|\n");
		}
		break;
		case'3':
		printf("|============================ Himpunan ============================|\n");
		int ins3;
		if(gender == 'L' || gender == 'l'){
			printf("\n Selamat datang di progam himpunan, silahkan Bapak %s pilih materi yang ingin anda akses: \n", nama);
		}else if(gender == 'P' || gender == 'p'){
			printf("\n Selamat datang di progam himpunan, silahkan Ibu %s pilih materi yang ingin anda akses:\n", nama);
		}else{
			printf("\nSelamat datang di progam himpunan, silahkan %s\n pilih materi yang ingin anda akses:\n", nama);
		}
		printf("	1. Himpunan Gabungan\n");
		printf("	2. Himpun Irisan\n");
		printf("	3. Himpunan Selisih\n");
		printf("Anda memilih materi nomor: ");
		scanf("%d", &ins3);
		if(ins3 == 1){
			printf("\n||========================================================||\n");
			printf("||=================     Himpunan gabungan   ==============||\n");
			printf("||========================================================||\n");
			printf("\nMasukkan input berupa:\n");
			printf("	1. Banyaknya array/angka pertama (contoh: 5)\n");
			printf("	2. Angka dengan jumlah input di atas(contoh: 1 2 3 4 5)\n");
			printf("	3. Banyaknya array/angka kedua (contoh: 3)\n");
			printf("	4. Angka dengan jumlah input di atas (contoh: 7 8 9)\n");
			int n, m;
			printf("Masukkan Banyaknya angka yang akan diinput: ");
			scanf("%d", &n);
			int arr1[n];
			printf("Masukkan angka dengan jumlah input di atas: ");
			for(i=0;i<n;i++){
				scanf("%d", &arr1[i]);
			}
			printf("Masukkan Banyaknya angka yang akan diinput: ");
			scanf("%d", &m);
			int arr2[m];	
			printf("Masukkan angka dengan jumlah input di atas: ");
			for(i=0;i<m;i++){
				scanf("%d", &arr2[i]);
			}
			printf("\nHimpunan gabungan dari di atas adalah:");
			printUnion(arr1, arr2, m, n); 
			printf("\n|============== Terima Kasih ==============|\n");
		}else if(ins3 == 2){
			printf("\n||========================================================||\n");
			printf("||=================      Himpunan Irisan    ==============||\n");
			printf("||========================================================||\n");
			printf("\nMasukkan input berupa:\n");
			printf("	1. Banyaknya array/angka pertama (contoh: 5)\n");
			printf("	2. Angka dengan jumlah input di atas(contoh: 1 2 3 4 5)\n");
			printf("	3. Banyaknya array/angka kedua (contoh: 3)\n");
			printf("	4. Angka dengan jumlah input di atas (contoh: 7 8 9)\n");
			int n, m;
			printf("Masukkan Banyaknya angka yang akan diinput: ");
			scanf("%d", &n);
			int arr1[n];
			printf("Masukkan angka dengan jumlah input di atas: ");
			for(i=0;i<n;i++){
				scanf("%d", &arr1[i]);
			}
			printf("Masukkan Banyaknya angka yang akan diinput: ");
			scanf("%d", &m);
			int arr2[m];	
			printf("Masukkan angka dengan jumlah input di atas: ");
			for(i=0;i<m;i++){
				scanf("%d", &arr2[i]);
			}
			printf("\nHimpunan irisan dari di atas adalah:");
			printIntersection(arr1, arr2, m, n);
			printf("\n|============== Terima Kasih ==============|\n");
		}else if(ins3 == 3){
			printf("\n||========================================================||\n");
			printf("||=================     Himpunan selisih    ==============||\n");
			printf("||========================================================||\n");
			printf("\nMasukkan input berupa:\n");
			printf("	1. Banyaknya array/angka pertama (contoh: 5)\n");
			printf("	2. Angka dengan jumlah input di atas(contoh: 1 2 3 4 5)\n");
			printf("	3. Banyaknya array/angka kedua (contoh: 3)\n");
			printf("	4. Angka dengan jumlah input di atas (contoh: 7 8 9)\n");
			int n, m;
			printf("Masukkan Banyaknya angka yang akan diinput: ");
			scanf("%d", &n);
			int arr1[n];
			printf("Masukkan angka dengan jumlah input di atas: ");
			for(i=0;i<n;i++){
				scanf("%d", &arr1[i]);
			}
			printf("Masukkan Banyaknya angka yang akan diinput: ");
			scanf("%d", &m);
			int arr2[m];	
			printf("Masukkan angka dengan jumlah input di atas: ");
			for(i=0;i<m;i++){
				scanf("%d", &arr2[i]);
			}
			printf("\nSelisih himpunan dari himpunan di atas adalah:");
			printSelisih(arr1, arr2, m, n);
			printf("\n");
			printf("\n|============== Terima Kasih ==============|\n");
		}
		break;
	}
	if(gender == 'L' || gender == 'l'){
			printf("\n Terima kasih Bapak %s telah menggunakan progam ini\n", nama);
		}else if(gender == 'P' || gender == 'p'){
			printf("\n Terima kasih Ibu %s telah menggunakan progam ini \n", nama);
		}else{
			printf("\n Terima kasih %s telah menggunakan progam ini \n", nama);
		}
		printf("\n==================================================================\n");
		printf("\nMohon untuk buka ulang file.exe untuk mengakses materi yang lain\n");
		printf("\n==================================================================\n");
		int lol;
		scanf("%d", &lol);
	return 0;
}