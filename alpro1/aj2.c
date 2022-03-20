#include <stdio.h>
int main () {
	int n;
	scanf("%d", &n);
	int tabInt[n];
	int i;
	for(i=0;i < n;i++){
		scanf("%d", &tabInt[i]);
	}
	int maksimal = tabInt[0];
	for(i = 1; i < n;i++){
		if (maksimal <  tabInt[i]){
			maksimal = tabInt[i];
		}
	}
	printf("Nilai maksimal: %d\n", maksimal);
	int o;
	scanf ("%d", &o);
	int apa[o];
	int a;
	int tots;	

	for(a = 0; a < o;a++){
		scanf("%d", &apa[a]);
	}
	int minimal = apa[0];
	for(a = 1; a < o;a++){
		if(minimal > apa[a]){
			minimal = apa[a];
		}
	}
	printf("Nilai minimal %d\n", minimal);
	tots = maksimal + minimal;
	printf("Total jumlah : %d\n", tots);
	return 0;
}