#include "std_lib_facilities.h"

int main()
{
	double a=0,b=0;
	while(cin >> a >> b)
	{
		if(a > b)
		{
			cout << "The larger value is:" << a << "\n";
			cout << "The smaller value is:" << b << "\n";
		}
		else if(b > a)
		{
			cout << "The larger value is:" << b << "\n";
			cout << "The smaller value is:" << a << "\n";
		}
		if(a == b)
		{
			cout << "The numbers are equal.\n";
		}
		else if(abs(a-b) <= 0.01)
		{
			cout << "The numbers are equal.\n";
		}
	}
return 0;
}