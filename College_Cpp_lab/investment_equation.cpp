//Write a program to evaluate following investment equation V = P(1+r)n  and  
//print the tables which would give the value of V for various combination of the  following values of P, r, and n:  
//P: 1000, 2000, 3000, ........, 1000 
//r: 0.10, 0.12, 0.13, ........, 0.20 
//n: 1,2,3.......,10 
//(Hint: P is the principal amount and V is the value of money at the end of n  years.  
//This equation can be recursively written as 
//V = P(1+r)
//P = V 
//In other words the value of money at the end of the first year becomes the  principal amount for the next year and so on. 

#include<iostream> 
#include<math.h> 
using namespace std;  
int main()  
{ 
int p,r,n,v,m; 
cout<<"Enter the value of P,R,N to find V=P(1+r)^n:\n"; 
cin>>p>>r>>n; 
m=(1+r); 
v=p*(pow(m,n));  
cout<<"The value of V is:"<<v; 
return 0 ; 
} 

