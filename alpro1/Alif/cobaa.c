#include <stdio.h>

int main() {
    
    int n;
    int i;
    
    scanf("%d", &n);
    
    int x[n];
    int y[n];
    int counter= 0;
    
    for(i = 0; i < n; i++) {
        scanf("%d", &x[i]);
        scanf("%d", &y[i]);
    }
    
    if (n >= m) {
        for(i = 0; i < n; i++) {
            if((x[i] % 2 == 0 && y[i] % 2 == 0) || (x[i] % 2 == 1 && y[i] % 2 == 1)) {
            counter++;
            }
        }
    } else if (n <= m) {
        for(i = 0; i < m; i++) {
            if((x[i] % 2 == 0 && y[i] % 2 == 0) || (x[i] % 2 == 1 && y[i] % 2 == 1)) {
            counter++;
            }
        }
    }
    
    
    if (n >= m) {
        if (counter == n) {
            printf("valid");
        } else {
            printf("tidak valid");
        }
    } else if (n <= m) {
        if (counter == m) {
            printf("valid");
        } else {
            printf("tidak valid");
        }
    }
        
    
	return 0;
}
