#include<iostream>
using namespace std;

class Customer
{
  
  string name;
  int account_number;
  int balance;

//Default constructor
  public:
  Customer(){//agar esko hata de toh error dega kyuki hm yaha contructor khud se create kiye hai agar hm khud se consructor create karte hai toh by default constructor create  nhi  hota hai 
   // cout<<"Hello Constructor\n";//ye hmko batayega ki dc kaise call ho raha hai 
    name="Rohit";
    account_number=5;
    balance=100;
   }

  //  //Parameterized Constructor
  //  Customer(string a,int b,int c){
  //   name=a;
  //   account_number=b;
  //   balance=c;
  //  }

   Customer(string a,int b){
    name=a;
    account_number=b;
   
   }
   //inline constructor
   inline Customer(string a ,int b,int c):name(a),account_number(b),balance(c){

   }

   void display(){
    cout<<name<<" "<<account_number<<" "<<balance<<endl;
   }
};

int main(){
  Customer A1;
Customer A2("Rohit",23,1000);
Customer A3("Mohit",25);

  A1.display();
  A2.display();
    A3.display();
}