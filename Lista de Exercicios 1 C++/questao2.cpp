#include <stdio.h>
int main(){
    int n,i;
    n = 0;
    while(n>=0){
        printf("\nDigite um numero: ");
        scanf("%d",&n);
        if(n>=0){
        if(n%2 == 0){
            printf("\nO n�mero %d e par",n);
        }
        else{
            printf("\nO n�mero %d e impar",n);
        }
        }
        else{
            printf("\n Progama encerrado");
        }
        }
    }

