#include<iostream>
using namespace std;
int main () {
      float km, meter , centimeter;
         cout << " convert centimetre into meter and kilometer :\n";
         cout << "input the distance in centimeter:\n";

   cin >> centimeter ;
 meter = (centimeter/100);
 km =(centimeter/100000);
 cout << "the distance in metre is "<< meter << endl;
 cout << "the distance in kilometer is"<< km << endl;
 return 0;
} 
    
