#include "header.h"
int main (){
    tree T;
    //test input tree
    char input[15];
    for(int i=0;i<14;i++){
        scanf(" %c", &input[i]);
    }
    //inisialisasi untuk iterator
    int iterator = 0;
    iterasi = 0, iterasi2 = 0, iterasi3 = 0;
    //proses pembuatan tree berdasarkan input
    makeTree(input[iterator], &T);iterator++;
    addLeft(input[iterator], T.root);iterator++;
    addRight(input[iterator], T.root);iterator++;
    addLeft(input[iterator], T.root->right);iterator++;
    addRight(input[iterator], T.root->left);iterator++;
    addRight(input[iterator], T.root->right);iterator++;
    addLeft(input[iterator], T.root->left->right);iterator++;
    addRight(input[iterator], T.root->right->left);iterator++;
    addRight(input[iterator], T.root->left->right);iterator++;
    addRight(input[iterator], T.root->right->right);iterator++;
    addLeft(input[iterator], T.root->right->right);iterator++;
    addLeft(input[iterator], T.root->left->right->left);iterator++;
    addLeft(input[iterator], T.root->right->left->right);iterator++;
    addRight(input[iterator], T.root->right->left->right);iterator++;
    //proses menampilkan tree berdasakan preeOrder
    printf("Pre Order:\n");
    printPreeOrder(T.root, 14, 0);

    //proses menampilkan tree berdasarkan In Order
    printf("\nIn Order:\n");
    dellLeft(T.root->left->right->left);
    printInOrder(T.root, 14);

    printf("\nPost Order:\n");
    dellRight(T.root->right->right);
    printPosOrder(T.root, 14);
    printf("\n");
    return 0;
}
/*Saya Raden Fadhil A.A (2004305) mengerjakan evaluasi Test Mesin (8) dalam mata kuliah
Struktur data untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/