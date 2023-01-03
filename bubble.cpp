#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int key;cin>>key;
    int low=0,high=n;
    //int mid=(low+high)/2;
    while(low!=high){
        int mid=(low+high)/2;
        if(arr1[mid]==key){
            cout<<"Found at"<<mid<<endl;
            break;
        }
        else{
            if(arr1[mid]<key){
                low=mid+1;
            }
            else if(arr1[mid]>key){
                high=mid-1;
            }
        }
    }
   
}