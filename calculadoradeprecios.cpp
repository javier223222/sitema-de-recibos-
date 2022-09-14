#include <iostream>
using namespace std;
#include <cstdlib> 
#include <ctime>
using namespace std;
int main(){
     srand(time(NULL));
  for (int i = 0; i < 20; i++)
  {
    numero= 1 + rand()%50;
    cout<< numero;
  }
  
}