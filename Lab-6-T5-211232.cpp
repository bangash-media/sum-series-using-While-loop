#include <iostream>

using namespace std;
/*program that displays the sum of the following series using while loop.
1+1/2+1/4+1/6+...+ 1/100*/
int main() 
{
	double result=1,inc=2; //values declaration
	while(inc<=100) //while loop will run till required value
	{
		result=result+(1/inc); //on each inreament, stores value in result
		inc=inc+2; //will do an increament of "2"
	}
	cout<<"\n\n\t\t\tSum of the numbers= "<<result<<"\n\n"; //display the result
	
	return 0;
}
