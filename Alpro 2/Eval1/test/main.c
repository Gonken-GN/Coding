#include"tama.h"

int main()
{
    int n,o;

    scanf("%d",&n);
    data mahasiswa1[n];
    Input(mahasiswa1,n);

    scanf("%d",&o);
    data mahasiswa2[o];
    Input(mahasiswa2,o);

    data gabung[n+o];

    Insertion(mahasiswa1,n);
    Insertion(mahasiswa2,o);
    Merge(mahasiswa1,mahasiswa2,gabung,n,o);

    Output(gabung,n+o);
    return 0;
}