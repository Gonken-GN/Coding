#include "ana.h"
int main () {
    int i, n, m;
    scanf("%d", &n);
    char nama1[n][100];
    for(i=0;i<n;i++){
        scanf("%s", &nama1[i]);
    }
    scanf("%d", &m);
    char nama2[m][100];
    for(i=0;i<m;i++){
        scanf("%s", &nama2[i]);
    }
    cek (n, nama1, m, nama2);
}