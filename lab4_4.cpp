//enter convert days into years,weeks and days
#include<iostream>
using namespace std;
int main () {
  int year,week,days ;
   cout << "convert days into year,week and days "<<endl;
   cout << "input the days "<<endl;
 cin >> days;
 year = days/365;
 week = (days % 365 )/7;
 days = days - ((year*365)+(week*7));

    cout << "the years is "<< year <<endl;
    cout<< "the weeks is "<< week << endl;
    cout << "the days is "<< days << endl;
 return 0;
}                                                          
