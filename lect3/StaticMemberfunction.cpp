#include<iostream>
using namespace std;

class Customer {
string name;
int account_number ,balance;
//esko private kar diya issiliye static member function ka kaam aaya 
static int total_customer;
static int total_balance;

public:
Customer(string name,int account_number,int balance)
{
  this->name=name;
  this->account_number=account_number;
  this->balance=balance;
  total_customer++;
  total_balance+=balance;
}

//data member function call here and ye jo static hai wo class ko belong kar raha hai ye name,balace and account nunber ko access nhi kar sakta haikyuki ye uska part nhi hai
static void accessStatic(){
  cout<<"Total number of customer  "<<total_customer<<endl;
  cout<<"Total number of balance "<<total_balance<<endl;
}

void deposit(int amount){
if(amount>0){
  balance+=amount;
  total_balance+=amount;
}
}

void withdraw(int amount){
  if(amount<=balance && balance>0){
    balance-=amount;
    total_balance-=amount;
     
  }
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
int Customer::total_balance=0;

int main(){
  Customer A1("Rohit",1,1000);
  Customer A2("Mohit",2,1010);
  Customer A3("Mohan",3,2000);
A1.deposit(800);
A2.withdraw(500);
  //static wale ko jab hm public me daal denge and jab esko private kar denge to ye access nhi kar payega issilye hm staticmember function ka used karenge

  Customer::accessStatic();

return 0;
}
