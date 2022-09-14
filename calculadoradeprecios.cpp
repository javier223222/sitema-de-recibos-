#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;


int main()
{
 int totalpanes;
 int precio,suma=0,cantidad=0;
 cout<<"cuentas los panes\n";
 cout<<"ingrese el total de panes\n";
 cin>>totalpanes;
 while (totalpanes<=0)
 {
    cout<<"no se pueden introducir numeros negativos intentalo de nuevo \n";
    cout<<"cuentas los panes\n";
   cout<<"ingrese el total de panes\n";
   cin>>totalpanes;
 }
 
 
  do
  {
    
   
    if (precio>0)
    {
        suma=suma+precio;
        cantidad++;
    }
    
  } while (cantidad <totalpanes);
   int numero;
    srand(time(NULL));
  for (int i = 0; i < 20; i++)
  {
    numero= 1 + rand()%50;
    
  }
  cout<<"panaderia la profe"<<endl ;
  cout <<"numero de folio"<<numero<<endl;
  cout << "total $ " << suma<<endl;
  cout<<"total de piezas "<<totalpanes;
 
}


