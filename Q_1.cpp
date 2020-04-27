
#include <iostream>
#include<string.h>
using namespace std;

class Book
{
    public:
    int Book_no,Price,No_issued,No_avai;                 
    string Book_name,Author,Publisher;
    void getData();
	void BookIssue();
	void BookReturn();
	void BookInfo();
};
    void Book::getData()
    {
        cout<<"Enter book number"<<"\n";
        cin>>Book_no;
        cout<<"Enter book name, Author and Publisher"<<"\n";
        cin>>Book_name>>Author>>Publisher;
        cout<<"Enter price"<<"\n";
        cin>>"Price";
        int i;
        cout<<"Enter Total copies"<<"\n";
        cin>>i;
        No_avai=i;
        
    }
    void Book::BookIssue()                         
    {
        cout<<"Total number of books avaialable"<<No_avai<<"\n";
        cout<<"Enter the book number";
        // HELP
    }
    void Book::BookReturn()
    {
        cout<<"Enter the book number";
        cout<<"You returned the book";
    }
    void Book::BookInfo()
    {
        cout<<Book_no<<"\n"<<Book_name<<"\n"<<Author<<"\n"<<Publisher<<"\n";
		cout<<Price<<"\n"<<No_avai<<"\n";
    }
int main()         //MAIN Function
{
    cout<<"Stay Home Stay Safe"<<"\n";
}
    
