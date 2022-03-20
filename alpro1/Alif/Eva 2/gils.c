 #include "anagram.h"

int main () {

	int i;
	int n;
	int m;

	scanf("%d", &n); //scan jumlah nama

	char nama[n][100]; 

	for(i=0;i<n;i++) {
		scanf("%s", &nama[i]); //scan nama per array of string	
	}

	scanf("%d", &m); //scan jumlah anagram

	char anagram[m][100];

	for(i=0;i<m;i++) {
		scanf("%s", &anagram[i]); //scan anagram per array of string
	}

	cek(n, nama, m, anagram); //prosedur cek

	return 0;
}