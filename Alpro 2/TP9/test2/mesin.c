#include <stdio.h>
#include "header.h"
		/*saya Hanifah Al Humaira 
		mengerjakan TP dalam mata kuliah Algoritma 
		dan Pemograman II untuk keberkahanNya maka saya 
		tidak melakukan kecurangan seperti yang telah 
		dispesifikasikan. Aamiin*/

void start (char id[]){ //prosedur untuk memulai mesin
    idx=0;
    cc = id[idx];
}
void inc (char id[]){ //prosedur untuk maju satu karakter pada pita
    idx++;
    cc=id[idx];
}
int eop(){ //fungsi untuk mengecek akhir dari pita
    if (cc=='.'){  //apabila karakter yang ditampilkan adalah titik (akhir pita)
        return 1;
    }
    else{
        return 0;
    }
}
void adv (char id[]){ //prosedur untuk meju melewati spasi
    idx++; //nilai index bertambah 1
    cc=id[idx];
    while ((cc==' ')&& (eop()==0)){
        idx++;
        cc=id[idx];
    }
}
char getCC(){ //fungsi untuk mengambil nilai karakter yang sedang ditampilan
    return cc;
}

