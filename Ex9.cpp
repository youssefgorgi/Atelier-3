

#include <iostream>

using namespace std;

class Test {
public :
    static int counter;
   void call(){
  cout<< "la fonction call est utiliser "<<++counter<<" fois"<<endl; }; };


int Test ::counter=0;

int main(){
	Test a;
	a.call();
	a.call();
	a.call();
	a.call();
	a.call();
	return 0;
}

 
