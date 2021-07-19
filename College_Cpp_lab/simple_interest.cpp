// write a cpp program to calculate simple interest using function. 

#include<iostream> 
using namespace std;  
float interest(int p, int t, float r) 
{  
return ((p*t*r)/100.0);  
} 
int main() 
{ 
int p,t; 
float s,r; 
cout<<" Enter the Principal, rate and Time in months \n"; 
cin>>p>>r>>t;  
s=interest(p,r,t);  
cout<<"The Simple interest="<<s; 
} 

