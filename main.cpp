
/***
  
Main implementada para remover 
números negativos de uma lista sem 
modificar a posição dos demais 
números não negativos

***/


#include <iostream>
#include "Queue.cpp"
using namespace std;

const int MAX = 10;

int main() {
    Queue fila(MAX);

for (int i = 1; i <=9; i++)
{
  if (i%2==0)
  {
    int n = i * -1;
    fila.push_back(n);
  }
  else
  {
    fila.push_back(i);
  }
  
}// enfileirando, definiu-se que se o número:
 // for par, multiplica por -1 e adiciona;
 // se for impar apenas adiciona;
 // assim terei numeros negativos e positivos nas lista;

   while (!fila.empty())
   {
     if (fila.front() < 0)
     {
      fila.pop_front();
     }
     else
     {
      cout << fila.front();
      fila.pop_front();
     }
     
   }
}