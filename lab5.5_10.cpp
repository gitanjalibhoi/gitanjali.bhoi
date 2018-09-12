//mirror right triangle star pattern
#include<iostream>
using namespace std;
int main(){
 	int n= 5;
 	for(int i=0;i<5;i++){						
		for (int j=0;j<(5-i);j++)		//print spaces
		cout<<' ';

		for (int j=0;j<i+1;j++)				//print stars
		cout<<'*';

		cout<< endl;
	} 
	return 0;
}

