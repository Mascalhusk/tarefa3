/*
matriz original

1	2	0	3	|	4

2	1	-1	1	|	1

3	-1	-1	2	|	1

-1	2	3	-4	|	4

*/



#include<stdio.h>

int main()
{	
	//contadores
	int i, j;
	int lin, col;
	
	printf("\nInforme o número de Linhas da Matriz:\n");
	scanf("%d", &lin);
	printf("\nInforme o número de Colunas da Matriz:\n");
	scanf("%d", &col);

	float mat[lin][col];

	//lendo a matriz	
	for (i=0;i<lin; i++ )
   	{	
		for ( j=0; j<col; j++ )
    		{
			printf("Informe os valores da posição [%d][%d]: ", i, j);
			scanf("%f", &mat[i][j]);
		}	
	}
	
	//escrevendo a matriz
	  
	for (i=0;i<lin; i++ )
   	{	 for ( j=0; j<col; j++ )
    		{
       			printf ("%.1f \t", mat[ i ][ j ]);
    		}
		printf("\n\n");	
 	}

}


