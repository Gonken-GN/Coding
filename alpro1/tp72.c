#include <stdio.h>
#include <string.h>
int main () {
	char str[50];//deklarasi variabel untuk menampung char yang akan dirubah menjadi string
	int i, j, k;//deklarasi variabel
	char kunc[50];////deklarasi variabel untuk menampung string
	i=0;
	while(str[i-1] != '|'){
		scanf("%c", &str[i]);//meminta user untuk memasukkan karakter yang akan diubah menjadi string
		i++;//iterator untuk menampung banyaknya kata/panjang string
	}//proses untuk memberhentikan meminta user untuk memasukkan karakter ketika user memasukkan '|'
	str[i-1] = '\0';//deklarasi null untuk mengubah char menjadi string
	scanf("%s", &kunc);//meminta user untuk memasukkan string

	char baru[100];//variabel untuk menampung char dimana kata tertentu telah dipisah
    i = 0;
    int a = 0;//iterator
    int b;//iterator
    while(i < strlen(str)) {
        if(str[i] == kunc[0]){//syarat jika ada huruf string yang sama dengan satu huruf awal kunci
        j = 0;
        b=0;
        while(j < strlen(kunc)) {//perulangan sebanyak panjang kunci
            if(str[i+j] == kunc[j]) {//syarat jika huruf string sama dengan huruf kata kunci
                b++;//iterator unuk menampung berapa banyak huruf yang sama dengan variabel kunci
            } //string i + j berfungsi untuk jika iterator i telah menemukan kata yang sama dengan huruf awal dan jika ditambah dengan iterator j (dimana j akan terus bertambah) maka akan menjadi char kata yang sama dengan kunci
            j++;
        }
        if(b == strlen(kunc)){//syarat jika total huruf yang sama dengan kata kunci sama besar dengan panjang string kunci
        	j=0;
            while(j<strlen(kunc)){//melakukan perulangan sebanyak panjang kunci jika syarat diatas terpenuhi
                j++;
                i++;
                } 
            }else if (b<strlen(kunc)){//syarat jika iterator b kurang dari panjang string kunci
                baru[a] = str[i];//memasukkan huruf char jika huruf awal kunci sama dengan huruf pada str jika panjang iterator b tidak sama dengan panjang string kunci
                a++;
                i++;
            }
        }else if(str[i] != kunc[0]){//syarat jika huruf string tidak sama dengan  huruf awal kunci
        baru[a] = str[i];//proses memasukkan huruf string yang tidak sama dengan huruf awal kunci pada variabel char baru
        b++;
        i++;
        a++;
        }
    }
    baru[a] = '\0';//deklarasi null 

    if(strlen(baru) == 0) {
        printf("=== Kalimat Hilang ===\n");//menampilkan kalimat hilang jika panjang string baru = 0
    } else if( strlen(baru) != 0) {//Kondisi jika panjang strlening != 0 
        printf("Tanpa kata kunci: %s\n", baru);//menampilkan string yang kata kuncinya telah dipisah
        printf("\n");//membuat baris baru
        int mundur = strlen(baru);
    if(strlen(baru) % 2 == 1){//syarat jika panjang string baru ganjil
    	i=0;
    	while(i<strlen(baru)/2){
    		j=0;
    		while(j<i){
    			printf(" ");
    			j++;
    		}
    		printf("%c", baru[i]);//menampilkan setengah kata dari string dimulai dari awal kata string hingga setengah panjang string baru
    		j=i;
    		while(j<strlen(baru)/2){
    			printf(" ");
    			j++;
    		}
    		j=i;
    		while(j<(strlen(baru)/2)-1){
    			printf(" ");
    			j++;
    		}
    		i++;
    		printf("%c", baru[mundur-1]);//menampilkan setengah kata dari string baru dimulai dari akhir kata string baru hingga setengah panjang string baru -1
            printf("\n");
            mundur--;
    	}//membentuk pola huruf bagian atas
    	i=0; 
    	while(i<strlen(baru)/2){
    		printf(" ");
    		i++;
    	}
    	printf(" \n", baru[strlen(baru)/2]);//menampilkan satu huruf dari indeks kesetengah dari panjang string baru

    	mundur = strlen(baru)/2-1;
    	i=(strlen(baru)/2)+1;
    	while(i<strlen(baru)){
    		j=i;
    		while(j<strlen(baru)-1){
    			printf(" ");
    			j++;
    		}
    		printf("%c", baru[mundur]);//menampilkan setengah kata dari string dimulai dari awal kata string hingga setengah panjang string baru
    		j=(strlen(baru)/2);
    		while(j<i){
    			printf(" ");
    			j++;
    		}
    		j=(strlen(baru)/2);
    		while(j<i-1){
    			printf(" ");
    			j++;
    		}
    		printf("%c", baru[i]);//menampilkan setengah kata dari string baru dimulai dari 1/2 kata string baru hingga setengah panjang string baru
            printf("\n");
            mundur--;
    		i++;
    	}
    } else if(strlen(baru) % 2 == 0){//syarat jika panjang kata string baru genap
    	mundur = strlen(baru);
    	i=0;
    	while(i<(strlen(baru)/2)-1){
    		j=0;
    		while(j<i){
    			printf(" ");
    			j++;
    		}
    		printf("%c", baru[i]);//menampilkan setengah kata dari string dimulai dari awal kata string hingga setengah panjang string baru
    		j=i;
    		while(j<(strlen(baru)/2)-1){
    			printf(" ");
    			j++;
    		}
    		j=i;
    		while(j<(strlen(baru)/2)-1){
    			printf(" ");
    			j++;
    		}
    		i++;
    		printf("%c", baru[mundur-1]);//menampilkan setengah kata dari string baru dimulai dari akhir kata string baru hingga setengah panjang string baru -1
            printf("\n");
            mundur--;
    	}
    	i=0;
    	while(i<(strlen(baru)/2)-1){
    		printf(" ");
    		i++;
    	}
    	printf("%c", baru[strlen(baru)/2-1]);//menampilkan satu huruf dari setengah kata dan indeksnya dikurang 1 dari sting baru 
        printf("%c\n", baru[strlen(baru)/2]);//menampilkan satu huruf dari setengah kata dari string baru dan memberikan baris baru
        mundur = strlen(baru)/2-2;
        i=(strlen(baru)/2)+1;
        while(i<strlen(baru)){
        	j=i;
        	while(j<strlen(baru)-1){
        		printf(" ");
        		j++;
        	}
        	printf("%c", baru[mundur]);//menampilkan setengah kata dari string dimulai dari awal kata string hingga setengah panjang string baru
        	j=(strlen(baru)/2)-1;
        	while(j<i-1){
        		printf(" ");
        		j++;
        	}
        	j=(strlen(baru)/2)-1;
        	while(j<i-1){
        		printf(" ");
        		j++;
        	}
        	i++;
        	printf("%c", baru[i-1]);//menampilkan setengah kata dari string baru dimulai dari 1/2 kata string baru hingga setengah panjang string baru
            printf("\n");
            mundur--;
        }
    }
   }
	return 0;//menghentinkkan eksekusi code
/*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi TP6 Pola String Perusahaan While (PSPW2020) dalam mata kuliah Alpro 1
 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
}