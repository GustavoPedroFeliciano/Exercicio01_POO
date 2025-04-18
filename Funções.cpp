#include <iostream>
using namespace std;

typedef struct{
    double** m;
    int nLinhas;
    int nColunas;
}Matriz;


//Função Inicializar Matriz
void inicializaMatriz(Matriz &X, int ls, int cs, const double elem)
{
  X.nLinhas = ls;
  X.nColunas = cs;
  X.m = new double*(X.nLinhas);

  for(int j=0; j<X.nLinhas; j++)
  {
    X.m[i] = new double(X.nColunas);
    for(int i=0; i<X.nColunas; i++)
    {
      X.m[j][i] = elem;
    }

  }
}

//Função Liberar Memória
void apagaMatriz(Matriz &X)
{
  for(int j=0; j<X.nLinhas; j++)
  {
    for(int i=0; i<X.nColunas; i++)
    {
       delete X.m[j][i];
    }
  }

    delete X.m;
}

//Função Matriz Transposta
Matriz transposta(Matriz &X)
{
  Matriz Transposta;
  for(int j=0; j<X.nLinhas; j++)  
  {
    for(int i=0; i<X.nColunas; i++)
    {
       Transposta.m[i][j]=X.m[j][i];
    }
  }
  return Transposta;
}

//Função Matriz X Constante
Matriz multiplica_por_cte(Matriz &X, double k)
{
  Matriz kX;
  for(int j=0; j<X.nLinhas; j++)  
  {
    for(int i=0; i<X.nColunas; i++)
    {
       kX.[j][i] = X.m[j][i] * k;
    }
  }
  return kX;
}

//Função Imprime Matriz
void imprimeMatriz(Matriz &X)
{
  for(int j=0; j<X.nLinhas; j++)  
  {
    for(int i=0; i<X.nColunas; i++)
    {
       cout << X.m[j][i] << " ";
    }
    cout << endl;
}

