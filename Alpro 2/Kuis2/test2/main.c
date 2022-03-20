#include"tama.h"

int main()
{
    int i,n;
    scanf("%d", &n);
    kurm data[50];
    Input(data,n);
    int cari;
    scanf("%d", &cari);
    PriceGram(data,n);
    Sort(data, n);
    SearchProgram(cari,data,n);
    return 0;
}