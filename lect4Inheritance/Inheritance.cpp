#include<iostream>
using namespace std;

class Human
{
  private:
  int a;
  protected:
  int b;
  public:
  int c;

  //kya hm esko class ke under access kar sakta hu(within class hm kisi ko access kar sakta hu private,public,protected sabko)
  void fun (){
    a=10;
    b=20;
    c=30;

  }
};

int main(){
  Human Rohit;
  //Rohit.a=10;gives error
  //Rohit.b=10;gives error
  Rohit.c=10;//give correct output

}