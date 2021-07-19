//WAP to find a^ b value where a and b are 2 integer with out using  library function... 

#include<iostream>  
using namespace std; 
int main() 
{ 
int a,b,i,x,y=1; 
cout<<"enter the value"; 
cin>>a>>b; 
for(i=1;i<=b;i++) 
{ 
x=a;
y=y*x; 
} 
cout<<"result="<<y; return 0; 
} 

