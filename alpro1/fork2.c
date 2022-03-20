#include <stdio.h>

typedef struct {//membuat code tipe data terstruktur
    char code;//deklarasi varaibel untuk menampung karakter input
    char nama[100];//deklrasi variabel untuk menampung biner input
    int nama_b[100];//deklarasi varaibel untuk menampung hasil konversi dari char 'codee' menjadi integer
    int gabung[100];//deklrasi varaibel untuk menampung hasil biner gabungan 
} var;//deklarasi nama data terstruktur

int main () {

    int n;//banyaknya file yang akan diinput
    scanf("%d", &n);//meminta user untuk memasukkan nilai n
    int i;//iterator
    int kunci;//deklarasi varaibel untuk kunci
    var array[n];//deklarasi data terstukrut dengan menggunakan array
    int j_nama[n];//deklarasi variabel untuk menampung panjang biner
    int desimal[n];//deklarasi varaibel untuk menampung biner yang akan dikonversi menjadi desimal
    i = 0;//iterator dimulai dari 0
    while(i < n) {
        scanf(" %c", &array[i].code);//meminta user untuk memasukkan karakter
        int j = 0;//deklarasi varaibel untuk iterator 'j' dimulai dari 0
        while(array[i].nama[j-1] != ';') {
            scanf(" %c", &array[i].nama[j]);//meminta user untuk memasukkan angka biner
            if(array[i].nama[j] == '1') {
                array[i].nama_b[j] = 1;//proses pengubahan dari char '0' menjadi integer bernilai 0
            } else if (array[i].nama[j] == '0') {
                array[i].nama_b[j] = 0;//Proses pengubahan dari char '0' menjadi integer bernilai 0
            } else {
                break;//code untuk memberhentikan looping untuk menghindari terkonversinya karakter selain dari '0' dan '1'
                //PS: Disini saya bingung untuk memberhentikan looping agar tidak mengkonversi nilai ';' makadari itu saya menggunakan break untuk memberhentikannya
            }
            j++;//iterator 'j' bertambah untuk menampung berapa banyak indeeks angka yang dimasukkan
        } /*Perulangan yang akan berhenti ketika user memasukkan input ';' dan [j-1] berfungsi untuk mengecek apakah indeks sebelumnya bernilai ';' jika bukan maka user akan melanjutkan input*/
        j_nama[i] = j;//nilai dari j yang telah melakukan perulangan akan dimasukkan kedalam varaibel j_nama[i]
        i++;//iterator 'i' bertambah
    }
    scanf(" %d", &kunci);//meminta user untuk memasukkan angka

    int k;//iterator
    i=1;
    int h;
    int biner[10];//deklarasi array 
    while(kunci>0){
        biner[i]=kunci%2;//proses modulo nilai 'kunci' dengan sisa bagi sebagai hasil akhir
         kunci=kunci/2;//proses pembagian nilai 'kunci', selama hasil pembagian kunci >0 maka proses looping akan terus terjadi
         i=i+1;//iterator bertambah
         k=i;//menampung panjang biner
    }//proses pengubahan dari angka yang dimasukkan dalam variabel 'kunci' menjadi biner
    h = k - 1;//proses untuk menampung panjang biner 'kunci', h dikurangkan dengan 1 karena indeks dimulai dari 0
    int x = k - 1;//deklarasi  variabel untuk menampung panjang biner 'kunci'
    int biner1[x];//deklarasi array untuk menampung biner 'kunci' yang akan dirubah urutan posisinya
    int j = 0;//deklrasi variabel iterator
    while(h > 0) {
        biner1[j] = biner[h];//Proses untuk menampung biner yang telah dirubah posisi indeksnya
        j++;//iterator bertambah
        h--;//iterator berkurang 
    }//Proses looping yang akan terus berkurang selama nilai h tidak samadengan '0', berfungsi untuk membalikkan urutan indeks biner

    i = 0;//iterator dimulai dari 0
    while(i<n) {
        int c = x + j_nama[i];//deklarasi varaibel untuk menampung jumlah panjang biner kunci dan nama file
        int count = 0;//iterator untuk menampung berapa banyak proses looping yang terjadi
        int q = 0;//iterator untuk panjang biner kunci
        int w = 0;//iterator untuk panjang biner nama file
        while(count < c) {//Proses looping akan terus terjadi selama nilai 'count' tidak melebihi panjang biner gabungan
            if(q < x) {
                array[i].gabung[count] = biner1[q];
                q++;//iterator bertambah
                count++;//iterator bertambah
            }//Code ini untuk menampung biner kunci sebagai indeks 0, 2, 4,... dst(indeks urutan pertama)
            if(w < j_nama[i]) {
                array[i].gabung[count] = array[i].nama_b[w];//Proses memasukkan biner nama file
                w++;//iterator bertambah
                count++;//iterator bertambah
            }//Code ini untuk menapung biner nama file sebagai indeks 1, 3, 5,... dst
        }//Proses loooping yang akan menampung biner yang telah dirubah posisinya menjadi selang-seling, dimana indeks 0 dimulai dari biner kunci dan indeks 1 dimulai dari biner nama file
        i++;//iterator bertambah
    }//Proses looping yang akan terus terjadi dan nilai iterator akan terus bertambah selama iterator 'i' tidak melebihi nilai n

    i=0;
    while(i<n) {
        desimal[i] = 0;
        i++;
    }

    i = 0;
    while(i < n) {
        j = (x+j_nama[i]) - 1; //index biner dari belakang
        k=0; //pangkat
        while(j>=0){
            int temp = 2;
            if(array[i].gabung[j] == 1){
                //proses perhitungan 2 pangkat k
                if(k==0){
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
            desimal[i] += temp;//semua hasil pemangkatan ditambahkan ke desimal
            k++;//iterator bertambah
            j--;//iterator berkurang
        }
        i++;//iterator bertambah
    }
    printf("Hasil Gabung:\n");
    i=0;
    while(i<n) {
        int a = 0;
        while(a < x+j_nama[i]) {//Looping akan terus terjadi selama tidak melebihi panjang biner gabungan
            printf("%d", array[i].gabung[a]);
            a++;
        }//Proses untuk menampilkan biner gabungan yang possinya selang seling
        printf("\n");
        i++;//iterator bertambah
    }
    printf("\nPassword:\n");//Membuat baris baru dan menampilkan karakter 'password' lalu membuat baris baru
    i=n-1;
    while(i>=0){
        printf("%c", array[i].code);
        i--;//iterator berkurang
    }//Proses untuk menampilkan code yang urutannya dimulai dari belakang hingga terdepan
    printf("-");//menampilkan '-' setelah nama file ditampilkan
    i=0;
    while (i<n) {
        printf("%d", desimal[i]);//menampilkan hasil konversi dari biner ke desimal
        if(i<n-1) {
            printf("-");//menampilkan '-'
        }
        i++;//iterator bertambah
    }
    printf("\n");//membuat baris baru
    
/*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi TP6 Password Rahasia Perusahaan While (PRKW2020) dalam mata kuliah Alpro 1
 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
    return 0;//Code untuk menghentikan eksekusi code
}
