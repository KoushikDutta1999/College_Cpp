//Write a generic function to find out maximum of two integer values, float, character values. 

#include <iostream> 
using namespace std; 
template <class T> 
T Max(T x, T y){ 
if(x > y) 
return x; 
else 
return y; 
} 
int main(){ 
int a= Max(5,6); 
cout<<a<<" is maximum."<<endl; 
float b=Max(11.1,22.2); 
cout<<b<<" is Maximum."<<endl; 
char c=Max('b','c'); 
cout<<c<<" is Maximum."<<endl; 
return 0; 
} 

