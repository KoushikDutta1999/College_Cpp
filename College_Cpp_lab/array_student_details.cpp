//Write a program to display name ,roll no and grade of 3 students who have appeared  in the examination. Declare the class and array of class objects to read  and display the contents of the array. 

#include<iostream> 
using namespace std;
class student 
{ 
char name[20]; 
int roll_no; 
char grade[5]; 
public: 
void getdata(); 
void putdata(); 
}; 
void student::getdata() 
{ 
cout<<"Enter the name : \n"; cin>>name; 
cout<<"Enter the roll No. : \n"; cin>>roll_no; 
cout<<"Enter the grade : \n"; cin>>grade; 
} 
void student::putdata() 
{
cout<<"\n Name : "<<name<<"\t"<<"Roll Number  :"<<roll_no<<"\t"<<"Grade :"<<grade<<"\n"; 
} 
int main() 
{ 
student s[3]; 
int i; 
for(i=0;i<3;i++) 
{ 
cout<<"Enter details of student :"<<i+1<<" : \n"; s[i].getdata(); 
} 
for(i=0;i<3;i++) 
{ 
cout<<"\n student :"<<i+1<<" : \n"; 
s[i].putdata(); 
} 
return 1; 
} 

