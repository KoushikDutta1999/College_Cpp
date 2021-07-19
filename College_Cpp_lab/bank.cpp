//Define a Class to represent a bank account. Includes the following members, Data members 
//Name of the depositor 
//Account Number 
//Type of Account 
//Balance 
//Member functions 
//To assign initial values 
//to deposit amount 
//withdraw amount after checking balance 
//display name and balance 
//Write a C++ program to implement this. 

#include<iostream> 
using namespace std; 
#include<string.h> 
class bank 
{ 
char name[20]; 
int ano; 
char atype[20]; 
float bal;
public: 
void get(int no,char *n,char *t,float b) { 
strcpy(name,n); 
ano=no; 
strcpy(atype,t); 
bal=b; 
} 
float deposit() 
{ 
float amt; 
cout<<"\nEnter amount: "; 
cin>>amt; 
bal=bal+amt; 
return bal; 
} 
float withdrw() 
{ 
float amt; 
cout<<"\nHow many Rupees withdraw: "; cin>>amt; 
bal=bal-amt;
return bal; 
} 
void disp() 
{ 
cout<<"\nAccount number: "<<ano; 
cout<<"\nName: "<<name; 
cout<<"\nAccount type: "<<atype; 
cout<<"\nDeposit Amount: "<<deposit(); 
cout<<"\nAfter Withdraw Amount balnace: "<<withdrw(); } 
}; 
int main() 
{ 
int n; 
char nm[20],t[20]; 
float a; 
bank bk; 
cout<<"\n\nEnter Account no.: "; cin>>n; 
cout<<"\nEnter Name: "; cin>>nm; 
cout<<"\nEnter account type: "; cin>>t; 
cout<<"\nEnter balance amount: ";cin>>a;
bk.get(n,nm,t,a); 
bk.disp(); 
return 0; 
} 

