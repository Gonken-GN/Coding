#include <stdio.h>
#include "header.h"
		/*saya Hanifah Al Humaira 
		mengerjakan TP dalam mata kuliah Algoritma 
		dan Pemograman II untuk keberkahanNya maka saya 
		tidak melakukan kecurangan seperti yang telah 
		dispesifikasikan. Aamiin*/
int main(){
    char pita[100]; //string untuk menyimpan pita
    scanf("%s", &pita);
	char id[100];
	scanf("%s", &id); //string untuk menyimpan id
	char temp;
	char temp2;
	char temp3;
	int hasil = 0;
	
    start(id); //memulai mesin
    
    while(eop()==0){
        temp=getCC(); //menyimpan hurum pertama'rar'
		inc(id);
		if(eop()==0){
			temp2=getCC(); //menyimpan hurum kedua 'xcv'
			inc(id);
			if(eop()==0){
			temp3=getCC(); //menyimpan hurum ketiga 'xar'
				if((temp == 'r') && (temp2 == 'a') && (temp3 == 'r')){
					hasil = 1;
				}
				if((temp == 'x') && (temp2 == 'c') && (temp3 == 'v')){
					hasil = 1;
				}
				if((temp == 'x') && (temp2 == 'a') && (temp3 == 'r')){
					hasil = 1;
			}
		}
    }
}

    if(hasil == 1){
		printf("%s adalah agen rahasia.\n", pita);
	}else{
		printf("%s adalah pegawai biasa.\n", pita);
	}

return 0;
}