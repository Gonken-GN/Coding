#include "header.h"
int trafek(int a, int b, int matriks[a][b]){//fungsi prosedur untuk mencari kolom terakhir matriks yang telah di refleksikan dan ditranspose
    int i, j, q = 0, w;//iterator
    int matriksr[a][b];//variabel untuk menampung matriks yang telah direfleksikan y(ke atas)
    c=0;//inisialisasi agar mencegah terjadinya bug
    for(i=a-1;i>=0;i--){//perulangan untuk merefleksikan ke atas (refleksi y) matriks awal
        w=0;
        for(j=0;j<b;j++){
            matriksr[q][w] = matriks[i][j];
            w++;
        }
        q++;
    }
    for(i=0;i<b;i++){//perulangan untuk mentransposekan matriks yang telah direfleksikan
        for(j=0;j<a;j++){
            matrikst[i][j] = matriksr[j][i];
        }
    }
    for(i=0;i<a;i++){//perulangan untuk mentransposekan matriks yang telah ditransposekan
        for(j=0;j<b;j++){
            matrikst2[i][j] = matrikst[j][i];
        }
    }
    for(i=0;i<b;i++){//perulangan untuk mencari nilai jumlah kolom terakhir tiap baris di matriks
        for(j=0;j<a;j++){
            if(j==a-1){//syarat jika iterator sudah mencapai indeks kolom terakhir di matriks
                c += matrikst[i][j];//menjumlahkan kolom terakhir tiap baris pada matriks
            }
        }
    }
    return c;
}
void putarR(int a, int b, int matriks[a][b]){//prosedur untuk membuat matriks rotasi kanan
    int i, j, q = 0, w;//iterator
    if(c % 4 == 1){//jika nilai kolom terakhir bernilai 1
        for(i=0;i<a;i++){//perulangan untuk membuat matriks akhir yang telah dirotasikan sebanyak 1 ke arah kanan
            w=0;
            for(j=b-1;j>=0;j--){
                matriksa[q][w] = matrikst2[i][j];//maka matriks yang telah di transposekan (setelah di refleksikan dan ditransposekan) akan dirotasikan ke kanan sebanyak 1 putaran
                w++;
            }
            q++;
        }
    }else if(c % 4 == 2){//jika nilai kolom terakhir bernilai 2
        for(i=b-1;i>=0;i--){//perulangan untuk membuat matriks akhir yang telah dirotasikan sebanyak 2 putaran ke arah kanan
         w=0;
            for(j=a-1;j>=0;j--){
                matriksa[q][w]= matrikst[i][j];//maka matriks yang telah direfleksikan dan ditransposekan akan dirotasikan sebanyak 2 kali ke arah kanan
                w++;
            }
        q++;
        }
    }else if(c % 4 == 3){//jika nilai kolom terakhir setelah dimodulo 4 bernilai 3
        for(i=a-1;i>=0;i--){//perulangan untuk membuat matriks akhir yang akan dirotasikan sebanyak 3 putaran ke arah kanan
         w=0;
            for(j=0;j<b;j++){
                matriksa[q][w] = matrikst2[i][j];//maka matriks yang telah direfleksikan dan ditransposekan akan dirotasikan sebanyak 4 putaran ke arah kanan
                w++;
            }
            q++;
        }
    }else if(c % 4 == 0){//jika nilai kolom terakhir setelah dimodulo 4 bernilai 0
        for(i=0;i<b;i++){//perulangan untuk membuat matrisk akhir dengan cara dirotasikan sebanyak 4 putaran ke arah kanan(atau tidak dirotasikan)
        w=0;
            for(j=0;j<a;j++){
                matriksa[q][w] = matrikst[i][j];//maka matriks yang telah direfleksikan dan ditransposekan akan dirotasikan sebanyak 4 putaran ke arah kenan
                w++;
            }
            q++;
        }
    }
   if(c % 2 == 0){//jika nilai jumlah kolom terakhir bernilai genap
    for(i=0;i<b;i++){//perulangan dengan kolom input user sebagai baris untuk matriks akhir
        for(j=0;j<a;j++){//perulangan dengan baris input user sebagai baris untuk matriks akhir
            if(j != a-1){//syarat untuk tidak memberikan spasi pada kolom akhir matriks
                printf("%d ", matriksa[i][j]);
             }else{
                printf("%d", matriksa[i][j]);
             }
        }
        printf("\n");
    }//perulangan untuk menampilkan matriks akhir(yang telah dirotasikan) 
   }else if(c % 2 == 1){//jika nilai jumlah kolom terakhir bernilai ganjil
       for(i=0;i<a;i++){//perulangan dengan baris input user sebagai baris untuk matriks akhir
           for(j=0;j<b;j++){//perulangan dengan kolom input user sebagai baris untuk matriks akhir
               if(j != b-1){//syarat untuk tidak memberikan spasi apda kolom akhir matriks
                   printf("%d ", matriksa[i][j]);
               }else{
                   printf("%d", matriksa[i][j]);
               }
           }
           printf("\n");
       }
   }//perulangan untuk menampilkan matriks akhir(yang telah dirotasikan)
}
void putarL(int a, int b, int matriks[a][b]){//prosedur untuk membuat matriks rotasi kiri
    int i, j, q = 0, w;//iterator
    if(c % 4 == 1){//jika nilai jumlah kolom terakhir matriks setelah dimodulo 4 bernilai 1
        for(i=a-1;i>=0;i--){
         w=0;
            for(j=0;j<b;j++){
                matriksa[q][w] = matrikst2[i][j];//maka matriks yang telah ditransposekan (setelah direfleksikan dan ditransposekan) akan dirotasikans ebanyak 1 kali ke arah kiri
                w++;
            }
            q++;
        }//perulangan untuk membuat matriks akhr dengan cara dirotasikan sebanyak 1 kali ke arah kiri
    }else if(c % 4 == 2){//jika nilai jumlah kolom terakhir matriks setelah dimodulo 4 bernilai 2
        for(i=b-1;i>=0;i--){
         w=0;
            for(j=a-1;j>=0;j--){
                matriksa[q][w]= matrikst[i][j];//maka matriks yang telah direfleksikan dan ditranspsoekan akan dirotasikan sebanyak 2 putaran ke arah kiri
                w++;
            }
        q++;
        }//perulangan untuk membuat matriks akhir dengan cara dirotasikan sebanyak 2 kali ke arah kiri 
    }else if(c % 4 == 3){//jika nilai jumlah kolom terakhir pada matriks setelah dimodulo 4 bernilai 3
        for(i=0;i<a;i++){
            w=0;
            for(j=b-1;j>=0;j--){
                matriksa[q][w] = matrikst2[i][j];//maka matriks yang telah ditransposekan (setelah direfleksikan dan ditransposekan) akan dirotasikan sebanyak 3 putaran k3 arah kiri
                w++;
            }
            q++;
        }//perulangan untuk membuat matriks akhir dengan cara dirotasikans ebanyak 3 kali ke arah kiri
    }else{//jika nilai jumlah kolom terakhir matriks setelah dimodulo 4 berniilai 0
        for(i=0;i<b;i++){
        w=0;
            for(j=0;j<a;j++){
                matriksa[q][w] = matrikst[i][j];//maka matriks yang telah direfleksikan dan ditransposekan akan menjadi matriks akhir
                w++;
            }
            q++;
        }
    }//perulangan untuk membuat matriks akhir denganc ara dirotasikans sebanyak 4 kali ke arah kiri (atau tidak dirotasikan)
    if(c % 2 == 0){//jika nilai jumlah kolom akhr bernilai genap
    for(i=0;i<b;i++){//perulangan dengan kolom input user sebagai baris pada matriks akhir
        for(j=0;j<a;j++){//perulangan dengan baris input user sebagai kolom pada matriks akhir
            if(j != a-1){//syarat untuk tidak memberikan spasi pada kolom akhir matriks
                printf("%d ", matriksa[i][j]);
             }else{
                printf("%d", matriksa[i][j]);
             }
        }
        printf("\n");
    }//perulangan untuk menampilkan matriks akhir yang telah dirotasikan
   }else if(c % 2 == 1){//jika nilai jumlah kolom akhir bernilai ganjil
       for(i=0;i<a;i++){//perulangan dengan baris input user sebagai baris pada matriks akhir
           for(j=0;j<b;j++){//perulangan dengan kolom input user sebagai kolom pada matriks akhir
               if(j != b-1){//syarat untuk tidak memberikan spasi pada kolom akhir matriks
                   printf("%d ", matriksa[i][j]);
               }else{
                   printf("%d", matriksa[i][j]);
               }
           }
           printf("\n");
       }
   }//perulangan untuk menampilkan matriks akhir
}
int sama(int a, int b, int matriks[a][b]){//fungsi prosedur untuk mengetahui apakah matriks yang telah dirotasikan akan sama dengan matriks awal(input user)
    int i, j, count = 0;//iterator
    if(c % 2 == 0){//jika nilai jumlah kolom akhir pada matriks bernilai genap
        for(i=0;i<b;i++){
            for(j=0;j<a;j++){
                if(matriksa[i][j] == matriks[i][j]){//jika nilai matriks akhir pada baris dan kolom tertentu sama dengan nilai matriks awal pada baris dan kolom tertentu
                    count++;
                }
            }
        }
    }else{//jika nilai jumlah kolom akhir pada matriks bernilai ganjil
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                if(matriksa[i][j] == matriks[i][j]){//jika nilai matriks akhir pada baris dan kolom tertentu sama dengan nilai matriks awal pada baris dan kolom tertentu
                    count++;
                }
            }
        }
    }
    if(count == (a*b)){//jika jumlah nilai yang sama, sama besar dengan ordo matriks
        return 1;
    }else{
        return 0;
    }
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 1 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/