#include <stdio.h>

void pola0(int k) {
	int i;
	int j;
	
		for(i=0;i<k;i++) {
			for(j=0;j<k;j++) {
				printf(" ");
			}

			for(j=0;j<k;j++) {
				printf(" ");
			}

			for(j=0;j<k;j++) {
				printf(" ");
			}
			printf("\n");
			} 
		}

void pola1(int k) {
	int i;
	int j;

		for(i=0;i<k;i++) {
			for(j=0;j<k;j++) {
				printf("@");
			}

			for(j=0;j<k;j++) {
				printf(" ");
			}

			for(j=0;j<k;j++) {
				printf(" ");
			}
			printf("\n");
			} 
		}		

void pola2(int k) {
	int i;
	int j;

	for(i=0;i<k;i++) {
		for(j=0;j<k;j++) {
			printf(" ");
		}

		for(j=0;j<k;j++) {
			printf("@");
		}

		for(j=0;j<k;j++) {
			printf(" ");
		}
		printf("\n");
	}
}

void pola3(int k) {
	int i;
	int j;

	for(i=0;i<k;i++) {
		for(j=0;j<k;j++) {
			printf(" ");
		}

		for(j=0;j<k;j++) {
			printf(" ");
		}

		for(j=0;j<k;j++) {
			printf("@");
		}
		printf("\n");
	}
}

void pola4(int k) {
	int i;
	int j;

	for(i=0;i<k;i++) {
		for(j=0;j<k;j++) {
			printf("@");
		}

		for(j=0;j<k;j++) {
			printf("@");
		}

		for(j=0;j<k;j++) {
			printf(" ");
		}
		printf("\n");
	}
}

void pola5(int k) {
	int i;
	int j;

	for(i=0;i<k;i++) {
		for(j=0;j<k;j++) {
			printf("@");
		}

		for(j=0;j<k;j++) {
			printf(" ");
		}

		for(j=0;j<k;j++) {
			printf("@");
		}
		printf("\n");
	}
}

void pola0end(int k) {
	int i;
	int j;
	
		for(i=0;i<k;i++) {
			for(j=0;j<k;j++) {
				printf(" ");
			}

			for(j=0;j<k;j++) {
				printf(" ");
			}

			for(j=0;j<k;j++) {
				printf(" ");
			}
			if(i < k - 1) {
				printf("\n");
			} 
		} 
	}

void pola2end(int k) {
	int i;
	int j;

	for(i=0;i<k;i++) {
		for(j=0;j<k;j++) {
			printf(" ");
		}

		for(j=0;j<k;j++) {
			printf("@");
		}

		for(j=0;j<k;j++) {
			printf(" ");
		}
		if(i < k - 1) {
				printf("\n");
		}
	}
}

void pola3end(int k) {
	int i;
	int j;

	for(i=0;i<k;i++) {
		for(j=0;j<k;j++) {
			printf(" ");
		}

		for(j=0;j<k;j++) {
			printf(" ");
		}

		for(j=0;j<k;j++) {
			printf("@");
		}
		if(i < k - 1) {
				printf("\n");
		}
	}
}

int main () {

	int a;
	int i;

	scanf("%d", &a);

	int n[a];
	int k;

	scanf("%d", &k);

	for(i=0;i<a;i++) {
		scanf("%d", &n[i]);
	}



	for(i=0;i<a;i++) {

		if(n[i] == 0) {
			pola2(k);
			pola5(k);
			pola0(k);
			pola5(k);
			pola2end(k);
		} else if (n[i] == 1) {
			pola0(k);
			pola3(k);
			pola0(k);
			pola3(k);
			pola0end(k);
		} else if (n[i] == 2) {
			pola2(k);
			pola3(k);
			pola2(k);
			pola1(k);
			pola2end(k);
		} else if (n[i] == 3) {
			pola2(k);
			pola3(k);
			pola2(k);
			pola3(k);
			pola2end(k);
		} else if (n[i] == 4) {
			pola0(k);
			pola5(k);
			pola2(k);
			pola3(k);
			pola3end(k);
		} else if (n[i] == 5) {
			pola2(k);
			pola1(k);
			pola2(k);
			pola3(k);
			pola2end(k);
		} else if (n[i] == 6) {
			pola2(k);
			pola1(k);
			pola2(k);
			pola5(k);
			pola2end(k);
		} else if (n[i] == 7) {
			pola4(k);
			pola3(k);
			pola0(k);
			pola3(k);
			pola0end(k);
		} else if (n[i] == 8) {
			pola2(k);
			pola5(k);
			pola2(k);
			pola5(k);
			pola2end(k);
		} else if (n[i] == 9) {
			pola2(k);
			pola5(k);
			pola2(k);
			pola3(k);
			pola2end(k);
		} else if (n[i] == 10) {
			pola0(k);
			pola0(k);
			pola0(k);
			pola0(k);
			pola2end(k);
		}
	}
	return 0;
}