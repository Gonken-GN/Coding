#include<stdio.h>
#include<string.h>
typedef struct{
	char huruf[100];
	char gan;
	char udh;
	char baru[100];
	int inde;
	int inde2;
	int asci;
	char barul[100];
	char barug[100];
}var;
int main () {
	int n, i, j;
	n = 0;
	var input[100];
	do{
		scanf("%s", &input[n].huruf);
		if(strcmp(input[n].huruf, "santuy") != 0){
			n++;
			scanf(" %c %c", &input[n].gan, &input[n].udh);
		}
	}while(strcmp(input[n].huruf, "santuy") != 0);

	int count1;
	int count2;
	i=0;
	while(i<n){
		j=0;
		count1 = 0;
		count2 = 0;
		while(j<strlen(input[i].huruf)){
			if((input[i].huruf[j] == input[i].gan) && count1 == 0){
				input[i].inde = j;
				count1++;
			}else if((input[i].huruf[j] == input[i].udh) && count2 == 0){
				input[i].inde2 = j;		
				count2++;
				}
			j++;
		}
		if(count2 == 0){
			input[i].inde2 = 50;
		}
		i++;
	}
	i=0;
	while(i<n){
		if(input[i].inde2 == 50){
			j=0;
			while(j<strlen(input[i].huruf)){
				if(input[i].huruf[j] == input[i].gan){
					input[i].baru[j] = input[i].udh;
				}else if(input[i].huruf[j] != input[i].gan){
					input[i].baru[j] = input[i].huruf[j];
				}
				j++;
			}
			input[i].baru[j] = '\0';	
		}else if(input[i].inde < input[i].inde2){
			j=0;
			while(j<strlen(input[i].huruf)){
				if(j<input[i].inde2){
					if(input[i].huruf[j] == input[i].gan){
						input[i].baru[j] = input[i].udh;
					}else if(input[i].huruf[j] != input[i].gan){
						input[i].baru[j] = input[i].huruf[j];
						}
				}else if(j>=input[i].inde2){
					input[i].baru[j] = input[i].huruf[j];
				}
				j++;
			}
				input[i].baru[j] = '\0';
			}else if(input[i].inde > input[i].inde2){
				strcpy(input[i].baru, input[i].huruf);
			}
		i++;
	}
	i=0;
	while(i<n){
		input[i].asci = 0;
		i++;
	}
	int a, b;
	a=0;
	b=0;
	i=0;
	while(i<n){
		j=0;
		while(j<strlen(input[i].baru)){
			input[i].asci += input[i].baru[j];
				j++;
			if(input[i].asci % 2 == 0){
				strcpy(input[a].barug, input[i].baru);
				a++;
			}else if(input[i].asci % 2 == 1){
				strcpy(input[b].barul, input[i].baru);
				b++;
			}
		}
		i++;
	}
	printf("=== KATA BAKU ===\n");
	for(i=0;i<n;i++){
		printf("%s\n", input[i].baru);
		i=0;
	}
	return 0;
/*Saya Raden Fadhil A.A (2004305) mengerjakan  evaluasi TP8 Kamus Besar Perusahaan While (KBPW2020) dalam mata kuliah Alpro 1
 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
}