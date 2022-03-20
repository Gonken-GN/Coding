#include "header.h"
int main (){
    int i, j, n, m, k;//iterator
    scanf("%d", &n);//jumlah array pertama
    data lagu1[n];//data terstruktur untuk ibnu
    for(i=0;i<n;i++){
        scanf("%f %s", &lagu1[i].durasi, &lagu1[i].nama);//proses meminta input durasi dan nama lagu untuk ibnu
    }
    scanf("%d", &m);//banyaknya jumlah array kedua
    data lagu2[m];//data terstruktur untuk array kedua
    for(i=0;i<m;i++){
        scanf("%f %s", &lagu2[i].durasi, &lagu2[i].nama);//proses menginput durasi dan nama lagu untuk array kedua
    }
    scanf("%d", &k);//banyaknya jumlah arrray ketiga
    data lagu3[k];//data terstruktur untuk array ketiga
    for(i=0;i<k;i++){
        scanf("%f %s", &lagu3[i].durasi, &lagu3[i].nama);//proses menginput durasi dan nama lagu untuk array ketiga
    }
    scanf(" %c %c", &metode, &urut);//meminta user untuk memilih metode dan urut yang akan digunakan
    //proses sorting
    if(metode == 'q'){//sorting dengan metode selection sort
    //maka jalankan prosedur selection sort
        quick(lagu1, 0, n-1);
        quick(lagu2, 0, m-1);
        quick(lagu3, 0, k-1);
    }else if(metode == 'i'){//sorting dengan metode insertions sort
    //maka jalankan prosedur insertion sort
        insert(lagu1, n);
        insert(lagu2, m);
        insert(lagu3, k);
    }else if(metode == 'b'){//sorting dengan metode bubble sort
    //maka jalankan prosedut bubble sort
        buble(lagu1, n);
        buble(lagu2, m);
        buble(lagu3, k);
    }else if(metode == 's'){//sort dengan metode selection sort
    //maka jalankan prosedur selection sort
        selec(lagu1, n);
        selec(lagu2, m);
        selec(lagu3, k);
    }
    data merge1[n+m];//data terstruktur untuk penggabungan pertama 
    data merge2[n+m+k];//data tersetruktur untuk penggbaungan terakhir
    gabung(n, m, lagu1, lagu2, merge1);//proses menggabungkan dan mensorting array 1 dan array 2
    gabung(n+m, k, merge1, lagu3, merge2);//proses menggabungkan dan mensorting array 3 dan array 4
    printf("Daftar Lagu Keluarga:\n");
    //proses menampilkan data lagu yang telah disorting (asc atau dsc)
    for(i=0;i<n+m+k;i++){
        printf("%0.2f %s\n", merge2[i].durasi, merge2[i].nama);
    }
    int found = 0;//variabel untuk menyimpan apakah setngah dari data yang telah digabungkan dan disorting
    int l = 0;//iterator
    char like[50][100];//variabel untuk menyimpan jika didalam  setenga array yang telah digabung terdapat strin dari array pertama
    //proses mencari string dari array yang telah digabung dengan array pertama
    if((n+m+k) % 2 == 1){//jika jumlah array gabungan ganjil maka dibulatkan keatas
        for(i=0;i<((n+m+k) / 2)+1;i++){
            l=0;
            while(l<n){
                if(strcmp(lagu1[l].nama, merge2[i].nama) == 0){
                    strcpy(like[found], lagu1[l].nama);
                    found++;
                }
                    l++;
            }
        }    
    }else if((n+m+k) % 2 == 0){//jika jumlah array yang telah digabung berjumlah genap
        for(i=0;i<((n+m+k) / 2);i++){
            l=0;
            while(l<n){
                if(strcmp(lagu1[l].nama, merge2[i].nama) == 0){
                    strcpy(like[found], lagu1[l].nama);
                    found++;
                }
                    l++;
            }
        }
    }
    printf("\nLagunya Ibnu:\n");
    //proses menampilkan apakah didalam array yang telah digabung tedapat string dari array pertama
   if(found != 0){//jika terdapat string maka tampilkan string apa saja yang terdapat di dalamnya
      for(i=0;i<found;i++){
          printf("%s\n", like[i]);
      }
   }else{//jika tidak
       printf("Tidak memutar lagu Ibnu\n");
   }
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Tugas Pratikum 6 dalam mata kuliah
Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/