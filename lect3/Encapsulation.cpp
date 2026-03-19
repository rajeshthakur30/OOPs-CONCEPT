#include<iostream>
using namespace std;

class Customer {
string name;
int account_number ,balance,age;


public:
Customer(string name,int account_number,int balance,int age)
{
  this->name=name;
  this->account_number=account_number;
  this->balance=balance;
  this->age=age;
}


void deposit(int amount){
if(amount>0){
  balance+=amount;
 }
 else{
  cout<<"Invalid amount"<<endl;
 }
}

void updateage(int age){
  if(age>0 && age<100){
    this->age=age;
  }
  else{
    cout<<"Invalid age\n";
  }
}


void withdraw(int amount){
  if(amount<=balance && balance>0){
    balance-=amount;
     
  }
}

void display(){
  cout<<name<<" "<<account_number<<" "<<balance<<" "<<age<<" "<<endl;
}

};

int main(){
  Customer A1("Rohit",1,1000,3);
  Customer A2("Mohit",2,1010,4);
  Customer A3("Mohan",3,2000,8);
  A1.updateage(24);
A1.deposit(-10);//agr hm acces part ko public chor de  and kuch galat value dal dete hai  toh use data kharab ho jayega issiliye hm data ko hide karte hai direct access nhi karte hai
A1.display();
A2.withdraw(500);

return 0;
}
