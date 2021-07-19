//Define a class Student with roll_no, name and marks in three tests subject.Declare an array of 10 student objects. Using appropriate functions , 
//find the average two better marks for each student.Print the roll_no, name and average marks of all the students. 

#include<iostream> 
using namespace std; 
class student 
{ 
private: 
char name[20]; 
int rollno; 
int marks[3]; 
public: 
student() 
{ 
cout<<"\nEnter name: ";
cin>>name; 
cout<<"\nEnter Roll No. : "; 
cin>>rollno; 
cout<<"\nEnter marks of 3 subjects"; 
for (int i=0;i<3;i++) 
{ 
cout<<"\nSubject "<<i+1<<": "; 
cin>>marks[i]; 
} 
} 
float average() 
{ 
float m1=-1,m2=-1; 
for(int j=0;j<3;j++) 
if(marks[j]>m1) 
{ 
m2=m1; 
m1=marks[j]; 
} 
else if(marks[j]>m2) 
{ 
m2=marks[j]; 
} 
return((m1+m2)/2); 
} 
void show() 
{ 
cout<<"\nName "<<name; 
cout<<"\nRoll "<<rollno; 
cout<<"\nAverage of two better marks "<<average(); 
} 
} 
stud[10]; 
int main() 
{ 
for(int i=0;i<10;i++) 
{ 
cout<<endl; 
stud[i].show();
} 
} 

