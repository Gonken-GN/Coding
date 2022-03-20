#include"jls21.h"

void insertion(int n, extracurricular arr[]){
	int i,j;
	extracurricular temp; //variabel penampung untuk sisipan
	
	for(i=0; i<n; i++){
        strcpy(temp.name, arr[i].name); //menyisipkan array terlebih dahulu
		temp.average = arr[i].average;
	j = i - 1;
        while((temp.average < arr[j].average) && (j>=0)){ //membanding nilai penyisipan dengan yang asli
            strcpy(arr[j+1].name, arr[j].name);
			arr[j+1].average = arr[j].average;
            j = j - 1;
        }
        strcpy(arr[j+1].name, temp.name); 
		arr[j+1].average = temp.average;
		
		}
}

void print(int n, extracurricular arr[]){
	int i;
	for(i=0; i<n; i++){ //menampilkan hasil sortingan
		printf("%s\n", arr[i].name);
	}
}
		
void sequential_search(int n, extracurricular arr[], int index){
	int i=0;
	int found = 0; //basis searching
	
	while((i<=n) && (found == 0)){ 
		if(i != index){
			i++;
		}else {
			found = 1; //jika searching berakhir ditandai dengan 1
			printf("Yang Diminta : %s", arr[i].name);
		}
	}
}

void binary_search(int n, extracurricular arr[], int index){
	int i=0,k=0;
	int found = 0; //basis searching
	
	while((i<=n) && (found == 0)){
		k = (i+n)/2; // indeks pivot
		if(k == index){
			found = 1; //jika searching berakhir ditandai dengan 1
			printf("Yang Diminta : %s", arr[k].name);
			
		}else {
			if(k > index){ 
				n = k - 1; 
			}else {
				i = k + 1;
			}
			
		}
	}
}