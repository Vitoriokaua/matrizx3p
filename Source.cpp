#include <iostream>

using namespace std;

/*Crie e leia uma matriz dinâmica de inteiros cuja quantidade de linhas e colunas é informada pelo 
usuário, em seguida faça uma função que verifica e retorna 
o index do maior elemento da matriz e outra para o menor, imprima a posição e o valor encontrado no menu. */



int** criarmatriz(int l, int c) {
	int** m = new int* [l];
	for (int i = 0; i < l; i++)
	{
		m [i]= new int[c];
	}

	return m;
}


void ler_matriz(int** m, int l, int c) {
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "informe os elementos da posicao [" << i << "][" << j << "]: ";
			cin >> m[i][j];
		}
	}



}

int indiceMenorElemento(int** matriz, int linhas, int colunas) {
	
	int indiceMenori = 0;

	for (int i = 0; i < linhas; ++i)
	{
		for (int j = 0; j < colunas; ++j)
		{
			if (matriz[i][j] < indiceMenori)
			{
				indiceMenori= matriz[i][j];
				
			}
		}
	}

	return  indiceMenori;
}


int indiceMaiorElemento(int** matriz, int linhas, int colunas) {
	int indiceMaiorI [0][0];
	

	for (int i = 0; i < linhas; ++i)
	{
		for (int j = 0; j < colunas; ++j)
		{
			if (matriz[i][j]> indiceMaiorI)
			{
				indiceMaiorI = matriz[i][j];
			
			}
		}
	}

	return indiceMaiorI;
}


int main() {
	int linhas, colunas;
	cout << "Digite o número de linhas da matriz: ";
	cin >> linhas;
	cout << "Digite o número de colunas da matriz: ";
	cin >> colunas;

	int** matriz = criarmatriz(linhas, colunas);
	ler_matriz(matriz, linhas, colunas);

	indiceMenorElemento(matriz, linhas, colunas);
	indiceMaiorElemento(matriz, linhas, colunas);


	return 0;
}