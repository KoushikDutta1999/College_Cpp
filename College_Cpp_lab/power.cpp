//Write a function power() to raise a number m to a power n. The function takes a double value for m and int value for n and returns the result correctly. 
//Use a default value of 2 for n to make the function to calculate squares when this argument is omitted. 
//Write a main that gets the values of m and n from the user to test the function 

#include<iostreaam> 
using namespace std;  
int power(double m, int n=2)  
{ 
int r=1, i=1; 
for(i=1;i<=n;i++) 
{ 
r=r*m; 
}  
cout<<"The result is:"<<r; 
cout<<end; 
} 
int main() 
{ 
Double m;
int n; 
cout<< "Enter base:"; 
cin>>m; 
cout<<"Enter power:";  
cin>>n;  
power(m,n);  
cout<<end; 
power(m); 
return 0; 
} 

