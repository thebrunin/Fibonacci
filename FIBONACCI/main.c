#include <stdio.h>
#include <stdlib.h>
void fibonacci();

int main()
{
    printf("SEQUENCIA DE FIBONACCI, 100 POSICOES:\n");
    fibonacci();
    return 0;
}
void fibonacci()
{
    double i=0, j=1, x=0;
    double vet[100];
    vet[0]=0;
    vet[1]=1;
    for(int y=0;y<100;y++){
        if(y<2){
            vet[y]=y;
        }else{
            vet[y]=vet[y-1]+vet[y-2];
        }
        printf("%0.lf, ", vet[y]);
    }
}
