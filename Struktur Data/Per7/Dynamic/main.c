#include "header.h"
int main (){
    queue Q;
    createEmpty(&Q);
    print(Q);
    add("2004305", "Miku", 78.5, &Q);
    add("2004306", "Hachiman", 90, &Q);
    add("2004308", "Yuuki", 100, &Q);
    nilai tampung;
    int indeks;
    scanf("%s %s %f %d", &tampung.nim, &tampung.nama, &tampung.nilai, &indeks);
    addP(tampung.nim, tampung.nama, tampung.nilai, &Q, indeks);
    print(Q);
    return 0;
}