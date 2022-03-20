#include "head.h"

int main(){

    int i, j;

    scanf("%s", &metodesort);

    scanf("%d", &n);
    data input1[n];
    for(i=0; i<n; i++){
        input1[i].konsonan=0;
        scanf("%s", &input1[i].string);
        for(j=0; j<strlen(input1[i].string); j++){
            if(input1[i].string[j]!='a' && input1[i].string[j]!='i' && 
            input1[i].string[j]!='u'&& input1[i].string[j]!='e' && input1[i].string[j]!='o'){
                input1[i].konsonan++;
            }
        }
    }

    scanf("%d", &m);
    data input2[m];
    for(i=0; i<m; i++){
        input2[i].konsonan=0;
        scanf("%s", &input2[i].string);
        for(j=0; j<strlen(input2[i].string); j++){
            if(input2[i].string[j]!='a' && input2[i].string[j]!='i' && 
            input2[i].string[j]!='u'&& input2[i].string[j]!='e' && input2[i].string[j]!='o'){
                input2[i].konsonan++;
            }
        }
    }

    scanf("%d", &p);
    data input3[p];
    for(i=0; i<p; i++){
        input3[i].konsonan=0;
        scanf("%s", &input3[i].string);
        for(j=0; j<strlen(input3[i].string); j++){
            if(input3[i].string[j]!='a' && input3[i].string[j]!='i' && 
            input3[i].string[j]!='u'&& input3[i].string[j]!='e' && input3[i].string[j]!='o'){
                input3[i].konsonan++;
            }
        }
    }

    if(strcmp(metodesort, "bubblesort")==0){
        bubblesort(input1, n);
        bubblesort(input2, m);
        bubblesort(input3, p);
    }


    //for(i=0; i<n; i++){
    //    printf("%s %d\n", input1[i].string, input1[i].konsonan);
    //}
    //for(i=0; i<m; i++){
    //    printf("%s %d\n", input2[i].string, input2[i].konsonan);
    //}
    //for(i=0; i<p; i++){
    //    printf("%s %d\n", input3[i].string, input3[i].konsonan);
    //}

    data inputmerged1[n+m];
    data inputmerged2[n+m+p];
    merging(n, m, input1, input2, inputmerged1);
    merging(n+m, p, inputmerged1, input3, inputmerged2);

    printf("\n\nHASIL\n");
    for(i=0; i<n+m+p; i++){
        printf("%s %d\n", inputmerged2[i].string, inputmerged2[i].konsonan);
    }
    

    return 0;

}