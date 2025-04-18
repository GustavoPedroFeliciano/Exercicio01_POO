#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

int main()
{
  vector<int> a, b;
  int aux;
  int cont = 0;
  int valor;
  int j;
  
  cout << "Insira os valores" << endl;
  while (valor >= 0)
  {
    cin >> valor;
    a.push_back(valor);
  }
  aux = a[0];
  j = 0;
  while(j < a.size())
  {
    while (a[j] == aux)
    {
      cont++;
      j++;
    }
    b.push_back(cont);
    b.push_back(aux);
    cont = 0;
    aux = a[j];
  }
  for(int i=0; i<b.size()-2; i++)
  {
    cout << b[i] << " "; 
  }

}