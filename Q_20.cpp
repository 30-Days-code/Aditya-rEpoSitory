#include <iostream>
#include <cmath>

using namespace std;

class math
{
	public:
	float a,b,c;
	float e,f,discriminant;
	void area()
	{
		cout<<"Check your equation as 'ax^2+bx+c' "<<"\n"<<"Now Enter"<<endl;
		cout<<"Enter the value of a"<<endl;
		cin>>a;
		cout<<"Enter the value of b"<<endl;
		cin>>b;
		cout<<"Enter the value of c"<<endl;
		cin>>c;
		discriminant=(b*b)-(4*a*c);
		if (discriminant>0)
		{
			e=(-b+sqrt(discriminant))/(2*a);
			f=(b+sqrt(discriminant))/(2*a);
		    cout<<"First root is"<<e<<endl;
		    cout<<"Second root is"<<f<<endl;
		}
		else
		{
			cout<<"There is no root"<<endl;
		}
	}
	void direction()
	{
		float a,b,c;
		cout<<"Enter the angle with x-axis"<<endl;
		cin>>a;
		cout<<"Enter the angle with y-axis"<<endl;
		cin>>b;
		cout<<"Enter the angle with z-axis"<<endl;
		cin>>c;
		cout<<"The diraction cosines are ("<<cos(a)<<","<<cos(b)<<","<<cos(c)<<")"<<endl;
	}
	void angle()
	{
		float m1,m2,slope;
		cout<<"Enter the slope of first line"<<endl;
		cin>>m1;
		cout<<"Enter the slope of second line"<<endl;
		cin>>m2;
		slope=(m2-m1)/(1+(m2*m1));
		cout<<"The angle between the lines is "<<slope<<"*"<<endl;
	}
};

int main()
{
	
	math a1;
	int i;
	cout<<"Enter the number to find"<<endl;
	cout<<"1. Roots"<<"\t"<<"2. Direction Ratio"<<"\t"<<"3. Angle b/w two lines"<<endl;
	cin>>i;
	if (i==1)
	{
		a1.area();
	}
	if (i==2)
	{
		a1.direction();
	}
	if (i==3)
	{
		a1.angle();
	}
	else 
	{
		cout<<"ERROR"<<endl;
	}
	return 0;
	
}
