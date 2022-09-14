#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;


int main()
{
 int totalpanes;
 cout<<"cuentas los panes\n";
 cout<<"ingrese el total de panes\n";
 cin>>totalpanes;
  int precio,suma=0,cantidad=0;
  do
  {
    cout <<"ingres el precio \n";
    cin>>precio;
    if (precio>0)
    {
        suma=suma+precio;
        cantidad++;
    }
    
  } while (cantidad =totalpanes);
   int numero;
    srand(time(NULL));
  for (int i = 0; i < 20; i++)
  {
    numero= 1 + rand()%50;
    cout<< numero;
  }
  cout << "total a pagar " << suma;

}


