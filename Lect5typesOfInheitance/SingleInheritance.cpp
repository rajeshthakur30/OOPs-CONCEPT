// #include<iostream>
// using namespace std;

// class Human{//phelai ye call hoga phor student as we already see in constructor
//   protected :
//   string name;
//   int age;

//   public:

//   void work(){
//     cout<<"I am working\n";
//   }
// };

// //inherit yaha ho raha hai
// class Student:public Human
// {
//   int roll_number,fees;

//   public:
//   Student(string name,int age ,int roll_number,int fees){
//     this->name=name;
//     this->age=age;
//     this->roll_number=roll_number;
//     this->fees=fees;
//   }
// };

// int main(){
//   Student A1("Rohit",26,32,99);
//   A1.work();
  
// }

#include<iostream>
using namespace std;

class Human{//phelai ye call hoga phor student as we already see in constructor
  protected :
  string name;
  int age;

  public:
Human(string name,int age){
this->name=name;
this->age=age;
}
void display(){
  cout<<name<<" "<<age<<" \n";
}
  void work(){
    cout<<"I am working\n";
  }
};

//inherit yaha ho raha hai
class Student:public Human
{
  int roll_number,fees;

  public:
  Student(string name,int age ,int roll_number,int fees):Human(name,age){//student ke pass call aayega but wo dekhega ki Human ko call ja rha hai toh phelai uska call jayega 


   // this->name=name;//ye likhhne ki jarurat nhu hai
    //this->age=age;//ye likhhne ki jarurat nhu hai
    this->roll_number=roll_number;
    this->fees=fees;
  }
  void display(){
    cout<<name<<" "<<age<<" "<<roll_number<<" "<<fees<<endl;
  }
};

int main(){
  Student A1("Rohit",26,32,99);
  A1.display();
  
}





// chat gpt
class A {
public:
    void show() { cout << "Class A"; }
};

class B : public A {
};