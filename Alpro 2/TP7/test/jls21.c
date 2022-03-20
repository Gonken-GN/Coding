/*  (JLS21) Julio Searching

    Saya Hilman Fauzi Herdiana (2000879) mengerjakan Tugas Praktikum 7 dalam mata kuliah
    Algoritma dan Pemrograman 2 untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include <stdio.h>
#include <string.h>

//bungkusan array of terstrukur data siswa
typedef struct{
    char nama[100]; //nama siswa
    int jmlKeg;     //jumlah kegiatan siswa
    int nilai;      //nilai kegiatan siswa
    float avg;      //rata rata nilai siswa
}data;

//prosedur untuk menghitung rata rata nilai kegiatan siswa
void averageCount(int a, data dt1[], data dt2[][50])
{
    int i, j, temp[100];
    //lakukan looping untuk menambahkan setiap nilai kegiatan siswa
    for (i = 0; i < a; i++) //looping sebanyak a
    {
        for (j = 0; j < dt1[i].jmlKeg; j++) //looping sebanyak jml[i]
        {
            temp[i] += dt2[i][j].nilai; //lalu ditambah dan dimasukan ke array temp
        }
        //setelah itu temp[i] dibagi dengan jml[i] dan dimasukan ke array hasil[i]
        dt1[i].avg = (float) temp[i] / dt1[i].jmlKeg;
    }
}

//fungsi mengecek apakah array sudah terurut atau tidak
int sorted(int a, data dt[])
{   
    int i;
    for (i = 0; i < a; ++i) //looping sepanjang a
    {
        //jika arrat belum terurut
        if(dt[a-1].avg < dt[a-2].avg)
        {
            return 0;   //return hasil nya 0
        }
    }
    //semua elemen sudah dicek dan sudah terurut
    return 1; //return hasilnya 1
}

//prosedur sorting menggunakan metode insertion sort
void insertSort(int a, data dt[])
{
    int i, j;
    data temp;  //deklarasi bungkusan penampung
    //perulangan sebanyak isi array dimulai dari index ke 1
    for (i = 1; i < a; i++)
    {
        temp.avg = dt[i].avg;          //masukan hasil[i] ke  temp.avg
        strcpy(temp.nama, dt[i].nama); //copykan dt[i].nama ke temp.nama

        j = i - 1;
        //looping selama j>=0 karena min index array 0 dan selama temp.avg < dt[j].avg
        while (j >= 0 && temp.avg < dt[j].avg) //ascending
        {
            //geser ke depan / pindah posisi
            dt[j+1].avg = dt[j].avg;
            strcpy(dt[j+1].nama, dt[j].nama);
            j--;
        }
        dt[j+1].avg = temp.avg;          //masukan temp.hasil ke dt[j+1].avg
        strcpy(dt[j+1].nama, temp.nama); //copykan temp.nama ke dt[j+1].nama
    }
}

//fungsi searching data yang diminta jika array tidak terurut
int seqSearch(int a, int find)
{
    int i, found;
    found = -1; //inisialisasi found dengan -1
    i = 0;
    //looping sepanjang i kurang dari sama dengan n dan found sama dengan -1
    while ((i < a) && (found == -1))
    {
        if (i == find) //jika i sama dengan index find
        {
            found = find; //jika sama found diisi dengan index cari
        }
        else //jika i tidak sama dengan index find
        {
            i++; //i increment
        }
    }
    return found; //return hasil found
}

//fungsi searching data yg diminta jika array terurut
int binSearch(int a, int find)
{
    int found = -1; //inisialisasi found dengan -1
    int i, n, k;
    i = 0;
    n = a-1;
    //looping sepanjang i kurang dari sama dengan n dan found sama dengan -1
    while ((i <= n) && (found == -1))
    {
        //k dibagi 2
        k = (i + n) / 2;
        //jika k sama dengan index find
        if (k == find)
        {
            found = find; //found jadi diisi oleh index yg dicari
        }
        else
        {
            //jika index k lebih dari find (yang dicari)
            if (k > find)
            {
                //n adalah k dikurangi 1
                n = k - 1;
            }
            else //jika index k tidak lebih find
            {
                //i adalah k ditambah 1
                i = k + 1;
            }
        }
    }
    return found; //return hasil found
}

int main()
{
    int i, j;
    int n, cari;    //panjang array, index yg dicari
    int check;      //variabel untuk menampung hasil cek
    
    scanf("%d", &n); //input panjang array
    data siswa1[n];     //deklarasi bungkusan array siswa1 (nama, jml keg, average)
    data siswa2[n][50]; //deklarasi bungkusan array siswa (nilai keg)

    for (i = 0; i < n; i++) //looping sebanyak n
    {
        scanf("%s", siswa1[i].nama);    //input nama siswa
        scanf("%d", &siswa1[i].jmlKeg); //input jumlah kegiatan siswa

        for (j = 0; j < siswa1[i].jmlKeg; j++) //looping sebanyak jmlKeg[i]
        {
            scanf("%d", &siswa2[i][j].nilai); //input nilai kegiatan siswa
        }
    }
    scanf("%d", &cari); //input index yang dicari
    
    averageCount(n, siswa1, siswa2); //menghitung nilai rata rata kegiatan siswa

    check = sorted(n, siswa1); //cek apakah array nya sudah terurut atau tidak
    if (check != 1) //jika check != 1, yaitu 0  maka array belum terurut
    {
        insertSort(n, siswa1); //mensorting data array nya
        //menampilkan nama berdasarkan nilai rata2 yg terkecil
        for (i = 0; i < n; i++) //looping sepanjang n
        {
            printf("%s %d ", siswa1[i].nama, siswa1[i].avg);
            for(j=0;j<siswa1[i].jmlKeg;j++){
                printf("%d ", siswa2[i][j].nilai);
            }
            printf("\n");
        }
        //menampilkan nama sesuai dengan index yang diminta
        for (i = 0; i < n; i++) //looping sepanjang n
        {
            //jika index i sama dengan hasil return seqSearch
            if (i == seqSearch(n, cari))
            {
                printf("\nYang Diminta : %s\n", siswa1[i].nama); //tampilkan nama sesuai index yang diminta
            }
        }  
    }
    else //jika check bukan 0, yaitu 1 maka array sudah terurut
    {
        //menampilkan nama berdasarkan nilai rata2 yg terkecil
        for (i = 0; i < n; i++) //looping sepanjang n
        {
            printf("%s\n", siswa1[i].nama);
        }
        //menampilkan nama sesuai dengan index yang diminta
        for (i = 0; i < n; i++) //looping sepanjang n
        {
            //jika index i sama dengan hasil return binSearch
            if (i == binSearch(n, cari)) 
            {
                printf("\nYang Diminta : %s\n", siswa1[i].nama); //tampilkan nama sesuai index yang diminta
            }
        }
    }  
    
    return 0;
}