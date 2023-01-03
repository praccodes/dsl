#include<bits/stdc++.h>
using namespace std;
int pr(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='/'||c=='*'){
        return 2;
    }
    else if(c=='+'||c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}

void inf(string s){
    stack<char>st;
    string re;
    for(int i=0;i<s.size();i++){
           if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')){
            re+=s[i];
           }
           else if(s[i]=='('){
            st.push('(');
           }
           else if(s[i]==')'){
             while(!st.empty()&& st.top()!='('){
                re+=s[i];
                st.pop();
             }
           }
           else{
            while(!st.empty()&&pr(s[i])<=st.top()){
                re+=st.top();
                st.pop();
            }
            st.push(s[i]);
           }

    }
    while(!st.empty()){
        re+=st.top();
        st.pop();
    }
   cout<< re<<endl;
}
int main(){
    int w=10;
  
string in;
cout<<"ENTER YOUR INFIX EXPRESSION"<<endl;
    cin>>in;
cout<<"THE POSTFIX EXPRESSION IS"<<endl;
inf(in);
  



    return 0;

}