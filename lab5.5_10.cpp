//mirror rhombus star pattern
#include<iostream>
using namespace std;
int main(){
 	int n= 5;
 	for(int i=0;i<5;i++){
//print space
       for (int j=0;j<(i+1);j++)				
		cout<<" ";
		
//print star
		for (int j=0;j< 5;j++)		
		cout<<"*";

		
						
		
		cout<< endl;
	} 
	return 0;
}

