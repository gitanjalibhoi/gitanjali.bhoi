//enter marks of five subjects and calculate total , average and percentage
#include<iostream>
using namespace std;
int main () {
  float english,mathematics,chemistry,biology, physics;
  float total,average ,percentage;
   cout << "enter marks of five subjects and calculate total , average and percentage"<<endl;
   cout << "each subject carries 100 marks "<<endl;
   cout << " enter marks of english subject"<<endl;
   cout << "enter marks of mathjematics subject "<<endl;
   cout << " enter marks of chemisty subject"<<endl;
   cout << " enter marks of biology subject"<<endl;
   cout << "enter marks of physics subject"<<endl;
 cin >> english ;
 cin >> mathematics ;
 cin >> chemistry ;
 cin >> biology ;
 cin >> physics ;
 total = english+mathematics+chemistry+biology+ physics;
 average =english+mathematics+chemistry+biology+ physics /5 ;
percentage =english+mathematics+chemistry+biology+ physics/500*100;
 

    cout << "the total is "<< total <<endl;
  cout << "the average is "<< average <<endl;
  cout << "the percentage is "<< percentage <<endl;
 return 0;
}                                                          
