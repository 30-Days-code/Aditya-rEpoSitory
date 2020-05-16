/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class calculate
{
    public:
    int a,b,c;
    
    void operator ++()
    {
        cout<<"Enter first number"<<endl;
        cin>>a;
        cout<<"Second number"<<endl;
        cin>>b;
        c=a+b;
        cout<<"The result is"<<c<<endl;
    }
    void operator --()
    {
        if (a>b)
        {
            cout<<"Enter first number"<<endl;
            cin>>a;
            cout<<"Second number"<<endl;
            cin>>b;
            c=a-b;
            cout<<"The Result is"<<c<<endl;
        }
        else
        {
            cout<<"Enter first number"<<endl;
            cin>>a;
            cout<<"Second number"<<endl;
            cin>>b;
            c=b-a;
            cout<<"The Result is "<<c<<endl;
        }
    }
    void operator *()
    {
        cout<<"Enter first number"<<endl;
        cin>>a;
        cout<<"Second number"<<endl;
        cin>>b;
        c=a*b;
        cout<<"The result is "<<c<<endl;
    }
};

int main()
{
    calculate c1;
    int i;
    int a,b,c;
    cout<<"choose one \n"<<"1.Addition \n"<<"2.Substraction \n"<<"3.Multiplication \n"<<"4.Division \n";
    cin>>i;
    
    if (i=1)
    {
        c1.operator ++ ();
    }
    if (i=2)
    {
        c1.operator -- ();
    }
    if (i=3)
    {
        c1.operator * ();
    }
    else
    {
        cout<<"WRONG INPUT"<<endl;
    }
    return 0;
}
