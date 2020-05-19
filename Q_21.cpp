#include <iostream>

using namespace std;

int main()
{
	float no_of_floors,no_of_rooms,occupied,total_rooms,x;
	cout<<"Enter the number of floors in your hotel"<<endl;
	cin>>no_of_floors;
	if (no_of_floors > 0)
	{
		if (no_of_floors >= 13)
		{
			cout<<"You do not cmoplete the requirements"<<endl;
			return 0;
		}
		else 
		{
			cout<<"Enter the number of rooms in each floor"<<endl;
	        cin>>no_of_rooms;
		    goto jump;
		}
	}
	else 
	{
		cout<<"You do not cmoplete the requirements"<<endl;
		return 0;
	}

jump:
	cout<<"Enter the number of rooms occupied"<<endl;
	cin>>occupied;
	total_rooms=no_of_floors*no_of_rooms;
	x=(occupied/total_rooms)/100;
	cout<<"The occupancy rate of your hotel is: "<<x<<endl;
	return 0;
}
