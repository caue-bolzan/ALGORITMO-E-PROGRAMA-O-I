//o codigo 3 nao esta comentado, foi o ultimo que eu fiz, ent nao tem o pq comentar...
//Vendo sobre vetores
#include <stdio.h>
int main (){
/*
   ==========================
           Código 1
   ==========================
    int vetor[5];
    float media;

    vetor [0] = 10;
    vetor [1] = 20;
    vetor [2] = 30;

    media = ((vetor[0] + vetor[1] + vetor[2]) / 3 );
    
    printf("Essa é a media %2.f", media);
  
   ==========================
           Código 2
   ==========================
   int vetor[5] = {10, 20, 30};
   int i;
   float media;

   for (i=0; i<3; i++){
        media += vetor[i];
   }
   
   printf ("%2.f", media/3);


   ==========================
           Código 3
   ==========================
*/

    int v[3];
    int i;
   
    float media;

    for (i=0; i<3; i++){
        printf("Digite um numero pra media: \n");
        scanf("%d", &v[i]);
    }
    
    for (i=0; i<3; i++){
        media += v[i];
    }
    
    for (i=0; i<3; i++){
        printf("%d, ", v[i]);
    }
    printf("Aqui a sua media: %2.f\n", media/3);

    return 0;
}

