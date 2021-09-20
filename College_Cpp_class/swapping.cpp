#include <iostream>
using namespace std;

void swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	// your code goes here
	int a,b;
	cout<<"Enter 1st number : "<<endl;
	cin>>a;
	cout<<"Enter 2nd number : "<<endl;
	cin>>b;
	cout<<"Before swapping : "<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<"After swapping : "<<a<<" "<<b<<endl;
}