//enter two angles of a triangle and find the third angle
#include<iostream>
using namespace std;
int main () {
  float a ,b,c;
   cout << "enter two angles of a triangle to find the third angle "<<endl;
   cout << "input one angle "<<endl;
   cout << "input another angle "<<endl;
 cin >>  a ;
 cin >>  b ;
  c = 180- (a+b);

    cout << "the third angle is "<< c <<endl;
 return 0;
}                                                          
