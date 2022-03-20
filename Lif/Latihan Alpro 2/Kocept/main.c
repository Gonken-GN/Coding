#include "header.h"

void main(){
    int i, j, nCase, nStep, step[100], pos[100][100], res[100][100];
    char dir[100][100];
    scanf("%d", &nCase);
    for(i = 0; i < nCase; i++){
        scanf("%d %d", &pos[i][0], &pos[i][1]);
        scanf("%d", &nStep);
        for(j = 0; j < nStep; j++){
            scanf("%s %d", dir[j], &step[j]);
        }
        langkah(i, pos, nStep, dir, step, res);
    }
}