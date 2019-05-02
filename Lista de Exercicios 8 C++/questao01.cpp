#include <stdio.h>
int main(){
    int m[2][2], i,j,d;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Preencha o vetor na posicao [%d] de [%d]: ", i,j);
            scanf("%d", &m[i][j]);
        }

    }
    printf("\n");
    d = m[0][0] * m[1][1] - m[0][1] * m[1][0];
    printf("A determinante dessa matriz e: %d",d);


}
