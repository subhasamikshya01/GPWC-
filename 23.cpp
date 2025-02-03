#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter no of values to be entered:- "<<endl;
	cin>>n;
	int *arr=new int[n];
	cout<<"enter nos:- "<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	delete[] arr;
	return 0;
}
