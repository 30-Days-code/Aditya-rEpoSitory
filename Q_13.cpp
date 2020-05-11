/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class tree 
{
    public:
    void star_pira();
    void num_pira();
    void inv_star_pira();
    void pascals_tree();
    void floyd_tree();
};
    void tree::star_pira()
    {
        int space, rows;
    
        cout <<"Enter number of rows: ";
        cin >> rows;
    
        for(int i = 1, k = 0; i <= rows; ++i, k = 0)
        {
            for(space = 1; space <= rows-i; ++space)
            {
                cout <<"  ";
            }
    
            while(k != 2*i-1)
            {
                cout << "* ";
                ++k;
            }
            cout << endl;
        }    
    }
    void tree::num_pira()
    {
        int rows, count = 0, count1 = 0, k = 0;
    
        cout << "Enter number of rows: ";
        cin >> rows;
    
        for(int i = 1; i <= rows; ++i)
        {
            for(int space = 1; space <= rows-i; ++space)
            {
                cout << "  ";
                ++count;
            }
    
            while(k != 2*i-1)
            {
                if (count <= rows-1)
                {
                    cout << i+k << " ";
                    ++count;
                }
                else
                {
                    ++count1;
                    cout << i+k-2*count1 << " ";
                }
                ++k;
            }
            count1 = count = k = 0;
    
            cout << endl;
        }
    }
    void tree::inv_star_pira()
    {
        int rows;
    
        cout << "Enter number of rows: ";
        cin >> rows;
    
        for(int i = rows; i >= 1; --i)
        {
            for(int space = 0; space < rows-i; ++space)
                cout << "  ";
    
            for(int j = i; j <= 2*i-1; ++j)
                cout << "* ";
    
            for(int j = 0; j < i-1; ++j)
                cout << "* ";
    
            cout << endl;
        }
    }
    void tree::pascals_tree()
    {
        int rows, coef = 1;
    
        cout << "Enter number of rows: ";
        cin >> rows;
    
        for(int i = 0; i < rows; i++)
        {
            for(int space = 1; space <= rows-i; space++)
                cout <<"  ";
    
            for(int j = 0; j <= i; j++)
            {
                if (j == 0 || i == 0)
                    coef = 1;
                else
                    coef = coef*(i-j+1)/j;
    
                cout << coef << "   ";
            }
            cout << endl;
        }
        
    }
    void tree::floyd_tree()
    {
        int rows, number = 1;
    
        cout << "Enter number of rows: ";
        cin >> rows;
    
        for(int i = 1; i <= rows; i++)
        {
            for(int j = 1; j <= i; ++j)
            {
                cout << number << " ";
                ++number;
            }
    
            cout << endl;
        }
    }

int main()
{
    cout<<"Hello World";
    cout<<floyd_tree;

    return 0;
}
