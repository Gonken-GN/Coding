#include"jls21.h"

int main(){
	int n;
	scanf("%d", &n); //masukan banyak masukan array
	
	extracurricular student[n]; //penampung utama
	extracurricular before[n];  //penampung untuk parameter terurut dan tidak terurut
	
	int i,j;
	for(i=0; i<n; i++){ 
		scanf("%s", student[i].name);  //masukan nama siswa
		scanf("%d", &student[i].m);  //masukan jumlah array nilai dari siswa
		for(j=0; j<student[i].m; j++){
			scanf("%d", &student[i].score[j]); //masukan nilai dari siswa dobel array karena berada dalam array i dan j
		}
	}
	
	for(i=0; i<n; i++){ //penjumlahan dan rata rata nilai siswa
		student[i].amount = 0;
		for(j=0; j<student[i].m; j++){
			student[i].amount = student[i].amount + student[i].score[j]; //penjumlahan nilai siswa
			student[i].average = (float)student[i].amount/student[i].m; //rata rata nilai siswa
		}
	}
	
	int index;
	scanf("%d", &index); //masukan indeks yang diminta
	
	int tag=0; //penanda parameter untuk terurut dan tidak terurut
	i=0;
	while((i<n-1)&&(tag == 0)){ //n - 1 agar indeks terakhir tidak berlanjut
		if(student[i].average < student[i+1].average){ //jika terurut
			i++;
		}else if(student[i].average > student[i+1].average){ //jika tidak terurut
			tag = 1;
			i++;
		}
		
	}
	
	printf("\n");
	if(tag == 1){                           //jika tidak terurut
		insertion(n,student);
	    print(n,student);
	    printf("\n");
		sequential_search(n,student,index);
	}else {                                //jika terurut
		insertion(n,student);
	    print(n,student);
	    printf("\n");
		binary_search(n,student,index);
	}
	
	
	
	return 0;
}