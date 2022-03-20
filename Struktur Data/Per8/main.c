#include "header.h"
int main (){
    tree T;
    //test input tree
    makeTree('A', &T);
    addLeft('B', T.root);
    addRight('C', T.root);
    addLeft('D', T.root->left);
    addRight('E', T.root->left);
    addRight('F', T.root->right);
    //Test semua print mesin
    printf("===========\n");
    printf("PreOrder:\n");
    printPreeOrder(T.root);
    printf("\n===========\n");
    printf("InOrder:\n");
    printInOrder(T.root);
    printf("\n===========\n");
    printf("PostOrder:\n");
    printPosOrder(T.root);
    printf("\n===========\n");
    //Test prosedur copytree
    tree T2;
    copyTree(T.root, &T2.root);
    if(equal(T.root, T2.root) == 1) printf("tree sama\n");
    else printf("Tree tidak sama\n");
    //test prosedur delete
    dellRight(T.root->left);
    dellLeft(T.root->left);
    printf("===========\n");
    printPreeOrder(T.root);
    printf("\n");
    return 0;
}