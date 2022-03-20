#include <stdio.h>

int main(){
    
    float tot = 0;
    int i;
    int n;
    float mean;

    scanf("%d", &n);

    int num[n];

    for(i=0;i<n;i++) {
        scanf("%d", &num[i]);
    }

    for(i=0;i<n;i++) {
        tot = tot + num[i];
    }

    mean = tot/n;

    for(i=0;i<n;i++) {
        printf("%d", num[i]);
        if(i < n-1) {
            printf(" + ");
        }
    }

    return 0;
}

storage[i] == 0 && (storage[i+1] == 0 || storage[i+1] == 1 || storage[i+1] == 7 || storage[i+1] == 10) || storage[i] == 1 && (storage[i+1] == 0 || storage[i+1] == 1 || storage[i+1] == 7 || storage[i+1] == 10) || storage[i] == 7 && (storage[i+1] == 0 || storage[i+1] == 1 || storage[i+1] == 7 || storage[i+1] == 10) && storage[total-1] == 0 || storage[total-1] == 1 || storage[total-1] == 7


storage[a+1] == 0 && storage[total-1] == 0 || storage[a+1] == 1 && storage[total-1] == 1 || storage[a+1] == 1 || storage[a+1] == 0 || storage[a+1] == 10 && (storage[a+2] == 0 || storage[a+2] == 1 || storage[a+2] == 7) && (storage[total-1] == 0 || storage[total-1] == 1 || storage[total-1] == 7) || storage[a+1] == 7 && (storage[a+2] == 1 || storage[a+2] == 0 || storage[a+2] == 7 || storage[a+2] == 10) && (storage[total-1] == 7 || storage[total-1] == 1 || storage[total-1] == 0)


storage[a+1] == 0 && storage[total-1] == 0 || storage[a+1] == 1 && storage[total-1] == 1 || storage[a+1] == 1 || storage[a+1] == 0 || storage[a+1] == 10 && (storage[a+2] == 0 || storage[a+2] == 1 || storage[a+2] == 7) && (storage[total-1] == 0 || storage[total-1] == 1 || storage[total-1] == 7) || storage[a+1] == 7 && (storage[a+2] == 1 || storage[a+2] == 0 || storage[a+2] == 7 || storage[a+2] == 10) && (storage[total-1] == 7 || storage[total-1] == 1 || storage[total-1] == 0)


/*#include <stdio.h>

int main(){
  
  int array[10], i,n;
  float rata, total=0;
    
  printf("Program Menghitung Nilai Rata2 Menggunakan Array\n");    
  printf("Masukkan banyaknya elemen array: ");
  scanf("%d",&n);    
    
  for(i=0; i<n; i++){
    printf("nilai ke-%d: ",i+1);
    scanf("%d", &array[i]);
    total = total + array[i];
  }
    
  rata = total/n;
  printf("hasil nilai total adalah: %f \n", total);
  printf("hasil rata rata adalah: %f \n", rata);
    
  return 0;

}*/