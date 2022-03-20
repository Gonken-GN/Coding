#include "header.h"
int main (){
    int i;//iterator
    char str[100];//varaibel menampung string inputan
    scanf("%s", str);//meminta user untuk memasukkan string
    palindrom(str);//fungsi prosedur untuk mengecek string palindrom atau tidak
    if(palindrom(str) == 0){//syarat jika string bukan palindrom
        printf("%s\n", str);//mencetak kembali string
    }else if(palindrom (str) == 1){//syarat jika string adalah palindrom
        cek(str);//mencetak pola
    }
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi TP10 Pola Bikin Soal Males Banget (BSMBC1) dalam mata kuliah Alpro 1
 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/