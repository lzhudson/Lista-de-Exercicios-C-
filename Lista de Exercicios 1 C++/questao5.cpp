#include <stdio.h>
int main(){
    int num,contnum,somanum,medianum;
    contnum = 0;
    somanum = 0;
    medianum = 0;
    num = 0;
    while(num>=0){
        printf("\nDigite um numero: ");
        scanf("%d",&num);
        if(num<0){
            printf("\nA quantidade de numeros positivos digitados é de: %d",contnum);
            printf("\nA soma dos numeros positivos é de: %d",somanum);
            printf("\nA media dos numeros digitados é de: %d",medianum);
        }else{
        somanum = somanum + num;
        contnum++;
        medianum = somanum/contnum;

    }
    }
}
