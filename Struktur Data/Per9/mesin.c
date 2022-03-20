#include "header.h"

void makeTree(char c, tree *T){
    simpul *node;
    node  = (simpul *) malloc (sizeof(simpul));
    //proses inialisasi
    node->kontainer = c;
    node->sibling = NULL;
    node->child = NULL;
    (*T).root = node;
}
void addchild(char c, simpul *root){
    //jika simpul kosong maka lakukan proses penambahan
    if(root != NULL){
        simpul *baru;
        baru = (simpul *) malloc (sizeof(simpul));
        baru->kontainer = c;
        baru->child = NULL; 
        //jika tidak ada child maka child yang akan ditambahkan akan menjadi anak pertama
        if(root->child == NULL){
            //sibling akan menjadi null karena hanya terdapat satu child didalam root
            baru->sibling = NULL;
            //child pertama akan ditunjuk ke elemen baru
            root->child = baru;
        //jika root hanya memiliki satu child maka child yg baru akan menjadi sibling 
        }else{
            if(root->child->sibling == NULL){
                baru->sibling = root->child;//elemen baru akan menunjuk child pertama sebagai sibling
                root->child->sibling = baru;//child pertama sibling akan menunjuk elemen baru sebagai sibling
            //jika root memiliki lebih dari satu child maka akan mencari ujung dari child (akhir dari sibling) untuk dijadikan child baru
            }else{
                simpul* last = root->child;
                //proses pencarian sibling terakhir dengan perulangan akan berhenti jika sibling sama dengan child pertama
                while(last->sibling != root->child){
                    last = last->sibling;
                }
                //jika perulangan telah menemukan sibling terakhir
                //elemen baru sibling akan menunjuk ke child pertama
                baru->sibling = root->child;
                last->sibling = baru;//elemen baru akan menjadi sibling terakhir
            }
        }
    }
}
void delAll(simpul *root){
    //jika root tidak kosong
    if(root != NULL){
        //jika root memilki child
        if(root->child != NULL){
            //jika root child tidak memiliki sibling
            if(root->child->sibling = NULL){
                //maka akan melakukan proses delete hanya sekali aja, yaitu mendelete child pertama
                delAll(root->child);
                free(root);
            //jika root child memiliki sibling
            }else{
                simpul *bantu, *proses;
                bantu = root->child;//untuk looping
                //proses looping akan terus berjalan selama child pertama memiliki sibling
                while(bantu->sibling != root->child){
                    proses = bantu;//pointer sibling
                    bantu = bantu->sibling;
                    delAll(proses);//menghapus sibling
                }
                delAll(bantu);
            }
            free(root);
        }else{
            free(root);
        }
    }
}
void delChild(char c, simpul *root){
    //jika terdapat root
    if(root != NULL){
        simpul *hapus = root->child;
        //jika terdapat child
        if(hapus != NULL){
            //jika hanya memiliki satu child
            if(hapus->sibling == NULL){
                //proses pengecekan apakah nilai dari child pertama sama dengan variabel char c (input)
                if(root->child->kontainer == c){
                    delAll(root->child);
                    root->child = NULL;
                }else printf("Tidak ada simpul anak dengan data masukan\n");
            //jika memiliki lebih dari satu simpul anak (child)
            }else{
                simpul *prev = NULL;
                int ketemu = 0;
                //proses mencari simpul yang akan dihapus
                while(hapus->sibling != root->child && ketemu == 0){
                    //jika telah ditemukan value hapus dengan variabel C
                    if(hapus->kontainer == c){
                        ketemu = 1;
                    //jika belum ditemukan maka looping
                    }else{
                        prev = hapus;
                        hapus = hapus->sibling;
                    }
                }
                //proses untuk sibling terakhir
                //jika value sibling terakhir adalah sama dengan input
                if(ketemu == 0 && hapus->kontainer == c) ketemu = 1;
                if(ketemu == 1){
                    simpul *last = root->child;
                    while(last->sibling != root->child){
                        last = last->sibling;
                    }
                    //jika child yg akan dihapus adalah child pertama
                    if(prev == NULL){
                        //jika hanya terdapat dua anak (satu child dengan satu sibling)
                        if((hapus->sibling == last) && (last->sibling == root->child)){
                            root->child = last; //elemen kedua (child kedua) akan menjadi child pertama
                            last->sibling = NULL;//sibling akan menjadi null
                        //jika terdapat lebih dari dua child
                        }else{
                            root->child = hapus->sibling;
                            last->sibling = root->child;
                        }
                    //jika yg dihapus bukan anak pertama
                    }else{
                        //jika hanya terdapat dua child saja dan akan yg dihapus elemen kedua
                        if((prev == root->child) && (last->sibling == root->child)) root->child->sibling = NULL;
                        //jika terdapat lebih dari dua child
                        else{
                            prev->sibling = hapus->sibling;
                            hapus->sibling = NULL;
                        }
                    }
                    delAll(hapus);
                }else printf("tidak ada child dengan kontainer masukan\n");
            }
        }
    }
}
simpul* findsimpul(char c, simpul *root){
    simpul *hasil = NULL;
    if(root != NULL){
        //jika parent merupakan value yg dicari
        if(root->kontainer == c){
            hasil = root;
        }else{
            simpul *bantu = root->child;
            if(bantu != NULL){
                //jika hanya terdapat satu child
                if(bantu->sibling == NULL){
                    if(bantu->kontainer == c) hasil = bantu;
                    else hasil = findsimpul(c, bantu);
                //jika terdapat lebih dari satu child
                }else{
                    int ketemu = 0;
                    //proses pencarian 
                    while((bantu->sibling != root->child) && (ketemu == 0)){
                        if(bantu->kontainer == c) {
                            hasil = bantu;
                         ketemu = 1;
                        }
                        else{
                            hasil = findsimpul(c, bantu);
                            bantu = bantu->sibling;
                        }
                    }
                    //proses untuk child terakhir
                    if(ketemu == 0){
                        if(bantu->kontainer == c) hasil = bantu;
                        else hasil = findsimpul(c, bantu);
                    }
                }
            }
        }
    }
    return hasil;
}
void printTreePreOrder(simpul *root){
    if(root != NULL){
        printf(" %c ", root->kontainer);
        simpul *bantu = root->child;
        //jika memiliki child maka print child
        if(bantu != NULL){
            //jika hanya memiliki satu child
            if(bantu->sibling == NULL) printTreePreOrder(bantu);
            //jika terdapat lebih dari satu child
            else{
                //proses print dari root child sampai child sebelum child terakhir
                while(bantu->sibling != root->child){
                    printTreePreOrder(bantu);
                    bantu = bantu->sibling;
                }
                printTreePreOrder(bantu);//print child terakhir
            }
        }
    }
}
void printTreePostOrder(simpul *root){
    if(root != NULL){
        simpul *bantu = root->child;
        //jika terdapat child
        if(bantu != NULL){
            //jika hanya memiliki satu child
            if(bantu->sibling == NULL) printTreePostOrder(bantu);
            else{
                while(bantu->sibling != root->child){
                    printTreePostOrder(bantu);
                    bantu = bantu->sibling;
                }
                printTreePostOrder(bantu);
            }
        }
        printf(" %c ", root->kontainer);
    }
}
void copyTree(simpul *root1, simpul **root2){
    if(root1 != NULL){
        //proses mencopy dari parent root1
        (*root2) = (simpul *) malloc (sizeof(simpul));
        (*root2)->kontainer = root1->kontainer;
        (*root2)->sibling = NULL;
        (*root2)->child = NULL;
     
        //jika root1 memiliki child
        if(root1->child != NULL){
             
            //jika root1 hanya memiliki satau child 
            if(root1->child->sibling == NULL) {
               copyTree(root1->child, &(*root2)->child);
            }
            //jika root1 memiliki lebih dari satu child
            else{
                simpul *bantu1 = root1->child, *bantu2 = (*root2)->child;
                //proses looping
                while(bantu1->sibling != root1->child){
                    copyTree(bantu1, &bantu2);
                    
                    bantu1 = bantu1->sibling;
                    bantu2 = bantu2->sibling;
                }
                //proses copy untuk child terakhir
                copyTree(bantu1, &bantu2);
            }
        }
    }
}
int isequal(simpul *root1, simpul *root2){
    int hasil = 1;
    if((root1 != NULL) && (root2 != NULL)){
        if(root1->kontainer != root2->kontainer) hasil = 0;
        else{
            if((root1->child != NULL) && (root2->child != NULL)){
                if(root1->child->sibling == NULL) hasil = isequal(root1->child, root2->child);
            }else{
                simpul *bantu1 = root1->child, *bantu2 = root2->child;
                while(bantu1->sibling != root1->child){
                    if((bantu1 != NULL) && (bantu2 != NULL)){
                        hasil = isequal(bantu1, bantu2);
                        if(hasil == 0){
                            break;
                        }
                        bantu1 = bantu1->sibling;
                        bantu2 = bantu2->sibling;
                    }else{
                        hasil = 0;
                        break;
                    }
                }
                hasil = isequal(bantu1, bantu2);
            }
        }
    }else{
        if((root1 != NULL) || (root2 != NULL)){
            hasil = 0;
        }
    }
    return hasil;
}