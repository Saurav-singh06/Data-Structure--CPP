#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key){
    for(int i =0; i<n; i++){
        // check if current element match with the key                                 // Time Complexity = O(N) -->   Nos of operation is directly proportional to N
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main() {
	int arr[] = {2,32,54,33,54,75,98,65,73,86};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the Key : ";
    cin>>key;

    int index = linear_search(arr,n,key);
    if(index!=-1){
        cout<<key<<" Is present at index "<<index <<endl;
    }
    else{
        cout<<key<<"IS NOT FOUND"<<endl;
    }

	return 0;
}
