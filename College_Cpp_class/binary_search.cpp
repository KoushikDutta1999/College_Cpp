//Write a program to accept the year of graduation from school as an integer value from, the user. Using the Binary Search technique on the sorted array of integers given below. 
//Output the message “Record exists” If the value input is located in the array. If not, output the message “Record does not exist”. {1982, 1987, 1993, 1996. 1999, 2003, 2006, 2007, 2009, 20101}.

#include <iostream> 
using namespace std; 
int binarySearch(int arr[], int l, int r, int x){ 
if (r >= l) { 
int mid = l + (r - l) / 2; 
if (arr[mid] == x) 
return mid; 
if (arr[mid] > x) 
return binarySearch(arr, l, mid - 1, x); 
return binarySearch(arr, mid + 1, r, x); 
} 
return -1; 
} 
int main() { 
int arr[] = { 1982, 1987, 1993, 1996, 1999, 2003, 2006, 2007, 2009, 2010}; 
int x; 
cout<<"Enter the year you want to search : "; 
cin>>x; 
int n = sizeof(arr) / sizeof(arr[0]); 
int result = binarySearch(arr, 0, n - 1, x); 
if(result !=-1) 
cout <<"Record exists in " << result; 
else 
cout << "Record does not exists"; 
return 0; 
}

