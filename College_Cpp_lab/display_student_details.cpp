//Define a class student described as below: 
//Data members/instance variables: 
//name, age, m1, m2, m3 (marks in 3 subjects), maximum, average Member methods: 
//(i) A parameterized constructor to initialize the data members 
//(ii) To accept the details of a student 
//(iii) To compute the average and the maximum out of three marks 
//(iv) To display the name, age, marks in three subjects, maximum and average. 
//Write a main method to create an object of a class and call the above member methods. 

#include<iostream> 
using namespace std; 
class student{ 
public: 
int maximum,age,m1,m2,m3; 
float average; 
string name; 
student(string name,int age,int m1,int m2,int m3){ 
average=(m1+m2+m3)/3; 
if(m1>m2&m1>m3){ 
maximum=m1; 
} 
else if(m2>m1&m2>m3){ 
maximum=m2; 
} 
else 
maximum=m3; 
cout<<"Student name = "<<name<<endl; 
cout<<"Student age = "<<age<<endl; 
cout<<"Maximum = "<<maximum<<endl; 
cout<<"Average = "<<average<<endl; 
}
}; 
int main(){ 
int age,m1,m2,m3; 
string name; 
cout<<"Enter the name of the student : "<<endl; cin>>name; 
cout<<"Enter the age of the student : "<<endl; cin>>age; 
cout<<"Enter the marks of 3 sub : "<<endl; cin>>m1>>m2>>m3; 
student std(name,age,m1,m2,m3); 
return 0; 
} 

