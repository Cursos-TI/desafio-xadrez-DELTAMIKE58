#include <stdio.h>

int main() {
 
for( int torre = 0; torre < 5; torre++)
{
    
    printf("frente\n");
}

int bispo = 1;
while(bispo <= 5)
{
    printf("frente direita\n" );
   bispo++;
}


int rainha = 1;
   
    do {
    printf("esquerda\n", rainha);
        rainha++;
     } while (rainha <= 8);
   


    int cavalo = 1 ;
    while (cavalo--)
    {  
        for (int i = 0; i < 2 ; i++){  
             printf("cima\n");
         }
             printf("direita\n");

    }







    return 0;
}
