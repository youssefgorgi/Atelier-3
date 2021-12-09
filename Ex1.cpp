#include <iostream>
using namespace std;
class MyClass   {  // base class declaration.


public:
    MyClass(); 
    ~MyClass();
  	
};
 MyClass::MyClass(){   // Calling the MyClass() function of class MyClass.
 cout<<"le constucteur"<<endl; 
  } 
 MyClass::~MyClass(){
 	cout<<"le destucteur"<<endl;
  }
int main (){ 
     MyClass m;
  return 0;
}