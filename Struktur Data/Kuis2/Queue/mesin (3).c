/*  (qqbsep21) Antrian Bantuan Sosial Era Pandemi (Mesin)

    Saya Hilman Fauzi Herdiana (2000879) mengerjakan Kuis 2 dalam 
    mata kuliah Stuktur Data untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"

// prosedur membuat queue
void createEmpty(queue *Q)
{
    // inisialisasi
    (*Q).first = NULL; // elemen pertama null
    (*Q).last = NULL; // elemen terakhir null
}

// Fungsi cek apakah queue kosong
int isEmpty(queue Q)
{
    int hasil = 0; // inisialisasi
    if (Q.first == NULL) // jika kosong
    {
        hasil = 1; // hasil jadi 1
    }
    return hasil; // return nilai hasilnya
}

// Fungsi mengitung isi elemen queue
int countElement(queue Q)
{
    int hasil = 0; // inisialisasi
    if (Q.first != NULL) // queue tidak kosong
    {
        // inisialisasi
        elemen *bantu; // deklarasi pointer
        bantu = Q.first;

        while (bantu != NULL) // looping selama bantu tidak null
        {
             // iterasi
            hasil = hasil + 1;
            bantu = bantu->next;
        }
    }
    return hasil; // return nilai hasilnya
}

// prosedur memasukan queue
void add(char nama[], int prioritas, char kota[], int bantuan, queue *Q)
{
    elemen* baru; // deklarasi pointer
    baru = (elemen*) malloc (sizeof (elemen));

    // memindahkan data
    strcpy(baru->kontainer.nama, nama);
    baru->kontainer.prioritas = prioritas;
    strcpy(baru->kontainer.kota, kota);
    baru->kontainer.bantuan = bantuan;

    baru->next = NULL; // inisialisasi
    if ((*Q).first == NULL) // jika queue kosong
    {
        (*Q).first = baru; // baru dimasukan ke elemen pertama
    }
    else // jika queue tidak kosong
    {
        (*Q).last->next = baru; // baru dimasukan ke elemen selanjutnya
    }
    (*Q).last = baru; // (*Q).last menjadi baru
    baru = NULL;      // baru menjadi null
}

// prosedur memasukan queue prioritas
void addPriority(char nama[], int prioritas, char kota[], int bantuan, queue *Q)
{
    elemen* baru; // deklarasi pointer
    baru = (elemen *) malloc (sizeof(elemen));

    // memindahkan data
    strcpy(baru->kontainer.nama, nama);
    baru->kontainer.prioritas = prioritas;
    strcpy(baru->kontainer.kota, kota);
    baru->kontainer.bantuan = bantuan;

    if ((*Q).first == NULL) // Jika queue kosong
    {
        add(nama, prioritas, kota, bantuan, Q); // masukan ke queue
    }
    // Jika tidak
    else
    {
        if (prioritas > countElement(*Q)) // jika prioritas lebih besar dari banyak elemen queue
        {
            add(nama, prioritas, kota, bantuan, Q); // masukan ke queue
        }
        else // jika tidak
        {
            if (prioritas == 1) // Jika prioritas = 1
            {
                baru->next = (*Q).first; // queue pertama dimasukan ke baru->next
                (*Q).first = baru; // baru menjadi queue pertama
                baru = NULL; // baru menjadi null
            }
            // Jika tidak
            else
            {
                // inisialisasi
                elemen* pointer = (*Q).first;
                int i;
                for (i = 1; i < prioritas-1; i++) // looping selama i kurang dari prioritas-1 
                {
                    pointer = pointer->next; // pointer menjadi data berikutnya
                }
                baru->next = pointer->next; // baru->next menjadi pointer->next
                pointer->next = baru; //  pointer->next menjadi baru
                baru = NULL; // baru menjadi null
            }
        } 
    }
}

// prosedur menghapus queue
void del(queue *Q)
{
    if ((*Q).first != NULL) // Jika queue bukan list kosong
    {
        elemen *hapus = (*Q).first;
        if (countElement(*Q) == 1) // jika queue isinya 1
        {
            (*Q).first = NULL; // elemen pertama jadi null
            (*Q).last = NULL; // elemen terakhir jadi null
        }
        else // jika lebih dari 1
        {
            (*Q).first = (*Q).first->next; // (*Q).first menjadi isi elemen selanjutnya
            hapus->next = NULL; // hapus->next menjadi null
        }
        free(hapus); // mengahpus alokasi memori sebelumnya
    }
}

// prosedur print queue
void printQueue(queue Q, int x)
{
    if (Q.first != NULL) // JIka queue tidak kosong
    {
        elemen* bantu = Q.first; // inisialisasi
        int i = 0;
        printf("Bantuan Tersalurkan:\n");
        while (i < x) // looping selama bantu tidak null
        {
            // tampilkan
            printf("%s %d %s %d\n", bantu->kontainer.nama, bantu->kontainer.prioritas, bantu->kontainer.kota, bantu->kontainer.bantuan);
            // iterasi
            bantu = bantu->next;
            i++;
        }
        printf("\nAntrian berisi:\n");
        while (bantu != NULL) // looping selama bantu tidak null
        {
            // tampilkan
            printf("%s %d %s %d\n", bantu->kontainer.nama, bantu->kontainer.prioritas, bantu->kontainer.kota, bantu->kontainer.bantuan);
            bantu = bantu->next; // iterasi
        }
    }
    else // Jika queue kosong
    {
        printf("queue kosong\n");
    }
}