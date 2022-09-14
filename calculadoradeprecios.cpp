#include <iostream>
using namespace std;
#include <iostream>

using namespace std;
int main()
{
 int totalpanes;
 cout<<"cuentas los panes\n";
 cout<<"ingrese el total de panes\n";
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
    
  } while (cantidad <=5);
  cout << "total a pagar " << suma;

}
