/*http://www.orkut.com.br/Main#CommMsgs.aspx?cmm=34913&tid=5205167988119073536
 * Glauber
 * FAVOR MANDAREM SCRAPS PARA MIM...
 * Elabore um programa em linguagem C que leia (ou gere randomicamente) dois vetores de 10 elementos inteiros cada. Em seguida crie um terceiro vetor formado pelo conjunto união dos vetores lidos (ou gerados).
 *
 * Obs. O conjunto União é formado pela junção dos dois vetores lidos, porém, caso haja elementos repetidos nos vetores, este elemento só entra uma vez no conjunto união.
 *
 * Veja o exemplo:
 *
 * 0 1 2 3 4 5 6 7 8 9
 * A 5 2 10 6 7 3 11 9 15 8
 *
 * 0 1 2 3 4 5 6 7 8 9
 * B 14 3 21 5 17 1 6 15 4 25
 *
 * 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15...
 * C 5 2 10 6 7 3 11 9 15 8 14 21 17 1 4 ...
 * Os elementos em negritos pertencem a ambos os vetores (A e B) e, portanto, devem ser inseridos uma única vez no vetor C (vetor união de A com B).
 * Dica: Para programar este algoritmo, copie primeiramente todos os elementos do vetor A para C e, em seguida, insiram em C somente os elementos 
 * de B que não existem em A. 
 */
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

#define NEWNULL -65530


int main(void)
{
___int A[10], B[10], C[20], found, i, j, k;


___/* Garantindo que o vetor está nulo p/ testar 
___ * o final dele logo abaixo */
___for(i=0; i<20; i++)
______C[i] = NEWNULL;

___/* Preenchendo os vetores com valores
___ * aleatórios */
___for(i=0; i<10; i++)
___{
______A[i] = rand() % 100;
______B[i] = rand() % 100;
___}

___/* preenchendo C com A */
___for(k=0; k <10; k++)
______C[k] = A[k];

___/* Preenchendo C com numeros que nao existem
___ * em A */
___for(i=0; i<10; i++)
___{
______found = FALSE;
______for(j=0; j<20; j++)
______{
_________if ( (B[i] == C[j]) && (C[j] != NEWNULL) )
_________{
____________found=TRUE;
____________break;
_________}
______}
______if ( !found )
______{
_________C[k] = B[i];
_________k++;
______}
___}

___fprintf(stdout, "\nA: ");
___for(i=0; i < 10 ; i++)
______fprintf(stdout, "%d ", A[i]);

___fprintf(stdout, "\nB: ");
___for(i=0; i < 10 ; i++)
______fprintf(stdout, "%d ", B[i]);

___i=0;
___fprintf(stdout, "\nC: ");
___for(i=0; C[i] != NEWNULL ; i++)
______fprintf(stdout, "%d ", C[i]);
___fprintf(stdout, "\n\n");
}
