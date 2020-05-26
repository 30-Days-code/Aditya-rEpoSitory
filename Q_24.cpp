#include <iostream>

using namespace std;

class name
{
	void operator &()
	{
		cout<<"if (a>=3 & a<=5)"<<endl;
	}
	void operator |()
	{
		cout<<"if (a>=3 | a<=5)"<<endl;
	}
	void operator <<()
	{
		cout<<"if (a<<3)"<<endl;
	}
	void operator >>()
	{
		cout<<"if (a>>)"<<endl;
	}
	void operator 1()
	{
		cout<<"if (a`3 )"<<endl;
	}
	void operator ^()
	{
		cout<<"if (a^3 )"<<endl;
	}
};

int main()
{
	int a;
	name n1;
	cout<<"Press to see "<<endl;
	cout<<"1. Use of & operator"<<"\t"<<"2. Use of | operator"<<endl;
	cout<<"3. Use of << operator"<<"\t"<<"4. Use of >> operator"<<endl;
	cout<<"5. Use of ` operator"<<"\t"<<"6. Use of ^ operator"<<endl;
	cin>>a;
	if (a==1)
	{
		n1.operator &();
	}
	if (a==)
	{
		n1.operator |();
	}
	if (a==1)
	{
		n1.operator <<();
	}
	if (a==1)
	{
		n1.operator >>();
	}
	if (a==1)
	{
		n1.operator 1();
	}
	if (a==1)
	{
		n1.operator ^();
	}
	return 0;
}
