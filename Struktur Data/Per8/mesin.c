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
    if(root->left == NULL){
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
    if(root != NULL){
        dellAll(root->left);
        dellAll(root->right);
        free(root);
    }
}
void dellRight(simpul *root){
    if(root != NULL){
        if(root->right != NULL){
            dellAll(root->right);
            root->right = NULL;
        }
    }
}
void dellLeft(simpul *root){
    if(root != NULL){
        if(root->left != NULL){
            dellAll(root->left);
            root->left = NULL;
        }
    }
}
void printPreeOrder(simpul *root){
    if(root != NULL){
        printf(" %c", root->kontainer);
        printPreeOrder(root->left);
        printPreeOrder(root->right);
    }
}
void printInOrder(simpul *root){
    if(root != NULL){
        printInOrder(root->left);
        printf(" %c", root->kontainer);
        printInOrder(root->right);
    }
}
void printPosOrder(simpul *root){
    if(root != NULL){
        printPosOrder(root->left);
        printPosOrder(root->right);
        printf(" %c", root->kontainer);
    }
}
void copyTree(simpul *root1, simpul **root2){
    if(root1 != NULL){
        (*root2) = (simpul *) malloc(sizeof(root2));
        (*root2)->kontainer = root1->kontainer;
        if(root1->left != NULL) copyTree(root1->left, &(*root2)->left);
        if(root1->right != NULL) copyTree(root1->right, &(*root2)->right);
    }
}
int equal(simpul *root1, simpul *root2){
    int hasil = 1;
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