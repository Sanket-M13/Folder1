#include <iostream>
using namespace std;

class pub{
    public:
    void book(){
        string b;
      cout<< "enter the book name: " <<endl;
      cin>>b;
      cout<<"your book "<< b<<" Is on the way"<<endl;
    }
    void journal(){
        cout<<"thanks for shopping with us  "<<endl;
    }
    
};
  class paper : public pub{ 
      public:
      void news() {
          cout << "****book system exit****"<<endl;
      }
  };
  
int main() {
    int a;
    
    cout<<"enter the value of book"<<"\n";
    cin>>a;
    pub pub1;
    paper paper1;
    
    pub1.book();
    pub1.journal();
    paper1.news();
  
    return 0;
}
