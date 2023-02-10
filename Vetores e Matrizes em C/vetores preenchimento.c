#include <stdio.h>

int main()
{
  int vetor [5]; // Declara um vetor de 5 posições.
  int i=0;
  int vetor2 [4];
  int c=0;
   
   for (i=0; i<5; i++)
    {
        vetor[i] = 30;
        printf("Preenchendo vetor %d: %d\n",i, vetor[i]);
       
    }
    
    printf("*************************\n");
    
  //----------------------------------------------------------- //
  
    for (c=0; c<4; c++)
        {
          vetor2[c] = c+1;
          printf("Preenchendo vetor  %d: %d\n",c, vetor2[c]);
       
        }
     printf("\n*************************");
    
    
    
    
}
