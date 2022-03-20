#include "header.h"

void makeTree(char c, tree *T){
    //membuat alokasi baru untuk 
    simpul *baru;
    baru = (simpul *) malloc (sizeof(simpul));
    //memasukkan isi elemen untuk akar
    baru->kontainer = c;
    baru->right = NULL;
    baru->left = NULL;
    (*T).root = baru;
    baru = NULL;
}
void addRight(char c, simpul *root){
    //jika simpul kanan belum terisi
    if(root->right == NULL){
        //maka akan lakukan proses add untuk sub kanan
        simpul *baru;
        baru = (simpul *) malloc (sizeof(simpul));
        baru->kontainer = c;
        baru->left = NULL;
        baru->right = NULL;
        root->right = baru;
    }else{
        printf("Sudah terisi\n");
    }
}
void addLeft(char c, simpul *root){
    //jika simpul kiri belum terisi
    if(root->left == NULL){
        //maka akan lakukakn proses add untuk sub kiri
        simpul* baru = (simpul*) malloc (sizeof(simpul));
        baru->kontainer = c;
        baru->left = NULL;
        baru->right = NULL;
        root->left = baru;
    }else{
        printf("sudah terisi\n");
    }
}
void dellAll(simpul *root){
    //jika tree terisi
    if(root != NULL){
        //maka hapus simpul kanan dan kiri lalu free memori tree
        dellAll(root->left);
        dellAll(root->right);
        free(root);
    }
}
void dellRight(simpul *root){
    //jika tree dan simpul kanan telah terisi
    if(root != NULL){
        if(root->right != NULL){
            //maka hapus untuk semua simpul kanan
            dellAll(root->right);
            root->right = NULL;
        }
    }
}
void dellLeft(simpul *root){
    //jika tree dan simpul kiri belum terisi
    if(root != NULL){
        if(root->left != NULL){
            //maka hapus semua simpul kiri
            dellAll(root->left);
            root->left = NULL;
        }
    }
}
void printPreeOrder(simpul *root, int banyak, int iterator){
    if(root != NULL){
        //proses menampilkan isi dari tree 
        if(iterasi < banyak-1) {
            printf("%c - ", root->kontainer);
            iterasi++;
        }
        else printf("%c", root->kontainer);
        printPreeOrder(root->left, banyak, iterator);
 
        printPreeOrder(root->right, banyak, iterator);
  
    }
}
void printInOrder(simpul *root, int banyak){
    if(root != NULL){
        printInOrder(root->left, banyak);
        if(iterasi2 < banyak-2){
            printf("%c - ", root->kontainer);
            iterasi2++;
        }else printf("%c", root->kontainer);
        printInOrder(root->right, banyak);
    }
}
void printPosOrder(simpul *root, int banyak){
    int i = 0;
    if(root != NULL){
        printPosOrder(root->left, banyak);
        printPosOrder(root->right, banyak);
        if(iterasi3 < banyak-3){
            printf("%c - ", root->kontainer);
            iterasi3++;
        }else printf("%c", root->kontainer);
    }
}
void copyTree(simpul *root1, simpul **root2){
    //jika tree pertama tidak kosong
    if(root1 != NULL){
        //maka cari alokasi baru untuk tree kedua dan mengcopy tree kontainer dari tree pertama ke tree kedua
        (*root2) = (simpul *) malloc(sizeof(root2));
        (*root2)->kontainer = root1->kontainer;
        //jika tree pertama terdapat simpul kanan atau simpul kiri maka copy ke tree kedua
        if(root1->left != NULL) copyTree(root1->left, &(*root2)->left);
        if(root1->right != NULL) copyTree(root1->right, &(*root2)->right);
    }
}
int equal(simpul *root1, simpul *root2){
    int hasil = 1;
    //jika terdapat isi dari tree yg berbeda baik dari tree 1 maupun tree dua maka kedua tree tidak sama
    if(root1 != NULL && root2 != NULL){
        if(root1->kontainer != root2->kontainer) hasil = 0;
        else{
            equal(root1->left, root2->left);
            equal(root1->right, root2->right);
        }
    }else{
        if(root1 != NULL || root2 != NULL) hasil = 0;
    }
    return hasil;
}