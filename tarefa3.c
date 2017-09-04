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
	float x1, x2, x3, x4;
	
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
		mat[1][i] = mat[1][i] - (mat[1][i]/mat[0][0])*mat[0][i];

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

	
	//zerando primeiro elemento da terceira e quarta linha
	printf("Zerando a segunda e terceira linha:\n");
	for (i=0; i<col; i++)
	{
		mat[2][i] = mat[2][i] - (mat[2][i]/mat[0][0])*mat[0][i];
		mat[3][i] = mat[3][i] - (mat[3][i]/mat[0][0])*mat[0][i];

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
		
	//zerando os segundos elementos da terceira e quarta linha
	printf("Zerando a segunda e terceira linha:\n");
	for (i=0; i<col; i++)
	{
		mat[2][i+1] = mat[2][i+1] + mat[1][i+1];
		mat[3][i+1] = mat[3][i+1] - 2.0*mat[1][i+1];

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

	//zerando os segundos elementos da terceira e quarta linha
	printf("Zerando o terceiro elemento da quarta linha:\n");
	for (i=0; i<col; i++)
	{
		mat[3][i+2] = mat[3][i+2] + 5.0*mat[1][i+1];
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

	//encontrando a solução
	
	x4 = mat[3][4]/mat[3][3];
	x3 = (mat[2][4] - x4*mat[2][3])/mat[2][2] ;
	x2 = (mat[1][4] - x4*mat[1][3] - x3*mat[1][2])/mat[1][2];
	x1 = (mat[0][4] - x4*mat[0][3] - x3*mat[0][2] - x2*mat[0][1])/mat[0][0];4

	printf("A solução será: \n x1 = %.2f; \n x2 = %.2f; \n x3 = %.2f ;\n x4 = %.2f ;\n", x1, x2, x3, x4);
	
}




