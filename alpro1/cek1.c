#include<stdio.h>
#include<string.h>

typedef struct
{
    char kata[50];
}data;
data input[50];

int main()
{
	int i, j;
	int n;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%s", input[i].kata);
	}
	
	int x[n];
	
	for(i=0; i<n; i++)
	{
		x[i]=0;
	}
	
	i=0;
	while(i<n)
	{
		x[i]=strlen(input[i].kata);
		i++;
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d\n", x[i]);
	}

	return 0;
}