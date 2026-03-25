#include<iostream>
using namespace std;

class Area{
  public:

  int calculateArea(int r){//cicle area
    return 3.14*r*r;
  }

  int calculateArea(int l,int b){//rectangle
    return l*b;
  }
};

int main(){
Area A1,A2;
cout<<A1.calculateArea(4)<<endl;
cout<<A2.calculateArea(3,4)<<endl;
//cout<<A2.calculateArea("Rohit")<<endl;
}