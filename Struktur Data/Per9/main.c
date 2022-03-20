#include "header.h"

int main (){
    tree T;
    makeTree('A', &T);
    addchild('B', T.root);
    addchild('C', T.root);
    addchild('D', T.root);
    simpul *node = findsimpul('B', T.root);
    if(node != NULL){
        addchild('E', node);
        addchild('F', node);
    }
    node = findsimpul('C', T.root);
    if(node != NULL){
        addchild('G', node);
    }
    node = findsimpul('D', T.root);
    if(node != NULL){
        addchild('H', node);
        addchild('I', node);
        addchild('J', node);
    }
    node = findsimpul('J', T.root);
    if(node != NULL){
        addchild('K', node);
        addchild('L', node);
        addchild('M', node);
    }
    printf("=============\n");
    printf("Pre Order:\n");
    printTreePreOrder(T.root);
    // printf("\n=============\n");
    // printf("Post Order:\n");
    // printTreePostOrder(T.root);
    // printf("\n==============\n");

    tree T2;
    copyTree(T.root, &T2.root);
    printf("%c", T2.root->child);
    printf("\n=============\n");
    printf("Pre Order:\n");
    printTreePreOrder(T2.root);
    printf("\n=============\n");
    printf("Post Order:\n");
    printTreePostOrder(T2.root);
    printf("\n==============\n");
    if(isequal(T.root, T2.root) == 1) printf("Tree sama\n");
    else printf("Tree tidak sama\n");

    node = findsimpul('J', T.root);
    if(node != NULL){
        delChild('K', node);
        delChild('L', node);
    }
    // printf("\n=============\n");
    // printf("Pre Order:\n");
    // printTreePreOrder(T.root);
    // printf("\n=============\n");
    // printf("Post Order:\n");
    // printTreePostOrder(T.root);
    // printf("\n==============\n");
    return 0;
}