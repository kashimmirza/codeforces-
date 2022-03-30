#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
map<string, int>st;
while(t--){
int n;
cin>>n;
string name;
int mark;
if(n==1){
 cin>>name;
 cin>>mark;
 st[name]+=mark;
}
 else if(n==2){
        cin>>name;
 st.erase(name);
 }
 else if(n==3){
     cin>>name;
 cout<<st[name]<<endl;;


 }





}






}





