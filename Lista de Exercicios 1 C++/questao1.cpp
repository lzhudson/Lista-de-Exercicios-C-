#include <stdio.h>

int main(){
    int num, i;

    for(i = 1; i <= 5; i++){
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num % 2 == 0){
            printf("O numero %d eh par.\n", num);
        }else{
            printf("O numero %d eh impar.\n", num);
        }
    }
}
