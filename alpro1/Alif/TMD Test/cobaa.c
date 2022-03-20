#include <stdio.h>

int k;

void spasi(int n) {
	for(k=0;k<n;k++) {
		printf("-");
	}
}

void pola0(int n) {
	for(k=0;k<n;k++) {
		printf("-");
	}
	for(k=0;k<n;k++) {
		printf("-");
	}
	for(k=0;k<n;k++) {
		printf("-");
	}
}

void pola1(int n) {
	for(k=0;k<n;k++) {
		printf("*");
	}
	for(k=0;k<n;k++) {
		printf("-");
	}
	for(k=0;k<n;k++) {
		printf("-");
	}
}

void pola1bzo(int n) {
	for(k=0;k<n;k++) {
		printf("*");
	}
	for(k=0;k<n;k++) {
		printf("-");
	}
}

void pola2(int n) {
	for(k=0;k<n;k++) {
		printf("-");
	}
	for(k=0;k<n;k++) {
		printf("*");
	}
	for(k=0;k<n;k++) {
		printf("-");
	}
}

void pola2start(int n) {
	for(k=0;k<n;k++) {
		printf("*");
	}
	for(k=0;k<n;k++) {
		printf("-");
	}
}

void pola2end(int n) {
	for(k=0;k<n;k++) {
		printf("-");
	}
	for(k=0;k<n;k++) {
		printf("*");
	}
}

void pola2bzo(int n) {
	for(k=0;k<n;k++) {
		printf("-");
	}
	for(k=0;k<n;k++) {
		printf("*");
	}
}

void pola3(int n) {
	for(k=0;k<n;k++) {
		printf("-");
	}
	for(k=0;k<n;k++) {
		printf("-");
	}
	for(k=0;k<n;k++) {
		printf("*");
	}
}

void start(int n) {
	for(k=0;k<n;k++) {
		printf("*");
	}
}

void pola4(int n) {
	for(k=0;k<n;k++) {
		printf("*");
	}
	for(k=0;k<n;k++) {
		printf("-");
	}
	for(k=0;k<n;k++) {
		printf("*");
	}	
}

void pola5(int n) {
	for(k=0;k<n;k++) {
		printf("*");
	}
	for(k=0;k<n;k++) {
		printf("*");
	}
	for(k=0;k<n;k++) {
		printf("-");
	}
}

void pola5end(int n) {
	for(k=0;k<n;k++) {
		printf("*");
	}
	for(k=0;k<n;k++) {
		printf("*");
	}
}

