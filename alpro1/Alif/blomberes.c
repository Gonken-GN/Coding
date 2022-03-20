#include <stdio.h>
	int main () {

		int i;
		float dec[3];
		int num[3];

		for(i=0;i<3;i++) {
			scanf("%f", &dec[i]);
		}

		for(i=0;i<3;i++) {
			scanf("%d", &num[i]);
		}

		int depan[3];
		int belakang[3];

		for(i=0;i<3;i++) {
			depan[i] = dec[i]
			belakang[i] = (dec[i] - depan[i])*100+.5
		}

		for(i=0;i<3;i++)

		return 0;
	}