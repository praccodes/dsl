#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cout<<"ENETER THE PARANTHESIS"<<endl;
cin>>s;
int x=0;
stack<char>st;
unordered_map<char,int>mp={{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3} };
 for(char bracket:s){
    if(mp[bracket]<0){
        //yaani wo opening bracket h 
        st.push(bracket);
    }
    else{
        if(st.empty()){
            cout<<"NO";
            break;
        }
        else if(!st.empty()){
            char top=st.top();
            st.pop();
            if(mp[top]+mp[bracket]!=0){
                x++; 
                break;
            }
        }
    }
 }
 if(x>0){
    cout<<"NO";
 }

 else 
 if(st.empty()){
    cout<<"yes";
 }
 else {
    cout<<"ano";
 }












    return 0;
}