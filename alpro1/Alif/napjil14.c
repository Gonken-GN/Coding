#include <stdio.h>
	int main() {

		char n;
		int i;
		char alp[3];
		int num[3];
		int alpC = 0;
		int numC = 0;

		for(i=0;i<6;i++) {
			scanf(" %c", &n);
			if (n == '1' && n == '2' && n == '3' && n == '4' && n == '5' && n == '6' && n == '7' && n == '8' && n == '9' && n == '0') {
				num[numC] = n;
				numC++;
			} else if (n != '1' && n != '2' && n != '3' && n != '4' && n != '5' && n != '6' && n != '7' && n != '8' && n != '9' && n != '0') {
				alp[alpC] = n;
				alpC++;
			}
		}

		for(i=0;i<3;i++) {
			num[i]-=48;
		}

		if(numC == 3 && alpC == 3) {
			for(i=0;i<3;i++) {
				printf("%c\n%d", alp[i], num[i]);
			}
		} else {
			printf("tidak valid\n");
		}

		return 0;
	}