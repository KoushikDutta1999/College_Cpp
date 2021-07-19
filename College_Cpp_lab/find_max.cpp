//Find out the max number 

#include<iostream> 
using namespace std; 
int main() 
{ 
int a,b,c; 
cout<<"Enter three numbers :"; 
cin>>a>>b>>c; 
int max=0; 
if(a>b && b>c) 
max=a; 
else if(b>c && b>a) 
max=b; 
else 
max=c; 
cout<<""Maximum number is ="<<max; 
} 

