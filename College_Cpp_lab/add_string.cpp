//Write a C++ program to create a class called STRING and implement the following operations. 
//Display the results after every operation by overloading the 
//operator + 
//i) STRING s1=”MCA” 
//ii) STRING s2=”BCA” 
//iii) STRING s3=s1+s2; (MCABCA) 

#include<iostream> 
using namespace std; 
class student{ 
public: 
string s1="MCA",s2="BCA",S3; 
void operator +()
{ 
S3=s1+s2; 
cout<<"Result = "<<S3;
} 
}; 
int main(){ 
student t; 
+t; 
return 0; 
} 

