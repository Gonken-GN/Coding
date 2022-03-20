#include <stdio.h>
#include <string.h>

void gabung_asc(int n, char arr1[][20], int m, char arr2[][20], char arr3[][20]);
void quick(int l, int r, char arr[][20]);

int main(){

	int i, n, m, o;

	scanf("%d", &n);
	char arr1[n][20];
	for(i=0; i<n; i++){
		scanf("%s", &arr1[i]);
	}

	scanf("%d", &m);
	char arr2[m][20];
	for(i=0; i<m; i++){
		scanf("%s", &arr2[i]);
	}

	scanf("%d", &o);

	char arr3[o][20];
	for(i=0; i<o; i++){
		scanf("%s", &arr3[i]);
	}


	quick(0, n-1, arr1);
	quick(0, m-1, arr2);
	quick(0, o-1, arr3);

	char hasil[n+m][20];
	gabung_asc(n, arr1, m, arr2, hasil);

	char hasilAkhir[n+m+o][20];
	gabung_asc(n+m, hasil, o, arr3, hasilAkhir);

	//print arr gabungan
	printf("================\n");
	for(i=0; i<n+m+o; i++){
		printf("%s\n", hasilAkhir[i]);
	}

	return 0;
}

//penggabungan secara asc
void gabung_asc(int n, char arr1[][20], int m, char arr2[][20], char arr3[][20]){

	int i=0, j=0, k=0, l=0;

	// Pengulangan mengisi tabel
	while ((i<n) && (j<m)){

		// Jika isi arr 1 lebih besar dibandingkan isi arr2
		if(strcmp(arr1[i], arr2[j]) > 0){  // pergantian asc / desc
			// Masukan isi arr1 ke arr3
			strcpy(arr3[k], arr1[i]); 
			i += 1;
			k += 1;

		// Jika isi arr 2 lebih besar dibandingkan isi arr1	
		}else if(strcmp(arr2[j], arr1[i]) > 0){ // pergantian asc / desc
			// Masukan isi arr2 ke arr3
			strcpy(arr3[k], arr2[j]);
			j++;
			k++;
	
		// Jika besar isi kedua aray sama
		}else{
			// Masukan isi arr1 ke arr3
			strcpy(arr3[k], arr1[i]);
			i++;
			k++;

			// Masukan isi arr2 ke arr3
			strcpy(arr3[k], arr2[j]);
			j++;
			k++;
		}
	}

	if(i<n){
		// Memindahkan sisa
		for(l = i; l<n; l++){
			strcpy(arr3[k], arr1[l]);
			k++;
		}
	}

	// Jika panjang arr1 lebih panjang
	if(j<m){
		// Memindahkan sisa
		for(l = j; l<m; l++){
			strcpy(arr3[k], arr2[l]);
			k++;
		}
	}
}

void quick(int l, int r, char arr[][20]){
	int i, j;
	char temp[20];
	i=l; j=r;

	do{
		while((strcmp(arr[i], arr[r])< 0) && (i<=j)){
			//mencegah i berjalan jauh melewati batas j
			i+=1;
		}

		while((strcmp(arr[j], arr[l])>0) && (i<=j)){
			//mencegah i berjalan terlalu jauh melewati batas i
			j-=1;
		}

		if(i<j){
			strcpy(temp, arr[i]);
			strcpy(arr[i], arr[j]);
			strcpy(arr[j], temp);

			i+=1;
			j-=1;
		}
	}while(i<j);

	if(l<j){
		quick(l,j, arr);
	}
	if(i<r){
		quick(i,r, arr);
	}
}