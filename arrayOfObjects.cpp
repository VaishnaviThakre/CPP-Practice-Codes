#include<iostream>
#include<string>

using namespace std;

class EmpInfo{
	public: 
	string emp_name;
	int emp_id;
	
	void get_data(){
		cout<<"\nEnter employee name:";
		cin>>emp_name;
		cout<<"\nEnter employee id: ";
		cin>>emp_id;
	}
	void set_data(){
		cout<<"\nEmployee name is: "<<emp_name;
		cout<<"\nEmployee id is: "<<emp_id;
	}
	
};
int main()
{
	int n,i;
		
	cout<<"Enter the number of employees: ";
	cin>>n;
	EmpInfo e[n];
	
	for(i=0;i<n;i++){
		e[i].get_data();
	}
	for(i=0;i<n;i++){
		e[i].set_data();
	}
	
	return 0;
}
