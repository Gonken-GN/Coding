#include <stdio.h>
#include <string.h>
typedef struct {
	char kata[100];
	char gan[100];
	char ud[100];
}kalimat;
int main () {
	int n, i ;
	n=0;
	kalimat input[50];
	scanf("%s", &input[n].kata);

	while(strcmp(input[n].kata, "mantul") != 0){
		n++;
		scanf("%s", &input[n].kata);
	}
	if(n>0){
		printf("=======\n");
		for(i=0;i<n;i++){
			printf("%d\n", strlen(input[i].kata));
		}
	}
	return 0;
}