#include "header.h"

/*Saya Novaldi Sandi Ago 2003941
mengerjakan Soal no 16 dalam mata kuliah Struktur Data
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/

int main(){
	char opsi[5];
	int n, m, sama = 1;
	scanf("%s%d", opsi, &n);
	char word[n][100];
	for(int i = 0; i < n; i++){
		scanf("%s", word[i]);
	}
	scanf("%s%d", opsi, &m);
	if(n != m)
		sama = 0;
	char kata[m][100];
	for(int i = 0; i < m; i++){
		scanf("%s", kata[i]);
		if(sama == 1 && strcmp(kata[i], word[i]) != 0)
			sama = 0;
	}
	tampil(n, m, sama, word, kata);
	return 0;
}