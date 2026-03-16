#include<iostream>
using namespace std;

class Student{
private:
string name;
  int age,roll_number;
  string grade;

  //function Getter and Setter
  public:
  void setname(string s){
    name=s;
  }
  void setage(int a){
    age=a;
  }
  void setroll_number(int r){
    roll_number=r;
  }

  void setgrade(string s){
    grade=s;
  }


  //getter function 
  void getname(){
    cout<<name<<endl;
  }
void getage(){
    cout<<age<<endl;
  }

  int  getroll_number(){
    return roll_number;
  }//niche wala bhi ho sakta hai aaise bhi getter function call karte hai
  // void getroll_number(){
  //   cout<<roll_number<<endl;
  // }

  void getgrade(){
    cout<<grade<<endl;
  }



};
int main(){
 Student S1;
 S1.setname("Rohit");
 S1.setage(10);
 S1.setroll_number(21);
 S1.setgrade("A+");

 S1.getname();
 S1.getage();
cout<<S1.getroll_number();// S1.getroll_number();
 S1.getgrade();
}