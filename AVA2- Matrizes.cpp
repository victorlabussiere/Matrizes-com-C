// Aluno: Victor Gomes Souza de Labussiere
// Matricula: 20222305890
#include <stdio.h>

int main()
{
	int linha, coluna, matriz[3][3];

	printf("Programa - Matriz\n");
	printf("\nAs posicoes dos elementos se organiza da seguinte forma: [linha][coluna]\n");
	printf("Insira abaixo um valor para a posicao indicada:\n\n");

	int posicao = 1;

	for (linha = 0; linha < 3; linha++)
		for (coluna = 0; coluna < 3; coluna++)
		{
			printf("%do Numero => ", posicao++);
			scanf("%d", &matriz[linha][coluna]);
		};

	printf("\n---> Matriz 3x3:\n");

	for (linha = 0; linha < 3; linha++)
	{
		for (coluna = 0; coluna < 3; coluna++)
			printf("- %d  ", matriz[linha][coluna], "\n");
		printf("\n");
	};

	for (linha = 0; linha < 3; linha++)
	{
		for (coluna = 0; coluna < 3; coluna++)
			matriz[linha][coluna] = matriz[linha][coluna] * 5;
	};

	printf("\n---> Valores multiplicados por 5\n\n");

	for (linha = 0; linha < 3; linha++)
	{
		for (coluna = 0; coluna < 3; coluna++)
			printf("- %d  ", matriz[linha][coluna]);
		printf("\n");
	};

	return 0;
};
