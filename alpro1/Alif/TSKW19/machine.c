#include "header.h" //include header
//prosedur untuk mencari banyak jumlah huruf vokal dan konsonan
void checkVK(int j, char penyakit[], char penawar[][100]){
    int i;//variable iterator
    vokalPy = 0, konsonanPy = 0, vokalPw = 0, konsonanPw = 0;//variabel konsonan dan vokal penyakit maupun penawar
    int lenPy = strlen(penyakit); //menghitung panjang string penyakit
    int lenPw = strlen(penawar[j]); //menghitung panjang string penawar
    for(i = 0; i < lenPy; i++){ //mencari yg vokal dan konsonan
        if(penyakit[i] == 'a' || penyakit[i] == 'i' || penyakit[i] == 'u' || penyakit[i] == 'e' || penyakit[i] == 'o'){
            vokalPy++;
        }
        else if(penyakit[i] != 'a' && penyakit[i] != 'i' && penyakit[i] != 'u' && penyakit[i] != 'e' && penyakit[i] != 'o' && penyakit[i] != '_'){
            konsonanPy++;
        }
    }
    for(i = 0; i < lenPw; i++){
        if(penawar[j][i] == 'a' || penawar[j][i] == 'i' || penawar[j][i] == 'u' || penawar[j][i] == 'e' || penawar[j][i] == 'o'){
            vokalPw++;
        }
        else if(penawar[j][i] != 'a' && penawar[j][i] != 'i' && penawar[j][i] != 'u' && penawar[j][i] != 'e' && penawar[j][i] != 'o' && penawar[j][i] != '_'){
            konsonanPw++;
        }
    }
}
void check(int n, char penyakit[], char elemenPenyakit[], char penawar[][100], char elemen[][100]){
    int i; //variabel iterator
    int el1, el2; //variabel pemnbanding
    int b = 0, g = 0;//variable berhasil dan gagal
    for(i = 0; i < n; i++){
        if(strcmp(elemenPenyakit, "api") == 0){//jikae elemen tersebut api
            checkVK(i, penyakit, penawar); //cek kon vo
            el1 = strcmp(elemen[i], "tanah"); //api kalah sama tanah
            el2 = strcmp(elemen[i], "air"); //api kalah sama air
            if((el1 == 0 || el2  == 0) || ((vokalPy > strlen(elemen[i])) || (konsonanPw > konsonanPy))){
                strcpy(berhasil[b], penawar[i]); //masukan nama penawar ke array baru
                b++;
            }
            else{ //yang gagal
                strcpy(gagal[g], penawar[i]);
                g++;
            }
        } 
        else if(strcmp(elemenPenyakit, "udara") == 0){
            el1 = strcmp(elemen[i], "api");
            el2 = strcmp(elemen[i], "air");
            if((el1 == 0 || el2  == 0) || ((vokalPy > strlen(elemen[i])) || (konsonanPw > konsonanPy))){
                strcpy(berhasil[b], penawar[i]);
                b++;
            }
            else{
                strcpy(gagal[g], penawar[i]);
                g++;
            }
        }
        else if(strcmp(elemenPenyakit, "listrik") == 0){
            el1 = strcmp(elemen[i], "udara");
            el2 = strcmp(elemen[i], "api");
            if((el1 == 0 || el2  == 0) || ((vokalPy > strlen(elemen[i])) || (konsonanPw > konsonanPy))){
                strcpy(berhasil[b], penawar[i]);
                b++;
            }
            else{
                strcpy(gagal[g], penawar[i]);
                g++;
            }
        }
        else if(strcmp(elemenPenyakit, "tanah") == 0){
            el1 = strcmp(elemen[i], "listrik");
            el2 = strcmp(elemen[i], "udara");
            if((el1 == 0 || el2  == 0) || ((vokalPy > strlen(elemen[i])) || (konsonanPw > konsonanPy))){
                strcpy(berhasil[b], penawar[i]);
                b++;
            }
            else{
                strcpy(gagal[g], penawar[i]);
                g++;
            }
        }
        else if(strcmp(elemenPenyakit, "air") == 0){
            el1 = strcmp(elemen[i], "tanah");
            el2 = strcmp(elemen[i], "listrik");
            if((el1 == 0 || el2  == 0) || ((vokalPy > strlen(elemen[i])) || (konsonanPw > konsonanPy))){
                strcpy(berhasil[b], penawar[i]);
                b++;
            }
            else{
                strcpy(gagal[g], penawar[i]);
                g++;
            }
        }
    }
}
void print(){ //print hasil
    int nberhasil = 0, ngagal = 0;//jumlah yang berhasil dan gagal
    int i = 0;//iterator
    while(strcmp(berhasil[i], "") != 0){//menghitung yang berhasil
        nberhasil++;
        i++;
    }
    i = 0;
    while(strcmp(gagal[i], "") != 0){//menghitung yang gagal
        ngagal++;
        i++;
    }
    printf("========== BERHASIL ==========\n");//print berhasil
    if(nberhasil > 0){
        for(i = 0; i < nberhasil; i++){
            printf("%s\n", berhasil[i]);
        }
    }
    else{//jika tidak ada yang berhasil
        printf("Tidak ada data sihir.\n");
    }
    printf("=========== GAGAL ===========\n");//print gagal
    if(ngagal > 0){
        for(i = 0; i < ngagal; i++){
            printf("%s\n", gagal[i]);
        }
    }
    else{//jika tidak ada yang gagal
        printf("Tidak ada data sihir.\n");
    }
}