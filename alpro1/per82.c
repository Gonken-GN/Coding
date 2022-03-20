#include <stdio.h>
#include <string.h>

typedef struct {
	char kata[100];	
	char j[100];
	char b[100]
}kalimat;

int main () {
	int i, n, j;
	n = 0;
	kalimat input[50];
	
	do{
		scanf("%s", &input[n].kata);
		if(strcmp(input[n].kata, "selesai") != 0){
			
			n++;
		}
	}while(strcmp(input[n].kata, "selesai") != 0);
	return 0;
}	