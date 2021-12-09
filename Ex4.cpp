#include <iostream>
using namespace std;
class Mere{     // base class declaration.
public:
  void display ()
  {
    cout << "La méthode display de la classe Mere est exécutée\n";
  }
};
class Nfille : public    // derived class declaration.
Mere{
public:
  void display ()
  {
    cout << "La méthode display de la classe Nfille est exécutée\n";
  }
};
int main ()
{
  Nfille a;
  a.display();
  return 0;
}