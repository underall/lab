#include <stdio.h>
#include <string.h>
#define	SENHAMIN 6
#define	SENHAMAX 16
#define OCORRENCIA 3


/*Funcao para verificar se existe um*/
/*caracter em uma string*/
/*Retorna 1 caso encontre e 0(zero) caso contrario*/
int existechar(char c, char *s)
{
	int tam, i;
	tam = strlen(s);
	
	for(i=0; i < tam; i++)
	{
		if (s[i] == c)
			return 1; /* encontrou */
	}
	return 0; /* Nao encontrou */
}

/*	[4] não pode conter mais do que 3 (três) */
/*		caracteres idênticos aos da senha antiga na mesma posição.*/
int regra4(char *s1, char *s2)
{
	int tam1, tam2, i, ocorrencia;
	char *p1, *p2;

	tam1 = strlen(s1);
	tam2 = strlen(s2);
	ocorrencia=0;
	p1 = s1;
	p2 = s2;
	
	if( tam1 < tam2)
	{
		for(i=0; i < tam1; i++)
		{
/*			Contando as ocorrencias*/
/*			if (*p1 == *p2)*/
			if (s1[i] == s2[i])
				ocorrencia++;

			if (ocorrencia >= OCORRENCIA)
				return 0;

/*			p1++;p2++;*/
		} /* for */
	} /* if */
	else
	{
		for(i=0; i < tam2; i++)
		{
/*			Contando as ocorrencias*/
/*			if (*p1 == *p2)*/
			if (s1[i] == s2[i])
				ocorrencia++;

/*			Se o numero de ocorrencias for maior ou igual*/
/*			ao nao permitido, retornar invalido*/
			if (ocorrencia >= OCORRENCIA)
				return 0;

/*			p1++;p2++;*/
		} /* for */
	} /* if */
	
	return 1;
}

/*As regras para a nova senha ser válida são: */
/*	[1] mínimo de 6 caracteres; */
/*	[2] máximo de 16 caracteres; */
/*	[3] não pode conter espaço em branco; */
/*	[4] não pode conter mais do que 3 (três) */
/*		caracteres idênticos aos da senha antiga na mesma posição.*/
int senhaok(char *s1, char *s2)
{
	int tam1, tam2;
/*	tam1 = strlen(s1);*/
	tam2 = strlen(s2);


/*	Verificando tamanho máximo e mínimo.*/
/*	Não estando de acordo, retorna falso*/
	if ((tam > SENHAMAX) ||	(tam < SENHAMIN) )
		return 0; /* falso */

/*	Verificando se existe espaco ou tab na senha*/
	if (existechar(' ', s2) || existechar('\t', s2))
		return 0; /* falso */

/*	Verificando se existe caracteres identicos		*/
	if (!regra4(s1, s2))
		return 0;
}

void main(void)
{
	printf("Digite ");
}

