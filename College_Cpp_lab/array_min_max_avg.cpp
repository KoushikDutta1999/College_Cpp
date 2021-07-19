//C++ program to input N natural numbers in array and find out the MAX. MIN. & AVERAGE.  

#include <iostream> 
using namespace std; 
#define SIZE 50 
int main() 
{ 
int array[SIZE]; 
int i, max, min, size; 
double avg=0.0,sum=0.0; 
cout<<"Enter size of the array: "; 
cin>>size; 
cout<<"\n Enter "<<size <<" elements in the array: "; 
for(i=0; i<size; i++) 
{ 
cin>>array[i];  
sum+=array[i];
} 
max = array[0]; 
min = array[0]; 
for(i=1; i<size; i++) 
{ 
if(array[i] > max) 
max = array[i]; 
if(array[i] < min) 
min = array[i]; 
} 
avg=sum/size; 
cout<<"\nMaximum element =" << max << "\n"; 
cout<<"Minimum element =" << min<<"\n"; 
cout<<"Avarage is="<<avg<<"\n"; 
return 0; 
} 

