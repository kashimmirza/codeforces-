#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int l=0;
    int r=0;
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            l++;



           }
           else if(s[i]==')'){
            if(l>0){
                c++;
                l--;
            }
           }
    }

    for(int i=0;i<s.length();i++){
        if(s[i]=='['){
            r++;



           }
        else if(s[i]==']'){

            if(r>0){

                c++;
                r--;
            }
        }
           }




    //re= ceil(re/(2*1.0));
    cout<<c<<endl;




}






}
