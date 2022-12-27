#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
	int temp;
	for(int i=1; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		cout<<"number of passes : "<<i<<endl;
		cout<<"After the pass : "<<endl;
		for(int k=0; k<n; k++){
			cout<<arr[k]<<" ";
		}
		cout<<'\n';
	}
	for(int k=0; k<n; k++){
		cout<<arr[k]<<" ";
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	bubbleSort(arr, n);
	return 0;
}
