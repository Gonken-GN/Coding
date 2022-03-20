#include "header.h"

int main()
{
    list L;
    createList(&L);
    int n, i, j = 0;
    scanf("%d", &n);
    waktu jam[n];
    for(i=0;i<n;i++){
        scanf("%d %d %d", &jam[i].jam, &jam[i].menit, &jam[i].detik);
        jam[i].tampungj = jam[i].jam * 3600;
        jam[i].tampungm = jam[i].menit * 60;
        jam[i].total = jam[i].tampungj + jam[i].tampungm + jam[i].detik;
    }
    sort(n, jam);
    for(i=0;i<n;i++){
        addFirst(jam[i].jam, jam[i].menit, jam[i].detik, &L);
    }
    printElement(L);
    return 0;
}