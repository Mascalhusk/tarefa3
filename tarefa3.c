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
	printf ("\nA matriz fornecida é:\n");
	for (i=0; i<lin; i++ )
   	{	 for ( j=0; j<col; j++ )
    		{
       			printf ("%.1f \t", mat[ i ][ j ]);
    		}
		printf("\n\n");	
 	}

	//zerando segunda linha
	printf("Zerando a segunda linha:\n");
	for (i=0; i<col; i++)
	{
		mat[1][0] = mat[1][0] - (mat[1][0]/mat[0][0])*mat[0][1];

	}

	//Rescrevendo a matriz
	printf ("Reescrevendo a Matriz:\n");
	for (i=0; i<lin; i++)
   	{	 for ( j=0; j<col; j++ )
    		{
       			printf ("%.1f \t", mat[ i ][ j ]);
    		}
		printf("\n\n");	
 	}


	//zerando terceira linha
	printf("Zerando a segunda e terceira linha:\n");
	for (i=0; i<col; i++)
	{
		mat[2][0] = mat[2][0] - (mat[2][0]/mat[0][0])*mat[0][1];
		mat[3][0] = mat[3][0] - (mat[3][0]/mat[0][0])*mat[0][1];

	}
	
	//Rescrevendo a matriz
	printf ("Reescrevendo a Matriz:\n");
	for (i=0; i<lin; i++)
   	{	 for ( j=0; j<col; j++ )
    		{
       			printf ("%.1f \t", mat[ i ][ j ]);
    		}
		printf("\n\n");	
 	}

}




