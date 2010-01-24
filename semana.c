#include  <stdio.h>
#include <string.h>

main()
{
	char semana[7][8]; // Array com os dias da semana
	
	int sem;	// inteiro com o dia da semana
	int mes;	// inteiro com o dia do mes
	int dia;	// inteiro com o dia a ser descoberto
	
	sem = dia = mes = -1; //Inicializando para poder entrar no looping

	// Inicializar os dias da semana
	strcpy( semana[0], "Domingo");
	strcpy(	semana[1], "Segunda");
	strcpy(	semana[2], "Terça");
	strcpy(	semana[3], "Quarta");
	strcpy(	semana[4], "Quinta");
	strcpy(	semana[5], "Sexta");
	strcpy(	semana[6], "Sábado");

	printf("\n\tVersão 0.2\n");


	// looping até pegar o valor certo
	while ( (sem > 7) || (sem < 1) )
	{
		printf("\nDigite um dia da semana: ");
		printf("\n 1- Domingo");
		printf("\n 2- Segunda");
		printf("\n 3- Terça");
		printf("\n 4- Quarta");
		printf("\n 5- Quinta");
		printf("\n 6- Sexta");
		printf("\n 7- Sábado\n");
		scanf("%d", &sem);
		
		if ( (sem > 7) || (sem < 1) )
			printf("\nSemana inválida!\n");
	}
	
	// looping até pegar o valor certo
	while( (mes > 31) || (mes < 1) )
	{
		printf("\nDigite um dia do mês: ");
		scanf("%d", &mes);
		
		if ( (mes > 31) || (mes < 1) )
			printf("\nDia inválido!\n");
	}
	
	// looping até pegar o valor certo
	while( (dia > 31) || (dia < 1) )
	{
		printf("\nDigite qualquer dia do mês para saber o dia da semana: ");
		scanf("%d", &dia);

		if ( (dia > 31) || (dia < 1) )
			printf("\nDia inválido!\n");
	}
	
	// Como o vetor vai de 0 a 6 diminuiremos a var sem em 1
	sem--;
	
	if ( dia >= mes )
	{
		//Se o dia escolhido for maior contar p/ cima
		for(mes; mes <= dia; mes++)
		{
			if ( sem > 6 ) // se for maior que 6 é domingo da proxima semana
				sem=0;
			sem++;
		}
		// O looping dará um giro a mais
		sem--;
	}
	else
	{
		//Se o dia escolhido for maior contar p/ baixo
		for(mes; mes > dia; mes--)
		{
			if ( sem < 0 ) // se for maior que 6 é domingo da proxima semana
				sem=6;
			sem--;
		}
		// O looping dará um giro a mais
		sem++;
	}

	printf("\nDia da semana do dia %d é %s\n", dia, semana[sem]);
}
