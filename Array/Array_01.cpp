#include<iostream>
using namespace std;

int main(){
	int arr[100];
	int n;

	cout<<"Enter the nos of student:  ";
	cin>>n;

	//Input 
	for(int i=0; i<n; i++){
		cin>> arr[i];
		arr[i] = arr[i]*2;
	}

	//output
	for(int i=0; i<n; i++){
		cout<< arr[i]<<" ";
	}
		cout<<endl;
return 0;
}
