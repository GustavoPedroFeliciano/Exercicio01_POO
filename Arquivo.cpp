#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main ()
{
  int nspaces = 0;
  string l;
  string arquivo;
  cout << "Qual o nome do arquivo?" << endl;
  cin >> arquivo;
  ifstream arq(arquivo);
  while(getline(arq, l))
  {
    for (int j = 0; j < l.size(); j++)
    {
      if(l[j] == ' ')
      {
        nspaces++;
      }
    }
  }
cout << nspaces << endl;

}