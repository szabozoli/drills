#include "std_lib_facilities.h"


void printArray(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		os << "Int " << i << ": " << *a << "	Addr: " << a << endl;
		++a;
	}
}


int main()
{
	int n = 7;
	int* p1 = &n;

	cout << "n: " << n << "	p1: " << p1 << endl;
	
	int sevenInts [7] = { 1,2,4,8,16,32,64 };
	int* p2 = sevenInts;

	cout << "-----------------------------------" << endl;
	printArray(cout, p2, 7);
	cout << "p2: " << p2 << endl;
	cout << "p2: " << &sevenInts[1] << endl;

	int* p3 = p2;

	p2 = p1;

	p2 = p3;

	cout << "-----------------------------------" << endl;
	cout << "p1: " << p1 << "/" << *p1 << endl;
	printArray(cout, p2, 7);


	int tenInts[10] = { 1,2,4,8,16,32,64,128,256,512 };
	p1 = tenInts;

	int tenInts2[10] = { 10,20,40,80,160,320,640,1280,2560,5120 };
	p2 = tenInts2;

	for (int i = 0; i < 10; ++i)
		p2[i] = p1[i];

	vector<int> v_tenInts{ 1,2,4,8,16,32,64,128,256,512 };
	p1 = &v_tenInts[0];
	vector<int> v_tenInts2{ 10,20,40,80,160,320,640,1280,2560,5120 };
	p2 = &v_tenInts2[0];
	for (int i = 0; i < 10; ++i)
		p2[i] = p1[i];
	
	return 0;
}