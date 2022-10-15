#include<iostream>
using namespace std;
class pizza
{
    private:
        int M[5];  //maximum number pizza are in stock
    public:
        void display();
};
void pizza::display()
{
    for (int j = 0; j <=5; ++j) 
    {
        cin>>M[j];
        cout<<"\nYour order  "<<M[j]<< " placed."<<endl;
        cout<<"Your order will be delivered in 30 minutes."<<endl;
        cout<<"***THANKS FOR CONTACTING US***\n";
        
    }
        cout<<"Out Of Stock";
        cout<<"\nSORRY\n";
}
int main()
{
    cout<<"Welcome to pizza hut\n";
    pizza p;
    p.display();

    return 0;
} 
