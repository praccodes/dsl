//  SELECtion SORt    originall
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            
        if(arr1[j]<arr1[minindex]){
            minindex=j;
           // swap(arr1[i],arr1[j]);
        }
        }
        swap(arr1[minindex],arr1[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
}