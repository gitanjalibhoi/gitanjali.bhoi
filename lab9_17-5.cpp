//q17iv

#include<iostream>
#include<cstring>
using namespace std;

int fstrlen(char a[]) 
{ 
    char *p; 
    int i=0;
    p=a;
    while(*p!='\0')
    {i++;p++;}
return i;
}

int fstrcmp()
{
    char a[40],b[20];
    cout<<"Enter the string1 "<<endl;
    cin>>a;
    cout<<"Enter the string2 "<<endl;
    cin>>b;
    if (fstrlen(a)==fstrlen(b)) 
    { char *m,*p; 
        m=a;p=b;
        while(*m!='\0')
        {
            if (*m!=*p)
            {return 0;}
            m++;p++;
         }
         return 1;
         }
         else 
         return 0;
      }
//main function
int main()
{
    int k;
    k=fstrcmp();
    if (k==1)
    cout<<"Both the strings are equal"<<endl;
    else 
    cout<<"The strings are unequal.";
    cout<<endl;
return 0;
}