int main () {
	float tot = 0;
	int i;
	int t;

	scanf("%d", &t);

	int num[t];

	for(i=0;i<t;i++) {
		scanf("%d", &num[i]);
	}

	for(i=0;i<t;i++) {
		tot += num[i];
	}

	float mean;

	mean = tot/t;

	for(i=0;i<t;i++) {
		printf("%d", num[i]);
		if(i < t-1) {
			printf(" + ");
		}
	}

	printf("\n");

	int depan = mean;
	if(mean == 00.00) {
		depan = 0;
	}
	int belakang = ((mean - depan)*100) + .5;
	if(belakang == 0) {
		belakang = 0;
	}

	

	int countd = depan;
	int jumlahdepan = 0;
	int countb = belakang;
	int jumlahbelakang = 0;

	if(countd == 0) {
		jumlahdepan = jumlahdepan + 1;
	}

	while(countd > 0) {
		countd = (countd - (countd%10))/10;
		jumlahdepan++;
	}

	int depan1[jumlahdepan];


	for(i=jumlahdepan - 1;i>=0;i--) {
		depan1[i] = depan;
		depan = (depan -(depan%10))/10;
	}

	int storage[jumlahdepan];

	for(i=0;i<jumlahdepan;i++) {
		storage[i] = depan1[i] % 10;
	}

	int ttk = jumlahdepan + 1;

	storage[ttk - 1] = 10;

	if(countb == 0) {
		jumlahbelakang = jumlahbelakang + 2;
	}

	if(countb < 10 && countb > 0) {
		jumlahbelakang = jumlahbelakang + 1;
	}

	while(countb > 0) {
		countb = (countb - (countb%10))/10;
		jumlahbelakang++;
	}

	int belakang1[jumlahbelakang];

	for(i=jumlahbelakang - 1;i>=0;i--) {
		if (belakang == 0) {
			belakang1[i] = 0;
		} 
		belakang1[i] = belakang;
		belakang = (belakang -(belakang%10))/10;
	}

	int total = ttk + jumlahbelakang;

	int x = 0;

	for(i=ttk;i<total;i++) {
		storage[i] = belakang1[x] % 10;
		x++;
	}

	int j;
	int n;
	int m;
	int y;
	int a = 0;
	int u;
	int p;
	int chk[total];
	int chk2[total];
	int chk3[total];

	for(i=0;i<total;i++) {
		chk[i] = 0;
		chk2[i] = 0;
		chk3[i] = 0;
		printf("Index %d: %d\n", i, storage[i]);
	}

	for(i=0;i<total;i++) {
		if(storage[i] == 0 || storage[i] == 1 || storage[i] == 7 || storage[i] == 10) {
			chk[i] = 1;
		}else if(storage[i] != 0 || storage[i] != 1 || storage[i] != 7 || storage[i] != 10) {
			chk[i] = 0;
		}
	}

	for(i=0;i<total;i++) {
		if(chk[i] == 0) {
			a = 1;
			while(a <= i) {
				chk[i - a] = 0;
				a++;
			}
		}
	}

	for(i=0;i<total;i++) {
		if(storage[i] == 1 || storage[i] == 4 || storage[i] == 10) {
			chk2[i] = 1;
		} else if (storage[i] != 1 || storage[i] != 4 || storage[i] != 10) {
			chk2[i] = 0;
		}
	}

	for(i=0;i<total;i++) {
		if(chk2[i] == 0) {
			u = 1;
			while(u <= i) {
				chk2[i - u] = 0;
				u++;
			}
		}
	}

	for(i=0;i<total;i++) {
		if(storage[i] == 1 || storage[i] == 7) {
			chk3[i] = 1;
		} else if (storage[i] != 1 || storage[i] != 7) {
			chk3[i] = 0;
		}
	}

	for(i=0;i<total;i++) {
		if(chk3[i] == 0) {
			p = 1;
			while(p <= i) {
				chk3[i - p] = 0;
				p++;
			}
		}
	}

	for(i=0;i<total;i++) {
		printf("Check3 %d = %d\n", i, chk3[i]);
	}

	scanf("%d", &n);

	for(i=0;i<5;i++) {
		for(j=0;j<n;j++) {
			for(a=0;a<total;a++) {
				if(a == 0) {
					if(i == 0) {
					    if(chk2[a+1] == 1) {
					        if(storage[a] == 0 || storage[a] == 2 || storage[a] == 5 || storage[a] == 6 || storage[a] == 8 || storage[a] == 9) {
					            pola2end(n);
					        }
					        if(storage[a] == 3) {
					            start(n);
					        }
					        if(storage[a] == 7) {
					        	pola5end(n);
					        }
					    } else {
    						if(storage[a] == 0 || storage[a] == 2 || storage[a] == 5 || storage[a] == 6 || storage[a] == 8 || storage[a] == 9) {
    							pola2(n);
    							spasi(n);
    						}
    						if(storage[a] == 1) {
    							spasi(n);
    							spasi(n);
    						}
    						if(storage[a] == 3) {
    						    pola2start(n);
    						    spasi(n);
    						}
    						if(storage[a] == 4) {
    						    pola0(n);
    						    spasi(n);
    						}
    						if(storage[a] == 7) {
					        	pola5(n);
					        	spasi(n);
					        }
					    }
					}
					if(i == 1) {
						if(storage[a] == 0 || storage[a] == 4) {
							pola4(n);
							spasi(n);
						}
						if(storage[a] == 1) {
							start(n);
							spasi(n);
						}
						if(storage[a] == 2 || storage[a] == 7) {
							pola3(n);
							spasi(n);
						}
						if(storage[a] == 3) {
						    pola2end(n);
						    spasi(n);
						}
						if(storage[a] == 5 || storage[a] == 6) {
							pola1(n);
							spasi(n);
						}
					    if(storage[a] == 8 || storage[a] == 9) {
					    	pola4(n);
					    	spasi(n);	
					    }
					}
					if(i == 2) {
					    if(chk[a+1] == 1) {
							if(storage[a] == 2 || storage[a] == 4 || storage[a] == 5 || storage[a] == 6 || storage[a] == 8 || storage[a] == 9) {
								pola2bzo(n);
							}
							if(storage[a] == 3) {
							    start(n);
							}
						} else {
							if(storage[a] == 0 || storage[a] == 7) {
						        pola0(n);
						        spasi(n);
						    }
						    if(storage[a] == 1) {
						        spasi(n);
						        spasi(n);
						    }
					    	if(storage[a] == 2 || storage[a] == 4 || storage[a] == 5 || storage[a] == 6 || storage[a] == 8 || storage[a] == 9) {
							    pola2(n);
							    spasi(n);
						    }
						    if(storage[a] == 3) {
						        pola2start(n);
						        spasi(n);
						    }
						}		 
					}
					if(i == 3) {
						if(storage[a] == 0 || storage[a] == 6 || storage[a] == 8) {
							pola4(n);
							spasi(n);
						}
						if(storage[a] == 1) {
							start(n);
							spasi(n);
						}
						if(storage[a] == 2) {
							pola1(n);
							spasi(n);
						}
						if(storage[a] ==  3) {
						    pola2end(n);
						    spasi(n);
						}
						if(storage[a] == 4 || storage[a] == 5 || storage[a] == 7 || storage[a] == 9) {
						    pola3(n);  
						    spasi(n);
						}
					}
					if(i == 4) {
						if(chk3[a+1] == 1) {
							if(storage[a] == 0 || storage[a] == 2 || storage[a] == 5 || storage[a] == 6 || storage[a] == 8 || storage[a] == 9) {
								pola2bzo(n);
							}
							if(storage[a] == 3) {
						    	start(n);
							}
							if(storage[a] == 4) {
						    	pola3(n);
							}	
						} else {
							if(storage[a] == 0 || storage[a] == 2 || storage[a] == 5 || storage[a] == 6 || storage[a] == 8 || storage[a] == 9) {
								pola2(n);
								spasi(n);
							}
							if(storage[a] == 1) {
								spasi(n);
								spasi(n);
							}
							if(storage[a] == 3) {
							    pola2start(n);
							    spasi(n);
							}
							if(storage[a] == 4) {
							    pola3(n);
							    spasi(n);
							}
	    					if(storage[a] == 7) {
						        pola0(n);
						        spasi(n);
						    }	
						}
					}
				}
				if(a != 0 && a != (total - 1)) {
					if(i == 0) {
					    if(chk2[a+1] == 1) {
					        if(storage[a] == 0 || storage[a] == 2 || storage[a] == 5) {
					            pola2bzo(n);
					        }
					        if(storage[a] == 3) {
					            start(n);
					        }
					        if(storage[a] == 6) {
    							pola2bzo(n);	
    						}
    						if(storage[a] == 7) {
    							pola5end(n);
    						}
    						if(storage[a] == 8) {
					    		pola2bzo(n);
					    	}
					    	if(storage[a] == 9) {
					    		pola2bzo(n);
					    	}
					    } else {
					        if(storage[a] == 0) {
    							pola2(n);
    							spasi(n);
    						}
    						if(storage[a] == 1) {
    							spasi(n);
    							spasi(n);
    						}
    						if(storage[a] == 2 || storage[a] == 5) {
    							pola2(n);
    							spasi(n);
    						}
    						if(storage[a] == 3) {
    						    pola2start(n);
    						    spasi(n);
    						}
    						if(storage[a] == 4) {
    						    pola0(n);
    						    spasi(n);
    						}
    						if(storage[a] == 6) {
    							pola2(n);
    							spasi(n);
    						}
    						if(storage[a] == 7) {
    							pola5(n);
    							spasi(n);
    						}
    						if(storage[a] == 8) {
					    		pola2(n);
					    		spasi(n);
					    	}
					    	if(storage[a] == 9) {
					    		pola2(n);
					    		spasi(n);
					    	}
    						if(storage[a] == 10) {
    							spasi(n);
    							spasi(n);
    						}
					    }
					}
					if(i == 1) {
						if(storage[a] == 0) {
							pola4(n);
							spasi(n);
						}
						if(storage[a] == 1) {
							start(n);
							spasi(n);
						}
						if(storage[a] == 2) {
							pola3(n);
							spasi(n);
						}
						if(storage[a] == 3) {
						    pola2end(n);
						    spasi(n);
						}
						if(storage[a] == 4) {
						    pola4(n);
						    spasi(n);
						}
						if(storage[a] == 5) {
							pola1(n);
							spasi(n);
						}
						if(storage[a] == 6) {
    						pola1(n);
    						spasi(n);		
    					}
    					if(storage[a] == 7) {
    						pola3(n);
    						spasi(n);
    					}
    					if(storage[a] == 9) {
					    	pola4(n);
					    	spasi(n);	
					    }
    					if(storage[a] == 8) {
					    	pola4(n);
					    	spasi(n);	
					    }
						if(storage[a] == 10) {
    						spasi(n);
    						spasi(n);
    					}
					}
					if(i == 2) {
						if(chk[a+1] == 1) {
							if(storage[a] == 2 || storage[a] == 5 || storage[a] == 4) {
								pola2bzo(n);
							}
							if(storage[a] == 3) {
						        start(n);
						    }
						    if(storage[a] == 6) {
    							pola2bzo(n);	
    						}
    						if(storage[a] == 8) {
					    		pola2bzo(n);
					    	}
					    	if(storage[a] == 9) {
					    		pola2bzo(n);
					    	}
						} else {
						    if(storage[a] == 0) {
						        pola0(n);
						        spasi(n);
						    }
						    if(storage[a] == 1) {
						        spasi(n);
						        spasi(n);
						    }
						    if(storage[a] == 2 || storage[a] == 5 || storage[a] == 4) {
							    pola2(n);
							    spasi(n);
						    }
						    if(storage[a] == 3) {
						        pola2start(n);
						        spasi(n);
						    }
						    if(storage[a] == 6) {
    							pola2(n);
    							spasi(n);	
    						}
    						if(storage[a] == 7) {
    							pola0(n);
    							spasi(n);
    						}
						    if(storage[a] == 10) {
    							spasi(n);
    							spasi(n);
    						}
    						if(storage[a] == 8) {
					    		pola2(n);
					    		spasi(n);
					    	}
					    	if(storage[a] == 9) {
					    		pola2(n);
					    		spasi(n);
					    	}
						}
					}
					if(i == 3) {
						if(storage[a] == 0) {
							pola4(n);
							spasi(n);
						}
						if(storage[a] == 1) {
							start(n);
							spasi(n);
						}
						if(storage[a] == 2) {
							pola1(n);
							spasi(n);
						}
						if(storage[a] == 3) {
						    pola2end(n);
						    spasi(n);
						}
						if(storage[a] == 4) {
						    pola3(n);
						    spasi(n);
						}
						if(storage[a] == 5) {
						    pola3(n);
						    spasi(n);
    					}
    					if(storage[a] == 6) {
    						pola4(n);
    						spasi(n);		
    					}
    					if(storage[a] == 7) {
    						pola3(n);
    						spasi(n);
    					}
    					if(storage[a] == 8) {
					    	pola4(n);
					    	spasi(n);	
					    }
					    if(storage[a] == 9) {
					    	pola3(n);
					    	spasi(n);	
					    }
						if(storage[a] == 10) {
    						spasi(n);
    						spasi(n);
    					}
					}
					if(i == 4) {
						if(chk3[a+1] == 1) {
							if(storage[a] == 0 || storage[a] == 2 || storage[a] == 5 || storage[a] == 6 || storage[a] == 8 || storage[a] == 9) {
								pola2bzo(n);
							}
							if(storage[a] == 3) {
						    	start(n);
							}
							if(storage[a] == 4) {
						    	pola3(n);
							}
							if(storage[a] == 10) {
								start(n);
							}	
						} else {
							if(storage[a] == 0 || storage[a] == 2 || storage[a] == 5 || storage[a] == 6 || storage[a] == 8 || storage[a] == 9) {
								pola2(n);
								spasi(n);
							}
							if(storage[a] == 1) {
								spasi(n);
								spasi(n);
							}
							if(storage[a] == 3) {
							    pola2start(n);
							    spasi(n);
							}
							if(storage[a] == 4) {
							    pola3(n);
							    spasi(n);
							}
	    					if(storage[a] == 7) {
						        pola0(n);
						        spasi(n);
						    }
						    if(storage[a] == 10) {
								start(n);
								spasi(n);
							}	
						}
					}
				}	
				if(a == (total-1)) {
					if(i == 0) {
						if(storage[a] == 0) {
							pola2end(n);
						}
						if(storage[a] == 2) {
							pola2end(n);
						}
						if(storage[a] == 3) {
						    start(n);    
						}
						if(storage[a] == 5) {
						    pola2end(n);
						}
						if(storage[a] == 6) {
    						pola2end(n);		
    					}
    					if(storage[a] == 7) {
    						pola5end(n);
    					}
    					if(storage[a] == 8) {
					    	pola2end(n);
					    }
					    if(storage[a] == 9) {
					    	pola2end(n);	
					    }
					}
					if(i == 1) {
						if(storage[a] == 0) {
							pola4(n);
						}
						if(storage[a] == 1) {
							start(n);
						}
						if(storage[a] == 2) {
							pola3(n);
						}
						if(storage[a] == 3) {
						    pola2end(n);   
						}
						if(storage[a] == 4) {
						    pola4(n);   
						}
						if(storage[a] == 5) {
							start(n);
						}
						if(storage[a] == 6) {
    						start(n);		
    					}
    					if(storage[a] == 7) {
    						pola3(n);
    					}
    					if(storage[a] == 8) {
					    	pola4(n);
					    }
					    if(storage[a] == 9) {
					    	pola4(n);	
					    }
					}
					if(i == 2) {
						if(storage[a] == 2) {
							pola2(n);
						}
						if(storage[a] == 3) {
						    start(n);   
						}
						if(storage[a] == 4) {
						    pola2end(n);   
						}
						if(storage[a] == 5) {
						    pola2end(n);
						}
						if(storage[a] == 6) {
    						pola2end(n);		
    					}
    					if(storage[a] == 8) {
    						pola2end(n);
    					}
    					if(storage[a] == 9) {
					    	pola2end(n);	
					    }
					}
					if(i == 3) {
						if(storage[a] == 0) {
							pola4(n);
						}
						if(storage[a] == 1) {
							start(n);
						}
						if(storage[a] == 2) {
							pola1(n);
						}
						if(storage[a] == 3) {
						    pola2end(n);   
						}
						if(storage[a] == 4) {
						    pola3(n);   
						}
						if(storage[a] == 5) {
						    pola3(n);
						}
						if(storage[a] == 6) {
    						pola4(n);		
    					}
    					if(storage[a] == 7) {
    						pola3(n);
    					}
    					if(storage[a] == 8) {
					    	pola4(n);	
					    }
					    if(storage[a] == 9) {
					    	pola3(n);	
					    }
					}
					if(i == 4) {
						if(storage[a] == 0) {
							pola2end(n);
						}
						if(storage[a] == 2) {
							pola2end(n);
						}
						if(storage[a] == 3) {
						    start(n);   
						}
						if(storage[a] == 4) {
						    pola3(n);   
						}
						if(storage[a] == 5) {
						    pola2end(n);
						}
						if(storage[a] == 6) {
    						pola2end(n);		
    					}
    					if(storage[a] == 8) {
					    	pola2end(n);	
					    }
					    if(storage[a] == 9) {
					    	pola2end(n);	
					    }
					}
				}
			}
			printf("\n");
		}	
	}
	return 0;
}