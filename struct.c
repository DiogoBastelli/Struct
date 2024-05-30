#include <stdio.h>

struct Numero{
    float x;
    float y;
};

int main(){
    float n1 , n2;

    struct Numero soma;
        
    //printf("insira o primeiro valor");
    //scanf("%f" , &n1);

   // printf("insira o segundo valor");
    //scanf("%f" , &n2);

    soma.x = 5.0;
    soma.y = 10.0;
    printf("soma e de %2.f" , soma.x + soma.y );


    return 0;
}