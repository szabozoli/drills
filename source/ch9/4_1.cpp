#include "std_lib_facilities.h"

struct Date
{
 int y;  
 int m;  
 int d; 
};

Date today;
Date tomorrow;

void init_day(Date& dd, int y, int m, int d)
{

 if (y < 1900 || y > 2020)
  cout << "Error, invalid year." << endl;
 else if (m < 1 || m > 12)
  cout << "Error, invalid month." << endl;
 else if (d < 1 || d > 31)
  cout << "Error, invalid day." << endl;
 else
 {
  dd.y = y;
  dd.m = m;
  dd.d = d;
 }

 return;
}

void add_day(Date dd, Date& dd_copy, int n)
{
 bool lastDay = false;
 bool endYear = false;

 for (int i = 0; i < n; ++i)
 {

  if (dd.d == 31)
   lastDay = true;
  dd.d = (dd.d == 31) ? 1 : ++dd.d;

  if (lastDay)
  {

   lastDay = false;
   dd.m = (dd.m == 12) ? 1 : ++dd.m;
   if (dd.m == 12)
    endYear = true;

   if (endYear)
   {
    endYear = false;
    ++dd.y;
   }

  }
  
 }

 dd_copy = dd;
}

ostream& operator<<(ostream& os, const Date& d)
{
 return os << d.d << ", " << d.m << ", " << d.y << endl;
}

int main()
{
 init_day(today, 1978, 6, 25);

 add_day(today, tomorrow, 1);

 cout << "Today: " << today << endl;
 cout << "Tomorrow: " << tomorrow << endl;

 return 0;
}