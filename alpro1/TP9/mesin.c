#include "header.h"
char str[100][100];
char nama[100][100];//variabel untuk menampung nama 
char yes[100];//variabel untuk menampung keterengan
char bin[100];//variabel untuk menampung rating bintang
char review[100][50];//varaibel untuk menampung review
int indeks[100];
char namafin[100][100];//variabel untuk menampung nama yang sudah diubah menjadi anonim/tidak
void spasi(int n, char str[n][100]){
    int i, j, a;//iterator
    char tempnama[100][100];//varaibel string untuk menampung nama sementara (temporary)
    char tempreview[100][100];//varaibel string untuk menampung revie sementara
    int count[n];//variabel untuk menampung penghitung jika sudah menumakan huruf '/' pada string
    for(i=0;i<n;i++){
        indeks[i] = 0;
    }
    for(i=0;i<n;i++){
        count[i] = 0;//membuat nilai variabel setiap indeks menjadi 0
    }
    for(i=0;i<n;i++){//code untuk memisahkan string menjadi beberapa string/character yang diperlukan
        a=0;
        for(j=0;j<strlen(str[i]);j++){
            if((count[i] == 0) && (str[i][j] != '/')){//syarat jika variabel count sama dengan 0 dan huruf pada string input tidak sama dengan '/'
                tempnama[i][j] = str[i][j];//maka huruf pada string akan dimasukkan ke dalam varaibel sementara 
            }else if((count[i] == 0) && (str[i][j] == '/')){//syarat jika varaibel count sama dengan 0 dan huruf pada string input sama dengan '/'
                tempnama[i][j] = '\0';//maka huruf '/' akan diubah menjadi null pada variabel sementara tersebut
                count[i]++;//counter bertambah
            }else if((count[i] == 1) && (str[i][j] != '/')){//syarat untuk memisahkan keterangan anonim pada string jika counter sama dengan 1 dan huruf pada string input tidak sama dengan '/'
                yes[i] = str[i][j];//huruf pada string input akan dimasukkan kedalam varaibel yes
                count[i]++;
            }else if((count[i] == 2) && (str[i][j] != '/')){//syarat untuk memisahkan rating bintang pada string input jika counter sama dengan 2 dan huruf pada string input tidak sama dengan '/'
                bin[i] = str[i][j];//huruf pada string input tersebut akan dimasukkan ke dalam varaibel bin
                count[i]++;
            }else if(count[i] == 3){//syarat untuk memisahkan review pada string input jika counter sama dengan 3
                tempreview[i][a] = str[i][j+1];//huruf pada string tersebut akan dimasukkan ke dalam varaibel tempreview (j+1 karena agar huruf '/' pada string sebelumnya tidak ikut dimasukkan ke dalam variabel)
                a++;//iterator untuk menampung jumlah huruf pada tempreview
            }
            review[i][a] = '\0';//deklarasi null agar char dapat diakses menjadi string
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<strlen(tempnama[i]);j++){
            if(tempnama[i][j] == '_'){//syarat untuk mengubah '_' menjadi spasi
                nama[i][j] = ' ';//memasukkan spasi pada varaibel nama
                indeks[i] = j;
            }else if(tempnama[i][j] != '_'){//syarat untuk memasukkan huruf pada string jika selain dari huruf '_'
                nama[i][j] = tempnama[i][j];//code untuk memasukkan huruf tempnama kedalam variabel nama jika syarat terpenuhi
            }
        }
        nama[i][j] = '\0';
        for(j=0;j<strlen(tempreview[i]);j++){
            if(tempreview[i][j] == '_'){//syarat untuk mengubah '_' menjadi spasi
                review[i][j] = ' ';//memasukkan spasi pada variabel review
            }else if(tempreview[i][j] != '_'){//syarat untuk memasukkan huruf pada string jika selain dari huruf '_'
                review[i][j] = tempreview[i][j];//code untuk memasukkan huruf tempreview ke dalam varaibel review jika syarat terpenuhi
            }
        }
        review[i][j] = '\0';
    }
}//prosedur untuk memisahkan string pada inputan dan memberikan spasi pada string yang telah disediakan
void cek(int n){
    int i, j;//iterator
    for(i=0;i<n;i++){
        if(yes[i] == 'A'){//jika keterangan 'A'(anonim)
            for(j=0;j<strlen(nama[i]);j++){
                if((j != 0) && (nama[i][j] != ' ') && (nama[i][j-1] != ' ')){//syarat jika iterator tidak sama dengan 0(Inisial pertama) dan bukan spasi dan bukan huruf setelah spasi
                    namafin[i][j] = '*';//memasukkan '*' jika syarat di atas terpenuhi
                }else{//jika syarat di atas terpenuhi
                    namafin[i][j] = nama[i][j];//memasukkan huruf pada indeks pertama (inisial pertama), spasi dan huruf setelah spasi
                }
            }
            namafin[i][j] = '\0';
        }else if(yes[i] == 'T'){//jika keterangan 'T' (tidak anonim)
            strcpy(namafin[i], nama[i]);//melakukan proses copy pada string nama, ke string nama final
        }
    }
}//prosedur untuk membuat nama menjadi anonim/tidak
void hasil(int n){
    int i,  a = 0, b = 0, c = 0, d = 0, e = 0;//iterator
    char nama1[100][100], review1[100][50];//variabel untuk menampung nama dan review jika rating bintang 1
    char nama2[100][100], review2[100][50];//variabel untuk menampung nama dan review jika rating bintang 2
    char nama3[100][100], review3[100][50];//variabel untuk menampung nama dan review jika rating bintang 3
    char nama4[100][100], review4[100][50];//variabel untuk menampung nama dan review jika rating bintang 4
    char nama5[100][100], review5[100][50];//variabel untuk menampung nama dan review jika rating bintang 5
    int baris = 0;//variabel untuk membuat baris baru
     for(i=0;i<n;i++){
        if(bin[i] == '1'){//jika rating bintang 1
            strcpy(nama1[a], namafin[i]);
            strcpy(review1[a], review[i]);
            a++;//iterartor untuk bintang 1
        }
        if(bin[i] == '2'){//jika rating bintang 2
            strcpy(nama2[b], namafin[i]);
            strcpy(review2[b], review[i]);
            b++;//iterator untuk bintang 2
        }
        if(bin[i] == '3'){//jika rating bintang 3
            strcpy(nama3[c], namafin[i]);
            strcpy(review3[c], review[i]);
            c++;//iterator untuk bintang 3
        }
        if(bin[i] == '4'){//jika rating bintang 4
            strcpy(nama4[d], namafin[i]);
            strcpy(review4[d], review[i]);
            d++;//iterator untuk bintang 4
        }
        if(bin[i]  == '5'){//jika rating bintang 5
            strcpy(nama5[e], namafin[i]);
            strcpy(review5[e], review[i]);
            e++;//iterator untuk bintang 5
        }
    }
    if(e != 0){//jika iterator untuk bintang 5 tidak sama dengan 0 maka akan menampilkan review untuk bintang 5
        if(baris != 0){//syarat jika variabel baris sama dengan 0 maka tidak akan membuat baris baru
            printf("\n");
        }
        printf(">>> Review Bintang 5 <<<\n");
        printf("--------------------\n");
        for(i=0;i<e;i++){
            printf("%s\n", nama5[i]);
            printf("%s\n", review5[i]);
            printf("--------------------\n");
            baris++;//iterator baris bertambah
        }
    }
    if(d != 0){//jika iterator untuk bintang 4 tidak sama dengan 0 maka akan menampilkan review untuk bintang 4
        if(baris != 0){
            printf("\n");//syarat jika variabel baris sama dengan 0 maka tidak akan membuat baris baru
        }
        printf(">>> Review Bintang 4 <<<\n");
        printf("--------------------\n");
        for(i=0;i<d;i++){
            printf("%s\n", nama4[i]);
            printf("%s\n", review4[i]);
            printf("--------------------\n");
            baris++;
        }
    }
    if(c != 0){//jika iterator untuk bintang 3 tidak sama dengan 0 maka akan menampilkan review untuk bintang 3
        if(baris != 0){//syarat jika variabel baris sama dengan 0 maka tidak akan membuat baris baru
            printf("\n");
        }
        printf(">>> Review Bintang 3 <<<\n");
        printf("--------------------\n");
        for(i=0;i<c;i++){
            printf("%s\n", nama3[i]);
            printf("%s\n", review3[i]);
            printf("--------------------\n");
            baris++;
        }
    }
     if(b != 0){//jika iterator untuk bintang 2 tidak sama dengan 0 maka akan menampilkan review untuk bintang 2
         if(baris != 0){//syarat jika variabel baris sama dengan 0 maka tidak akan membuat baris baru
             printf("\n");
         }
        printf(">>> Review Bintang 2 <<<\n");
        printf("--------------------\n");
        for(i=0;i<b;i++){
            printf("%s\n", nama2[i]);
            printf("%s\n", review2[i]);
            printf("--------------------\n");
            baris++;//iterator baris bertambah
        }
    }
     if(a != 0){//jika iterator untuk bintang 1 tidak sama dengan 0 maka akan menampilkan review untuk bintang 1
         if(baris != 0){//syarat jika variabel baris sama dengan 0 maka tidak akan membuat baris baru
             printf("\n");
         }
        printf(">>> Review Bintang 1 <<<\n");
        printf("--------------------\n");
        for(i=0;i<a;i++){
            printf("%s\n", nama1[i]);
            printf("%s\n", review1[i]);
            printf("--------------------\n");
            baris++;//iterator baris bertambah
        }
    }
}//prosedur untuk menampilkan review berdasarkan rating
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 9 "Bisnis Online Loki" (PR12020) dalam mata kuliah
Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/