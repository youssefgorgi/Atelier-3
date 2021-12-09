#include <iostream>

using namespace std;
class animal{
    protected:
    int age;
    string nom;
    public:
    //la constructeur pour initialiser les variable de notre classe
    animal(int,string);
    void set_value(){
        cout<<"l'age est : "<<age<<endl;
        cout<<"le nom est : "<<nom<<endl;
    }
};
//la définition de notre constructeur
animal::animal(int a, string b){
    age=a;
    nom=b;
}
class zebra : public animal{
    string origine;
    public:
    zebra(int , string , string);
     void set_value(){
        animal::set_value(); // Calling the set_value() function of class animal.
        cout<<"le lieu d'origine : "<<origine;
    }
};
zebra::zebra(int a, string b , string c) : animal(a,b){
    origine=c;
}
class Dolphin : public animal{
    string origine;
    public:
    Dolphin(int , string , string);
     void set_value(){
        animal::set_value();
        cout<<"le lieu d'origine : "<<origine;
    }
};
Dolphin::Dolphin(int a, string b , string d) : animal(a,b){
    origine=d;
}

int main()
{
    cout<<"Zebra:"<<endl;
    zebra K(4,"zizo","kenitra");
    K.set_value();
    cout<<endl;
    cout<<"Dolphin:"<<endl;
    Dolphin F(8,"mimo","casa");
    F.set_value();

    return 0;
}