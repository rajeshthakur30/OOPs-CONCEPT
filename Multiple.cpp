#include<iostream>
using namespace std;

class Engineer{

  void money(){
    cout<<"Hello Money\n";
  }

  public:
  string specialization;

  Engineer(){
    cout<<"Hello Engineer\n";
  }

  void work(){
    cout<<"I have specialization in "<<specialization<<endl;
  }
};

class Youtuber{
  public:
  int subscribers;

  Youtuber(){
    cout<<"Hello Youtuber\n";
  }

  void contentCreator(){
    cout<<"I have a subscriber base of "<<subscribers<<endl;
  }
};


    class codeTeacher:public Engineer,public Youtuber{
      public:
      string name;

      codeTeacher(){
    cout<<"Hello codeTeacher\n";
  }


      codeTeacher(string name,string specialization,int subscribers){
        
        this->name=name;
        this->specialization=specialization;
        this->subscribers=subscribers;
      }

      void showcase(){
        cout<<"My name is "<<name<<endl;
        work();
        contentCreator();//upar wala public hai issiliye hm esko function ko direct call kar liye
      }
    };

    int main(){
      // codeTeacher A1("Rohit","CSE",49000);
      // A1.showcase();
      //A1.Money();//not accessible kyuki money private hai
  codeTeacher A1;

    };
  