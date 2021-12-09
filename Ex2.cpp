#include <iostream>
using namespace std;
class Shape  // declaration du class
{
protected:
  float a, b;
public:
  Shape(float x, float y)
  {
    a = x;
    b = y;
  }
};
class Rectangle: public Shape
{
public:
  Rectangle(float x, float y) : Shape(x, y) {}
  float area()
  {
    return (a * b);
  }
};
class Triangle: public Shape
{
public:
  Triangle(float x, float y) : Shape(x, y) {}
  float area()
  {
    return (a * b / 2);
  }
};
int main (){
  Rectangle rectangle(3,4);
  Triangle triangle(3,4);
  cout << rectangle.area() << endl;   //12
  cout << triangle.area() << endl;    //6
  return 0;
}