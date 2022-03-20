#include <stdio.h>
typedef struct {
	int nim;
	int nilai;
}mahasiswa;

int main () {
	mahasiswa m1, m2, m3;
	
	printf("NIM mahasiwa 1\n");
	scanf("%d", &m1.nim);
	printf("Nilai mahasiswa 1\n");
	scanf("%d", &m1.nilai);

	printf("NIM mahasiswa 2\n");
	scanf("%d", &m2.nim);
	printf("Nilai mahasiwa 2\n");
	scanf("%d", &m2.nilai);

	printf("NIM mahasiswa 3\n");
	scanf("%d", &m3.nim);
	printf("Nilai mahasiswa 3\n");
	scanf("%d", &m3.nilai);

	if ((m1.nilai > m2.nilai) && (m1.nilai > m3.nilai)) {
		printf("Nilai terbesar : %d\n", m1.nilai);
		printf("Diraih oleh mahasiswa dengan NIM : %d\n", m1.nim);
	}
	if ((m2.nilai > m1.nilai) && (m2.nilai > m3.nilai)) {
		printf("Nilai terbesar : %d\n", m2.nilai);
		printf("Diraih oleh mahasiswa dengan NIM : %d\n", m2.nim);
	}
	if ((m3.nilai > m1.nilai) && (m3.nilai > m2.nilai)) {
		printf("Nilai terbesar : %d\n", m3.nilai);
		printf("Diraih oleh mahasiswa dengan NIM : %d\n", m3.nim);
	}

}