#include"header.h"

void createEmpty(queue *Q){
    (*Q).first = NULL;
    (*Q).last = NULL;
}

/* Bisa dihilangin karena udah di wakilin sama fungsi count element */
int isEmpty(queue Q){

    int result = 0;
    if (Q.first == NULL){
        result = 1;
    }
    return result;
}

int countElement(queue Q){
    int result = 0;

    if (Q.first != NULL){
        /* queue tidak kosong */
        element* point;

        //inisialiasi
        point = Q.first;

        while (point != NULL){
            result = result + 1;

            //iterasi
            point = point->next;
        }   
    }
    return result;
}

void add(game data, queue *Q){
    element* new;                              
    new = (element*) malloc (sizeof (element));  
    new->chest = data;
    new->next = NULL;

    if ((*Q).first == NULL){
        (*Q).first = new;
    }else{
        (*Q).last->next = new;
    }
    (*Q).last = new;
    new = NULL;
}

void out(queue *Q){
    
    if ((*Q).first != NULL){     //jika queue tidak kosong
    
        element* delete = (*Q).first;     
        if (countElement(*Q) == 1){      
        
            (*Q).first = NULL;
            (*Q).last = NULL;
        }else{

            (*Q).first = (*Q).first->next;
            delete->next = NULL;
        }
        free(delete);        //prosedur melepaskan element dari memori yang ditunjuk pointer hapus
    }
    else{
        printf("queue kosong\n");
    }
}

void priorityQueue(game data, int priority, queue *Q){
    element* new;                             
    new = (element*) malloc (sizeof (element));    
    new->chest = data;

    if ((*Q).first == NULL){
        add(data, Q);
    }
    else{
        if (priority > countElement(*Q)){
            add(data, Q);
        }else{
            if (priority == 1){
                new->next = (*Q).first;
                (*Q).first = new;
                new = NULL;
            }
            else{
                element* point = (*Q).first;
                for (int i = 1; i < priority-1; i++){
                    point = point->next;
                }

                new->next = point->next;
                point->next = new;
                new = NULL;
            }
        }
        
    }
    
}

void printQueue(queue Q, int queueNumber){
    if (Q.first != NULL){
        printf("Queue %d\n", queueNumber);

        element* print = Q.first;

        while (print != NULL){

            if(print->next == NULL){
                printf("%s %d\n", print->chest.name, print->chest.rating);
                printf("******************\n");
            }else{
                printf("%s %d\n", print->chest.name, print->chest.rating);
            }
            print = print->next;
        }
    }else{
        //jika queue kosong
        printf("queue kosong\n");
    }
}