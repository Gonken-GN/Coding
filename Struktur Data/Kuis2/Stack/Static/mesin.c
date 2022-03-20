#include "header.h"
void createEmpty(stack *S){
    (*S).top = -1;//inisialisasi top
}
int isEmpty(stack S){
    int hasil = 0;
    //jika stack kosong
    if(S.top == -1){
        hasil = 1;
    }
    return hasil;
}
int isfull(stack S){
    int hasil = 0;
    //jika stack penuh
    if(S.top == 49){
        hasil = 1;
    }
    return hasil;
}
void push(char nama[], char bahan[], stack *S){
    if(isfull(*S) == 1){
        printf("Stack sudah penuh\n");
    }else{
        //jika stack masih kosong maka akan menjadi elemen pertama
        if(isEmpty(*S) == 1){
            (*S).top = 0;
            strcpy((*S).data[0].bahan, bahan);
            strcpy((*S).data[0].nama, nama);
        }else{
            //jika stack terdapat isi
            (*S).top++;
            strcpy((*S).data[(*S).top].bahan, bahan);
            strcpy((*S).data[(*S).top].nama, nama);
        }
    }
}
void pop(stack *S){
    //jika stack terdapat 1 elemen saja
   if((*S).top == 0){
       (*S).top = -1;
   }else{
       if((*S).top != -1) (*S).top--;
   }
}
void printelemen(stack S){
    if(S.top != -1){
        int i;
        int iterator = 1;
        for(i=S.top;i>=0;i--){
            printf("%s %s\n", S.data[i].nama ,S.data[i].bahan);
            iterator++;
        }
    }else{
        printf("- Stack Kosong\n");
    }
}
void printelemenAll(stack S, int banyak){
    if(S.top != -1){
        int i;
        int iterator = 1;
        for(i=S.top;i>=0;i--){
            printf("%s %s\n", S.data[i].nama ,S.data[i].bahan);
            iterator++;
        }
    }else{
        printf("kosong\n");
    }
}
int ambil(stack *S, stack *semua, int banyak, int iteratorS){
  int i, j, indeks = 0, indeks2 = 0;
  iteratorS = 0;
  for(i=(*S).top;i>=0;i--){
      int temu = 0;
      j=0;
      while((j<banyak) && (temu != 1)){
          if((strcmp(clear[j], (*S).data[i].nama) == 0) ){
              temu = 1;
              indeks = i;
          }
          
          j++;
      }
  }
  for(i=(*S).top;i>=indeks;i--){
      j=0;
      int temu2 = 0;
      while((j<banyak) && (temu2 != 1)){
          if(strcmp(clear[j], (*S).data[i].nama) != 0){
              iteratorS++; 
              push((*S).data[i].nama, (*S).data[i].bahan, semua);
              pop(S);
              temu2 = 1;
          }
          j++;
      }
    }
    iteratorS -= 1;
    return iteratorS;
}
void sementara(stack S,stack *semua, int banyak){
    int i, j, temu = 0;
    for(i=S.top;i>=0;i--){
        for(j=0;j<banyak;j++){
            if(strcmp(clear[j], S.data[i].nama) != 0){
                temu = 1;
            }
            if(temu != 1){
                push(S.data[i].nama, S.data[i].bahan, semua);
                
            }else{
                break;
            }
        }
    }
}
void geser(stack *S, stack *W){
    int i, iterator = 0;
    if((*S).top != -1){
        for(i=(*S).top;i>=0;i--){
           if(iterator == (*S).top){
               push((*S).data[iterator].nama, (*S).data[iterator].bahan, W);
               pop(S);
           }
           iterator++;
        }
    }
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Kuis2 dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/