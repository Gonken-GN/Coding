#include"tama.h"

int main()
{
    char typeSort, directSort;
    int n,o,p;

    scanf("%d",&n);
    data laguIbnu[n];
    Input(laguIbnu,n);

    scanf("%d",&o);
    data laguAdik[o];
    Input(laguAdik,o);

    scanf("%d",&p);
    data laguAyah[p];
    Input(laguAyah,p);

    scanf(" %c %c", &typeSort, &directSort);

    data gabung[n+o];
    data gabung2[n+o+p];

    if(typeSort=='i')
    {
        Insertion(laguIbnu,n,directSort);
        Insertion(laguAdik,o,directSort);
        Merge(laguIbnu,laguAdik,gabung,directSort,n,o);
        Insertion(laguAyah,p,directSort);
        Merge(gabung,laguAyah,gabung2,directSort,n+o,p);
    }
    else if(typeSort=='s')
    {
        Selection(laguIbnu,n,directSort);
        Selection(laguAdik,o,directSort);
        Merge(laguIbnu,laguAdik,gabung,directSort,n,o);
        Selection(laguAyah,p,directSort);
        Merge(gabung,laguAyah,gabung2,directSort,n+o,p);
    }
    else if(typeSort=='b')
    {
        Bubble(laguIbnu,n,directSort);
        Bubble(laguAdik,o,directSort);
        Merge(laguIbnu,laguAdik,gabung,directSort,n,o);
        Bubble(laguAyah,p,directSort);
        Merge(gabung,laguAyah,gabung2,directSort,n+o,p);
    }
    else if(typeSort=='q')
    {
        Quick(laguIbnu,directSort,0,n-1);
        Quick(laguAdik,directSort,0,o-1);
        Merge(laguIbnu,laguAdik,gabung,directSort,n,o);
        Quick(laguAyah,directSort,0,p-1);
        Merge(gabung,laguAyah,gabung2,directSort,n+o,p);
    }

    printf("Daftar Lagu Keluarga:\n");
    Output(gabung2, n+o+p);

    printf("\n");
    printf("Lagunya Ibnu:\n");
    DaftarIbnu(gabung2, n+o+p, laguIbnu);

    return 0;
}
