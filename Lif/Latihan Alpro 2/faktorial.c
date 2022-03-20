#include <stdio.h>

int faktorial(int angka){
    if(angka<=1){
        return 1;
    }else {
        return angka*faktorial(angka-1);
    }
}
int hasil(int a, b){
	int total = faktorial(a) * faktorial(b);
}
int p(int a, int b) {
	int c = a - b;
	int permutasi = faktorial(a)/faktorial(c);
}

int c(int a, int b) {
	int c = a - b;
	int kombinasi = faktorial(a)/(faktorial(c)*faktorial(b));
}

int main(){
	int a;
	int b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("\n");
	printf("Bangsat\n" );
	printf("%d\n", hasil(a, b));
    printf("P(%d,%d) = %d\n", a, b, p(a,b));
    printf("C(%d,%d) = %d\n", a, b, c(a,b));
    return 0;
}