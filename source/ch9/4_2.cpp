#include "std_lib_facilities.h"

struct Date
{
 int y, m, d;
 Date(int y, int m, int d);
 void add_day(int n); 
};

Date today(1978, 6, 25);
Date tomorrow(today);


Date::Date(int y, int m, int d)
{

 if (y < 1900 || y > 2020)
  cout << "Error, invalid year." << endl;
 else if (m < 1 || m > 12)
  cout << "Error, invalid month." << endl;
 else if (d < 1 || d > 31)
  cout << "Error, invalid day." << endl;
 else
 {
  
  Date::y = y;
  Date::m = m;
  Date::d = d;
 }

 return;
}


void Date::add_day(int n)
{
 bool lastDay = false;
 bool endYear = false;


 for (int i = 0; i < n; ++i)
 {

  if (Date::d == 31)
   lastDay = true;
  Date::d = (Date::d == 31) ? 1 : ++Date::d;  

  if (lastDay)
  {
   
   lastDay = false;
   Date::m = (Date::m == 12) ? 1 : ++Date::m; 
   if (Date::m == 12)
    endYear = true;

   if (endYear)
   {
    
    endYear = false;
    ++Date::y;
   }

  }
  
 }
}

ostream& operator<<(ostream& os, const Date& d)
{
 return os << d.d << ", " << d.m << ", " << d.y << endl;
}

int main()
{

 tomorrow.add_day(1);

 cout << "Today: " << today << endl;
 cout << "Tomorrow: " << tomorrow << endl;

 return 0;
}