/*******************************************************************
*** Integer Flip                                    Joshua Rothe ***
********************************************************************
*** Filename: integer_flip.cpp                                   ***
*** --- Rev: 1.0.0 - Initial release                             ***
********************************************************************
*** This program will reverse any integer given and eliminate    ***
*** leading zeros, using arrays.                                 ***
********************************************************************/

#include <iostream> // takes care of cin & cout
using namespace std; // no need to include std:: every time
int main()
{
	int x,y;				//variables
	int A[]={0,1,2,3,4};	//array set to 5
	cout<< "Enter an integer to be flipped via array." <<endl;
	cin>>x;		//Reads input integer
	while( x > 99999 || x < 0)
	{	// number is regected if it is not 0-99999
		cout<< "Integer entered is invalid and exceeds perameters allowable for this program." <<endl;
		cout<< "Enter an integer to be flipped via array." <<endl;
		cin>>x;
	}
	while(x>0 && x<=9999)	//while x is within acceptable input range
	{
		A[0]=x%10;
		x=x/10;
		A[1]=x%10;
		x=x/10;
		A[2]=x%10;
		x=x/10;
		A[3]=x%10;
		x=x/10;		//last (rightmost) digit is handled by A0, next to the left is A1, and so forth.
		A[4]=x%10;	//x is being split up so each digit can fit in a spot in the array.

		for(y=0; y<4; y++)
		{
			if(A[0]!=0)
			{
				cout<<A[y];
			}
			else	//remainder of rightmost digit is not zero, then output the whole number calculated.
			{
				if(A[y]!=0)
				{
					cout<<A[y];	//output number
				}
				else
				{
					A[y]=A[y+1];	//eliminate leading zeros
				}
			}
		}
	cout<<endl;
	}
system("pause");
}
