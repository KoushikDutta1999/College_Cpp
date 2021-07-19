//Write a program to solve the series. X+X^2/3+X^3/5+......n . Find the  sum of the series after n is term.. 

#include<iostream> 
#include<math.h> 
using namespace std; 
int main() 
{ 
float sum=0.0,j=1.0,i,x,r,p; 
cout<<"enter the range"; 
cin>>r; 
cout<<"enter the number"; 
cin>>x; 
for(i=1;i<=r;i++) 
{ 
p=pow(x,i); 
sum=sum+p/j; 
j=j+2;
} 
cout<<"the equation ="<<sum; 
return 0; 
} 

