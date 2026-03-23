#include<iostream>
using namespace std;

//total_customer=0;
//A1:name acc bal total
//A2:name acc balace total




class Customer {
string name;
int account_number ,balance;

//They are attributes of class or class member
//static int total_customer;

public:
static int total_customer;
Customer(string name,int account_number,int balance)
{
  this->name=name;
  this->account_number=account_number;
  this->balance=balance;
  total_customer++;
}

void display(){
  cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;
}

//agar toatal customer print karbana ho toh
void display_total(){
  cout<<total_customer<<endl;
}


};

int Customer::total_customer=0;
int main(){
  
  Customer A1("Rohit",1,1000);
  Customer A2("Mohit",2,1010);
  //  A1.display();
  //  A2.display();
  Customer A3("Mohan",3,2000);
  // A3.display();

  // ye used kiye hai pura ka total karne ke liye
  //A2.display_total();

  //static wale ko jab hm public me daal denge 
  Customer::total_customer=5;
  A1.display_total();
}
