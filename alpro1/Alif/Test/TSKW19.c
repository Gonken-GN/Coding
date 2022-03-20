//Saya Alif Rizza Z mengerjakan evaluasi TSKW19 dalam mata kuliah Alpro 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.//

#include "TSKW19.h"

int main () {
	int i;
	int a;
	char penyakit[101];
	char elementP[101];

	scanf("%s", &penyakit);
	scanf("%s", &elementP);

	scanf("%d", &a);

	char penawar[a][101];
	char elementO[a][101];

	for(i=0;i<a;i++) {
		scanf("%s", &penawar[i]);
		scanf("%s", &elementO[i]);
	}

	//^^Masukan^^// 

	heal(penyakit, elementP, a, penawar, elementO);

	//^^Fungsi^^//

	return 0;
}

