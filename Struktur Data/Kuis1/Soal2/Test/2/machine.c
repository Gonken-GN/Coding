#include "header.h"

void createList(list *L){

    (*L).first = -1;
    (*L).tail = -1;
    int i;

    for(i=0;i<100;i++){
        /*proses menginisialisasi isi array*/
        (*L).data[i].prev = -2;
        (*L).data[i].next = -2;
    }
}

int countElement(list L){
    int hasil = 0;
    if(L.first != -1){
        /*list tidak kosong*/
        int bantu;
        /*inisialisasi*/
        bantu = L.first;
        while(bantu != -1){
            /*proses*/
            hasil = hasil + 1;
            /*iterasi*/
            bantu = L.data[bantu].next;
        }
    } 
    return hasil;
}

int emptyElement(list L){
    int hasil = -1;
    if(countElement(L) < 100){
        int ketemu = 0;
        int i = 0;
        while((ketemu == 0)&&(i < 100)){
            if(L.data[i].next == -2){
                hasil = i;
                ketemu = 1;
            }
            else{
                i = i + 1;
            }
        }
    } 
    return hasil;
}

void addFirst(char kata[], list *L){
    if(countElement(*L) < 100){
        int baru = emptyElement(*L);
        strcpy((*L).data[baru].kontainer.kata, kata);

        if((*L).first == -1){
            /*jika list kosong*/
            (*L).data[baru].prev = -1;
            (*L).data[baru].next = -1;
            (*L).tail = baru;
        }else{
            /*jika list tidak
            kosong*/
            (*L).data[baru].prev = -1;
            (*L).data[baru].next =
            (*L).first;
            (*L).data[(*L).first].prev =
            baru;
        }

        (*L).first = baru;
    }else{
        /*proses jika array penuh*/
        printf("sudah tidak dapat ditambah\n");
    }
}

void addAfter(int before, char kata[], list *L){
    if(countElement(*L) < 100){
        int baru = emptyElement(*L);

        strcpy((*L).data[baru].kontainer.kata, kata);
        if((*L).data[before].next != -1){
            //jika baru bukan menjadi elemen terakhir
            (*L).data[baru].prev = before;
            (*L).data[baru].next =
            (*L).data[before].next;
            (*L).data[before].next = baru;
            (*L).data[(*L).data[baru].next].prev = baru;
        }else{
            //jika baru menjadi elementerakhir
            (*L).data[baru].prev =
            before;
            (*L).data[before].next =
            baru;
            (*L).data[baru].next = -1;
            (*L).tail = baru;
        }
    }else{
        /*proses jika array penuh*/
        printf("sudah tidak dapat ditambah\n");
    }
}

void addLast(char kata[], list *L){

    if((*L).first == -1){
        /*proses jika list masih kosong*/
        addFirst(kata, L);
    }else{
        /*proses jika list telah berisi elemen*/
        addAfter((*L).tail, kata, L);
    }

}

void delFirst(list *L){
    if((*L).first != -1){
        int hapus = (*L).first;
        if(countElement(*L) == 1){
            (*L).first = -1;
            (*L).tail = -1;
        }else{
            (*L).first = (*L).data[(*L).first].next;
            (*L).data[(*L).first].prev = -1;
        }
        /*elemen awal sebelumnya dikosongkan*/
        (*L).data[hapus].prev = -2;
        (*L).data[hapus].next = -2;
    }
    else{
        /*proses jika list kosong*/
        printf("list kosong\n");
    }
}

void delAfter(int before, list *L){
    int hapus = (*L).data[before].next;
    if(hapus != -1){
        if((*L).data[hapus].next == -1){
            (*L).tail = before;
            (*L).data[before].next = -1;
        }else{
            (*L).data[before].next = (*L).data[hapus].next;
            (*L).data[(*L).data[hapus].next].prev = before;
        }
        /*pengosongan elemen*/
        (*L).data[hapus].prev = -2;
        (*L).data[hapus].next = -2;
    }
}

void delLast(list *L){
    if((*L).first != -1){
        if(countElement(*L) == 1){
            /*proses jika list hanya berisi satu elemen*/
            delFirst(L);
        }
        else{
            /*elemen sebelum elemen terakhir menjadi elemen terakhir*/
            delAfter((*L).data[ (*L).tail].prev, L);
        }
    }
    else{
        /*proses jika list kosong*/
        printf("list kosong\n");
    }
}

/* Fungsi menghitung panjang seluruh kata pada list*/
int panjangKata(list L){
    // inisialisasi
    int bantu = L.first;
    int panjang = 0;
    while(bantu != -1){
        // proses
        panjang = panjang + strlen(L.data[bantu].kontainer.kata);
        // iterasi
        bantu = L.data[bantu].next;
    }
    return panjang;
}

void printElement(list L){
    if(L.first != -1){
        /*inisialisasi*/
        int i, j;
        int depan = L.first, belakang = L.tail;
        // jumlah spasi di awal dan diantara depan dan belakang
        int space_before = 0, space_between = panjangKata(L);
        // batas perulangan kebawah (jumlah baris)
        int batas = countElement(L);
        if(batas%2 == 0){
            batas /= 2;
        }else{
            batas = batas/2 +1;
        }
        for(i=0; i<batas; i++){
            // jumlah spasi diantara kata dikurangi panjang kedua kata yang menghimpit kata tersebut
            space_between = space_between - strlen(L.data[depan].kontainer.kata) - strlen(L.data[belakang].kontainer.kata);
            printf("%d", space_between);
            // spasi ditiap baris sebelum print kata
            for(j=0; j<space_before; j++){
                printf(" ");
            }
            // print kata yang dimulai di tail
            printf("%s", L.data[belakang].kontainer.kata);
            // spasi di antara kata
            for(j=0; j<space_between; j++){
                printf(" ");
            }
            // print kata yang dimulai di first
            if(depan != belakang){
                printf("%s", L.data[depan].kontainer.kata);
            }
            // iterasi
            space_before = space_before + strlen(L.data[belakang].kontainer.kata);
            depan = L.data[depan].next;
            belakang = L.data[belakang].prev;
            printf("\n");
        }
    }else{
        /*proses jika list kosong*/
        printf("list kosong\n");
    }
}

void delAll(list *L){
    int i;
    for(i=countElement(*L);i>=1;i--){
        /*proses menghapus elemen list*/
        delLast(L);
    }
}