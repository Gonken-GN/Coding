#include "head.h"

int main(){

    int i, z;

    while(pilihan!=99){
        //read film secara general
        int n=0;
        data film[50];
        FILE *ffilm;
        ffilm = fopen("ListFilm.dat", "r");
        fscanf(ffilm, "%s %s %s %s", film[n].namafilm, film[n].sutradara, film[n].genre, film[n].bioskop);
        if(strcmp(film[n].namafilm, "####") == 0){
            printf("File Kosong!\n");
        }else{
            while(strcmp(film[n].namafilm, "####") != 0){
                n++;
                fscanf(ffilm, "%s %s %s %s", film[n].namafilm, film[n].sutradara, film[n].genre, film[n].bioskop);
            }
        }
        fclose(ffilm);

        //read sutradara
        int m=0;
        data stdr[50];
        FILE *fstdr;
        fstdr = fopen("Sutradara.dat", "r");
        fscanf(fstdr, "%s %s", stdr[m].id, stdr[m].sutradara);
        if(strcmp(stdr[m].id, "####") == 0){
            printf("File Kosong!\n");
        }else{
            while(strcmp(stdr[m].id, "####") != 0){
                m++;
                fscanf(fstdr, "%s %s", stdr[m].id, stdr[m].sutradara);
            }
        }
        fclose(fstdr);
        // Cari dan ubah id untuk sutradara
        for(i = 0; i < n; i++){
            for(z = 0; z < m; z++){
                if(strcmp(film[i].sutradara, stdr[z].id) == 0){
                    strcpy(film[i].sutradara, stdr[z].sutradara);
                    break;
                }
            }
        }

        //read genre
        int o=0;
        data gnr[50];
        FILE *fgnr;
        fgnr = fopen("Genre.dat", "r");
        fscanf(fgnr, "%s %s", gnr[o].id, gnr[o].genre);
        if(strcmp(gnr[o].id, "####") == 0){
            printf("File Kosong!\n");
        }else{
            while(strcmp(gnr[o].id, "####") != 0){
                o++;
                fscanf(fgnr, "%s %s", gnr[o].id, gnr[o].genre);
            }
        }
        fclose(fgnr);

        // Cari dan ubah id untuk genre
        for(i = 0; i < n; i++){
            for(z = 0; z < o; z++){
                if(strcmp(film[i].genre, gnr[z].id) == 0){
                    strcpy(film[i].genre, gnr[z].genre);
                    break;
                }
            }
        }

        //read bioskop
        int p=0;
        data bskp[50];
        FILE *fbskp;
        fbskp = fopen("Bioskop.dat", "r");
        fscanf(fbskp, "%s %s", bskp[p].id, bskp[p].bioskop);
        if(strcmp(bskp[p].id, "####") == 0){
            printf("File Kosong!\n");
        }else{
            while(strcmp(bskp[p].id, "####") != 0){
                p++;
                fscanf(fbskp, "%s %s", bskp[p].id, bskp[p].bioskop);
            }
        }
        fclose(fbskp);

        // Cari dan ubah id untuk genre
        for(i = 0; i < n; i++){
            for(z = 0; z < p; z++){
                if(strcmp(film[i].bioskop, bskp[z].id) == 0){
                    strcpy(film[i].bioskop, bskp[z].bioskop);
                    break;
                }
            }
        }

        data baru[50];

        printf("+-----------------------------+\n");
        printf("| 1.Menampilkan Daftar Film   |\n");
        printf("| 2.tambah Film               |\n");
        printf("| 3.Tambah Sutradara          |\n");
        printf("| 4.Tambah Genre              |\n");
        printf("| 4.Tambah Bioskop            |\n");
        printf("| 99.Selesai                  |\n");
        printf("+-----------------------------+\n");

        printf("Pilih: ");
        scanf("%d", &pilihan);
        if(pilihan==1){
            datafilm(film, n);
        }else if(pilihan==2){
            addfilm(film, n, baru);
        }else if(pilihan==3){
            addsutradara(stdr, m);
        }else if(pilihan==4){
            addgenre(baru);
        }else if(pilihan==5){
            addbioskop(baru);
        }
    }
    

    

    return 0;

}