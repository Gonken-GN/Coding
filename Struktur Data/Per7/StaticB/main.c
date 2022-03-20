#include "header.h"
int main (){
    queue Q;
    createEmpty(&Q);
    int n;
    scanf("%d", &n);
    nilai tampung[n];
    int indeks;
    add("2004305", "Miku", 78.5, &Q);
    add("2004306", "Hachiman", 90, &Q);
    add("2004307", "Yuuki", 100, &Q);
    for(int i = 0;i<n;i++){
        scanf("%s %s %f %d", &tampung[i].nim, &tampung[i].nama, &tampung[i].nilai, &indeks);
        addpri(tampung[i].nim, tampung[i].nama, tampung[i].nilai, &Q, indeks);
    }
    print(Q);
    return 0;
}