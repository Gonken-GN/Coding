/* Deklarasi Library */
#include "tama.h"

int main()
{
    /* membuat queue kosong */
    queue Q;
    createEmpty(&Q);
    printQueue(Q);
    printf("+++++++++++++++++++++++++++++\n");

    addQueue("1000", "Aditya", 60, &Q);
    addQueue("2000", "Hasta", 62, &Q);
    addQueue("3000", "Pratama", 64, &Q);
    addQueue("4000", "Namikaze", 66, &Q);
    printQueue(Q);
    printf("+++++++++++++++++++++++++++++\n");

    addQueuePrioritas(2, "9999", "Prioritas", 99, &Q);
    printQueue(Q);
    printf("+++++++++++++++++++++++++++++\n");

    /* menghentikan operasi */
    return 0;
}