#include <stdio.h>
#include <string.h>
typedef struct{
    char nama[100];
    char jurusan[100];
    char fk[100];
}data;
typedef struct{
    char jurusan[100];
    char n_jurusan[100];
}pro;
typedef struct{
    char fk[100];
    char n_fk[100];
}fakultas;
int main (){
    int i, n = 0, a = 0, b =0;
    data siswa[50];
    pro prodi[50];
    fakultas fakul[50];
    FILE *fmahasiswa;
    FILE *fjurusan;
    FILE *ffakultas;
    fmahasiswa = fopen("mahasiswa.dat", "r");
    fjurusan = fopen("jurusan.dat", "r");
    ffakultas = fopen("fakultas.dat", "r");
    fscanf(fmahasiswa,"%s %s %s", &siswa[n].nama, &siswa[n].jurusan, &siswa[n].fk);
    while(strcmp(siswa[n].nama, "####") != 0){
        n++;
        fscanf(fmahasiswa,"%s %s %s", &siswa[n].nama, &siswa[n].jurusan, &siswa[n].fk);
    }
    fscanf(fjurusan, "%s %s", &prodi[a].jurusan, &prodi[a].n_jurusan);
    while(strcmp(prodi[a].jurusan, "####") != 0){
        a++;
        fscanf(fjurusan, "%s %s", &prodi[a].jurusan, &prodi[a].n_jurusan);
    }
    fscanf(ffakultas, "%s %s", &fakul[b].fk, &fakul[b].n_fk);
    while(strcmp(fakul[b].fk, "####") != 0){
        b++;
        fscanf(ffakultas, "%s %s", &fakul[b].fk, &fakul[b].n_fk);
    }
    int j;
    i=0;
    while(strcmp(siswa[i].nama, "####") != 0){
        printf("%s %s %s\n", siswa[i].nama, siswa[i].jurusan, siswa[i].fk);
        i++;
    }
    i=0;
    while(strcmp(siswa[i].nama, "####") != 0){
        for(j=0;j<a;j++){
            if(strcmp(siswa[i].jurusan, prodi[j].jurusan) == 0){
                strcpy(siswa[i].jurusan, prodi[j].n_jurusan);
            }
        }
        for(j=0;j<b;j++){
            if(strcmp(siswa[i].fk, fakul[j].fk) == 0){
                strcpy(siswa[i].fk, fakul[j].n_fk);
            }
        }
        i++;
    }
    fclose(fmahasiswa);
    fclose(fjurusan);
    fclose(ffakultas);
    for(i=0;i<n;i++){
        printf("%s %s %s\n", siswa[i].nama, siswa[i].jurusan, siswa[i].fk);
    }
    return 0;
}