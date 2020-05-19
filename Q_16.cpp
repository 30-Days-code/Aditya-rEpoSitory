#include <iostream>

using namespace std;

class calculator
{
	public3:
		float CRadius;
		long CLength,RLength,RBreadth,RHeight;
		long SWidth;
		float THeight,TWidth,TBase;

		
		
	void AreaOfCircle()
	{
		float ans;
		cout<<"Enter the Radius of the circle";
		cin>>CRadius;
		ans = 3.14 * (CRadius*CRadius);
		cout<<"The area of the circle is: "<<ans<<endl;
	}
	void AreaOfRectangle()
	{
		float ans;
		cout<<"Enter the Length, Breadth, Height of the rectangle"<<endl;
		cin>>RLength>>RBreadth>>RHeight;
		ans = RLength * RBreadth * RHeight;
		cout<<"The area of the rectangle is: "<<ans<<endl;
	}
	void AreaOfSquare()
	{
		float ans;
		cout<<"Enter the width of the square"<<endl;
		cin>>SWidth;
		ans=(SWidth * SWidth);
		cout<<"The area of the square is: "<<endl;
	}
	void AreaOfTriangle()
	{
		float ans;
		cout<<"Enter the height of the triangle"<<endl;
		cin>>THeight;
		cout<<"Enter the base of the triangle"<<endl;
		cin>>TBase;
		ans=THeight * TBase;
		cout<<"The area of the triangle is: "<<endl;
	}
};

int main()
{
	calculator f1;
	int a;
	cout<<"Enter your choice"<<endl;
	cout<<"1. Area of Circle"<<"\t"<<"2. Area of rectangle"<<endl;
	cout<<"3. Area of square"<<"\t"<<"4. Area of triangle"<<endl;
	cin>>a;
	if (a==1)
	{
		f1.AreaOfCircle();
	}
	if (a==2)
	{
		f1.AreaOfRectangle();
	}
	if (a==3)
	{
		f1.AreaOfSquare();
	}
	if (a==4)
	{
		f1.AreaOfTriangle();
	}
	else
	{
		cout<<"INVALID INPUT"<<endl;
	}
}
