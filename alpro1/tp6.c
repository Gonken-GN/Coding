#include <stdio.h>

/*Saya Novaldi Sandi Ago 2003941
mengerjakan soal tp6 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

int main(){
	int i = 0, j, k, UTAMA, BANYAK, O, P, Q;
	scanf("%d", &BANYAK);
	char A[BANYAK], B[BANYAK][100], E[BANYAK][100], Y[100];
	int D[BANYAK], F[BANYAK], G[BANYAK];
	while(i < BANYAK){
		scanf(" %c", &A[i]);
		j = 0;
		while((j < 100) && (B[i][j - 1] != ';')){
			scanf(" %c", &B[i][j]);
			j++;
		}
		D[i] = j - 1;
		i++;
	}
	scanf("%d", &UTAMA);
	i = 0;
	while(UTAMA > 0){
		O = UTAMA % 2;
		UTAMA = UTAMA / 2;
		Y[i] = O + 48;
		i++;
	}
	P = i;
	char C[P];
	i = 0;
	while(i < P){
		C[P - i - 1] = Y[i];
		i++;
	}
	printf("Hasil Gabung :\n");
	i = 0;
	while(i < BANYAK){
		j = 0;	
		k = 0;
		while(j < 100){
			if(j < P){
				E[i][k] = C[j];
				k++;
			}
			if(j < D[i]){
				E[i][k] = B[i][j];
				k++;
			}
			j++;
		}//Proses penyatuan bilangan utama ke biner lainnya
		D[i] = k;
		F[i] = 0;
		j = 0;
		while(j < D[i]){
			Q = 1;
			if(E[i][j] == '1'){
				k = 0;
				while(k < (D[i] - j - 1)){
					Q = Q * 10;
					k++;
				}
			}
			else{
				Q = 0;
			}
			F[i] = F[i] + Q;
			j++;
		}//Pengubahan biner karakter gabungan ke integer agar dapat diubah ke decimal
		printf("%d\n", F[i]);
		i++;
	}
	printf("\n");
	i = BANYAK - 1;
	while(i >= 0){
		printf("%c", A[i]);
		i--;
	}
	i = 0;
	while(i < BANYAK){
		j = 1;
		k = 0;
		while(F[i] > 0){
            k = k + (F[i] % 10) * j;
            F[i] = F[i] / 10;
            j = j * 2;
        }//pengubahan bilangan biner ke desimal
        printf("-%d", k);//Menampilkan bilangan decimal
        i++;
	}
	printf("\n");
	return 0;
}