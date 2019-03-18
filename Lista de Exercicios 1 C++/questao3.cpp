    #include <stdio.h>
    int main(){
        int n,m3,ntotal;
        n = 0;
        m3 = 0;
        ntotal = 0;
        while(n>=0){
            printf("\n Digite um numero: ");
            scanf("%d",&n);

            if(n<0){
                printf("\nA quantidade de numeros positivos digitados e de %d",ntotal);
                printf("\nA quantidade de numeros multiplos 3 digitados  e de %d",m3);
            }
            else{
                ntotal++;
                if(n % 3 == 0){
                        printf("O numero %d  eh multiplo de 3\n", n);
                m3++;
            }
            else{
                    printf("O numero %d nao eh multiplo de 3\n", n);
                }
            }
        }
    }
