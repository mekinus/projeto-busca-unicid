#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h> 

/*
 * ALUNOS:LEONARDO COUTO, CLARICE BRAGA, YASMIN ZORZAN
 */


void Busca(int tamanho,int elementoProcurado,int posicao,bool testarForaDaLista,bool buscaComDelay)

 { 
 
 
    time_t tempoBruto;
    struct tm * timeinfo;
    time(&tempoBruto);
    timeinfo = localtime(&tempoBruto);
 
    printf ( "Hora local do inicio da rotina de busca: %s", asctime (timeinfo) );
 
    clock_t inicio,fim,tempoTotal;
    
    bool testar = testarForaDaLista;

	int numberOfTimes= 0;
	int myArray[tamanho]; 
	int j = 1;
	int i = 0;
	
	
	for(i ; i <= tamanho; i++)
	
		{
			myArray[i] = 100; 
		}
		
		if(testar== false) 
		
		{
		
		myArray[posicao] = elementoProcurado;
		
		}
		
		
		
		
	  inicio= clock();
	  printf("Iniciando a rotina.,tempo inicial    = %ld\n", inicio);
	
	
	  for(j; j <= tamanho ; j++) 
	
	    {
	    	
	    	if(buscaComDelay)   
			{
				sleep(1);
			}
		
		if(myArray[j] != elementoProcurado) 
		
		{
			numberOfTimes = j;
			
		}
		
		else 	
		
		{
			
			fim = clock();
			numberOfTimes = j;
			
			printf("\nTempo de execucao dessa rotina =  %fsecs.\n",tempoTotal );
			printf("Quantidade de buscas realizadas = %d\n", numberOfTimes);
			printf(" O elemento foi encontrado, o elemento  = %d\n", elementoProcurado);	
			printf ( "Hora local do final da rotina de busca: %s", asctime (timeinfo) );
		
		
			
			return;
			
		}
	
		
	}
	
	        fim = clock();
	        tempoTotal = (double) (fim - inicio) / CLOCKS_PER_SEC; 
	
	        printf("\nTempo de execucao dessa rotina =  %fsecs.\n",tempoTotal );
		    printf("Quantidade de buscas realizadas = %d\n", numberOfTimes);
			printf("O elemento nao foi encontrado\n");
			printf ( "Hora local do final da rotina de busca: %s", asctime (timeinfo) );
			return;
	
	
	
	
 }
 
 

int main(int argc, char *argv[]) {
	

printf("--------------------*ELEMENTO NA SEGUNDA POSIÇÃO (LISTA #01 SEM DELAY)***---------------------\n");

	Busca(11,50,2,false,false);
	
    printf("--------------------****ELEMENTO NA POSIÇÃO MEDIANA(6) (LISTA #01 SEM DELAY)---------------------\n");

	Busca(11,50,6,false,false);
	
		printf("--------------------****ELEMENTO SEM POSIÇÃO (ELEMENTO NÃO ENCONTRADO)(LISTA #01 SEM DELAY)--------------------\n");
		
	Busca(11,50,11,true,false);
	
	printf("--------------------****---------------------\n");
	
    printf("--------------------*ELEMENTO NA SEGUNDA POSIÇÃO (LISTA #01 COM DELAY)***---------------------\n");

	Busca(11,50,2,false,true);
	
printf("--------------------****ELEMENTO NA POSIÇÃO MEDIANA(6) (LISTA #01 COM DELAY)---------------------\n");

	Busca(11,50,6,false,true);
	
		printf("--------------------****ELEMENTO SEM POSIÇÃO (ELEMENTO NÃO ENCONTRADO)(LISTA #01 COM DELAY)--------------------\n");
		
	Busca(11,50,11,true,true);
	
	printf("--------------------****---------------------\n");
	

	
	printf("--------------------*ELEMENTO NA SEGUNDA POSIÇÃO (LISTA#02 SEM DELAY)***---------------------\n");

	Busca(21,50,2,false,false);
	
    printf("--------------------****ELEMENTO NA POSIÇÃO MEDIANA(6) (LISTA#02 SEM DELAY)---------------------\n");

	Busca(21,50,11,false,false);
	
		printf("--------------------****ELEMENTO SEM POSIÇÃO (ELEMENTO NÃO ENCONTRADO)(LISTA#02 SEM DELAY)--------------------\n");
		
	Busca(21,50,21,true,false);
	
	printf("--------------------****---------------------\n");
	
    printf("--------------------*ELEMENTO NA SEGUNDA POSIÇÃO (LISTA #02 COM DELAY)***---------------------\n");

	Busca(21,50,2,false,true);
	
    printf("--------------------****ELEMENTO NA POSIÇÃO MEDIANA(6) (LISTA #02 COM DELAY)---------------------\n");

	Busca(21,50,11,false,true);
	
		printf("--------------------****ELEMENTO SEM POSIÇÃO (ELEMENTO NÃO ENCONTRADO)(LISTA #02 COM DELAY)--------------------\n");
		
	Busca(21,50,21,true,true);
	
	printf("--------------------****---------------------\n");
	

	printf("--------------------*ELEMENTO NA SEGUNDA POSIÇÃO (LISTA#03 SEM DELAY)***---------------------\n");

	Busca(42,50,2,false,false);
	
    printf("--------------------****ELEMENTO NA POSIÇÃO MEDIANA(6) (LISTA#03 SEM DELAY)---------------------\n");

	Busca(42,50,21,false,false);
	
	printf("--------------------****ELEMENTO SEM POSIÇÃO (ELEMENTO NÃO ENCONTRADO)(LISTA#03 SEM DELAY)--------------------\n");
		
	Busca(42,50,42,true,false);
	
	printf("--------------------****---------------------\n");
	
    printf("--------------------*ELEMENTO NA SEGUNDA POSIÇÃO (LISTA #03 COM DELAY)***---------------------\n");

	Busca(42,50,2,false,true);
	
    printf("--------------------****ELEMENTO NA POSIÇÃO MEDIANA(6) (LISTA #03 COM DELAY)---------------------\n");

	Busca(42,50,21,false,true);
	
		printf("--------------------****ELEMENTO SEM POSIÇÃO (ELEMENTO NÃO ENCONTRADO)(LISTA #03 COM DELAY)--------------------\n");
		
	Busca(42,50,42,true,true);
	
	printf("--------------------****---------------------\n");
	return 0;
}



	
	




	
	

