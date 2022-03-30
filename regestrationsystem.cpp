#include<bits/stdc++.h>
using namespace std;
int main(){

map<string, int>res;
map<string, int>::iterator itr;
int n;
int t;
cin>>t;
int ans;
while(t--){
    string s;
    cin>>s;
    res[s]+=1;
    int ans=res[s];
    if(ans==1){

        cout<<"OK"<<endl;
        continue;
    }
    else{

        cout<<s<<ans-1<<endl;
    }



}




}
