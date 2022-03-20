#include <stdio.h>
#include <string.h>

//deklarasi bungkusan
typedef struct{
	char kata[100];
	int len;
}kalimat;

int main()
{
	//deklarasi
	int n, i;
	n = 0;
	//deklarasi variabel bungkusan
	kalimat input[50];
	//input kata untuk memancing penggunaan while
	scanf("%s", &input[n].kata);
	//lakukan selama bukan kata selesai
	while(strcmp(input[n].kata, "selesai") != 0) {
		input[n].len = strlen(input[n].kata);
		//jumlahkan
	    n++;
	    //masukkan kata yang baru
	    scanf("%s", &input[n].kata);
	}

	/*tampilkan semua string jika n bernilai lebih dari 0*/
	if (n > 0)
	{
		printf("========\n");
		for (i = 0; i < n; ++i)
		{
			printf("%s\n", input[i].kata);
		}
	}

	return 0;
}