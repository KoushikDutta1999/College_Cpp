//Given tha tan employee class contains following members: employee  number, employee names, basic, da, it , net salary.member functions : to  read the data, to calculate net salary and display class data.
//Write a c++ program to compute the data of n employees . 
//net salary= basic+da-it ,  
//da=52 % of basic and it=(basic+da)*30/100. 

//#include<iostream> 
#define SIZE 5 
using namespace std; 
class emp 
 { 
 float basic,da,it,netsal; 
 char name[20],num[10]; 
 public: 
 void getdata(); 
 void net_sal();
 void dispdata(); 
 }; 
void emp::getdata() 
 { 
 cout<<"\nEnter employee number : " ;  cin>>name; 
 cout<<"Enter employee name : " ;  cin>>num; 
 cout<<"Enter employee basic salary in Rs : " ;  cin>>basic; 
 } 
void emp::net_sal() 
 { 
 da=((0.52)*basic ); 
 float gsal=da+basic; 
 it=((0.3)*gsal); 
 netsal=gsal-it; 
 } 
void emp::dispdata() 
 { 
 cout
 <<"\nEmployee number: "<<name  <<"\nEmployee name: "<<num  <<"\nEmployee netsalary Rs: "<<netsal;  } 
int main() 
 { 
 emp ob[SIZE]; 
 int i,n; 
 cout<<"\nCalculation of Employee Net Salary"  <<"\n Enter the number of employees : ";  cin>>n; 
 for(int i=0;i<n;i++) 
 { 
 ob[i].getdata(); 
 ob[i].net_sal(); 
 } 
 cout<<"\n-----------------" 
 <<"\nEmployee Detail::" 
 <<"\n-----------------"; 
 for( i=0;i<n;i++) 
 { 
 cout<<"\n\n Employee:"<<i+1
 <<"\n ----------"; 
 ob[i].dispdata(); 
 } 
 return 1; 
 } 

