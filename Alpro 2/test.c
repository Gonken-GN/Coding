#include <stdio.h>
int main()
{
	 int i;
	 float n;
	scanf("%f", &n);
    float num;
    float desi;
    scanf("%f", &num);
    desi = n / num;
    if(desi / 2 == 1 || desi / 2 == 0){
    	printf("bulat\n");
    }else{
    	printf("desimal\n");
    }
    
    
    return 0;
}