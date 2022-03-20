#include <stdio.h>
#include  <math.h>
typedef struct{
	int x;
	int y;
	int z;
}segitiga;
int main () {
	int n, i;
	scanf("%d", &n);
	segitiga ikatan_segitiga[n];
	for(i=0;i<n;i++){
		scanf("%d", &ikatan_segitiga[i].x);
		scanf("%d", &ikatan_segitiga[i].y);
		scanf("%d", &ikatan_segitiga[i].z);
	}

	i=0;
	int maks = 0;
	while((maks<3) && (i<n)){
		if((ikatan_segitiga[i].x*ikatan_segitiga[i].x) + (ikatan_segitiga[i].y*ikatan_segitiga[i].y) == (ikatan_segitiga[i].z*ikatan_segitiga[i].z)){
			printf("%d %d %d\n", ikatan_segitiga[i].x, ikatan_segitiga[i].y, ikatan_segitiga[i].z);
			maks++;
		}
		i=i+1;
	}
}