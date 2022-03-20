#include <stdio.h>
#include <string.h>

typedef struct{
	char nama[100];
	int red;
	int green;
	int blue;
}warna;

int cariData(int m, warna matriks[m], char cari[]);

int main()
{
	int n, m, i, j;

	scanf("%d %d", &n, &m);

	warna matriks[n][m];

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			scanf("%s %d %d %d", matriks[i][j].nama, &matriks[i][j].red, &matriks[i][j].green, &matriks[i][j].blue);
		}
	}

	char cari[100];
	scanf("%s", cari);

	for (i = 0; i < n; ++i)
	{
		printf("Baris %d : \n", i+1);
		if(cariData(m, matriks[i], cari) == 0) printf("TIDAK ADA.\n");
		printf("=========================\n");
	}
	return 0;
}

int cariData(int m, warna *matriks, char cari[]){
	int i;
	int found = 0;

	for (i = 0; i < m; ++i)
	{
		if (strcmp(matriks[i].nama, cari) == 0)
		{
			found = 1;
			printf("Detail Warna Merah : %d\n", matriks[i].red);
			printf("Detail Warna Hijau : %d\n", matriks[i].green);
			printf("Detail Warna Biru : %d\n", matriks[i].blue);
			printf("------------------------\n");
		}
	}

	return found;
}