#include <stdio.h>
#include <string.h>

//Prosedur menampilkan array
void printArray(int n, char arr[][50], int nilai[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        // menampilkan array sesuai index
        printf("%s %d\n", arr[i], nilai[i]);
    }
    printf("\n");
}

int main()
{
    int i, j;
    int n;
    scanf("%d", &n);
    char str[n][50];
    int nilai[n];
    for (i = 0; i < n; i++)
        scanf("%s %d", str[i], &nilai[i]);

    char kunci[50];
    int sisip;
    char pilih;
    scanf(" %c", &pilih);
    if(pilih == 'A'){
    //perulangan sebanyak isi array dimulai dari index ke 1
	    for (i = 1; i < n; i++)
	    {
	        strcpy(kunci, str[i]);
	        sisip = nilai[i];
	        j = i - 1;
	        // perulangan selama j >= 0 karena minimal index array adalah 0
	        // dan selama array dengan index j > key
	        while (j >= 0 && strcmp(kunci, str[j]) < 0)
	        {
	            // geser ke depan atau pindah posisi
	            strcpy(str[j + 1], str[j]);
	            nilai[j+1] = nilai[j];
	            j--;
	        }
	        strcpy(str[j + 1], kunci);
	        nilai[j+1] = sisip;
	    }
	}else{
		for (i = 1; i < n; i++)
	    {
	        strcpy(kunci, str[i]);
	        sisip = nilai[i];
	        j = i - 1;
	        // perulangan selama j >= 0 karena minimal index array adalah 0
	        // dan selama array dengan index j > key
	        while (j >= 0 && sisip < nilai[j])
	        {
	            // geser ke depan atau pindah posisi
	            strcpy(str[j + 1], str[j]);
	            nilai[j+1] = nilai[j];
	            j--;
	        }
	        strcpy(str[j + 1], kunci);
	        nilai[j+1] = sisip;
	    }
	}
	 printArray(n, str, nilai);
    return 0;
}