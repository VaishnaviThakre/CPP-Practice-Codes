//Implement a C++ program to find the sum of all elements in an array.
#include<iostream>
using namespace std;
int main()
{
	int n,arr[n],sum=0,i;
	
	cout<<"enter the size of array: ";
	cin>>n;
	
	cout<<"\nEnter array elements: ";
	for(i=0;i<n;i++){
		cin>>arr[i];
		sum = sum+arr[i];
	}
	cout<<"\nSum of the entered array is: "<<sum;
}
