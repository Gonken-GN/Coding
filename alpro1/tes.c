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
	//lakukan do-while selama bukan kata selesai
	do{
		//input kata
		scanf("%s", input[n].kata);
		//jika bukan selesai, jumlahkan
		if (strcmp(input[n].kata, "mantul") != 0){
			input[n].len = strlen(input[n].kata);
			n++;
		}
	}while(strcmp(input[n].kata, "mantul") != 0);
	

	/*tampilkan semua string jika n bernilai lebih dari 0*/
	if (n > 0)
	{
		printf("========\n");
		for (i = 0; i < n; ++i)
		{
			printf("%d\n", input[i].len);
		}
	}

	return 0;
}