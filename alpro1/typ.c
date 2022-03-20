#include <stdio.h>
typedef struct {
	int nim;
	int nilai;
	
}siswa;

int main () {
	siswa pertama;
	siswa kedua;

	scanf("%d %d", &pertama.nim, &pertama.nilai);
	scanf("%d %d", &kedua.nim, &kedua.nilai);

	printf("NIM Siswa pertama : %d\n", pertama.nim);
	printf("Nilai Siswa pertama : %d\n", pertama.nilai);

	printf("NIM Siswa kedua : %d\n", kedua.nim);
	printf("Nilai siswa kedua : %d\n", kedua.nilai);
}