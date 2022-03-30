#include<iostream>
#include<map>
#include<string>
using namespace std;
map<string,string>mp;
int main(){
    string name,ip,cmd;
int m,n;
cin>>m>>n;
for(int i=0;i<m;++i){
    cin>>name>>ip;
    mp[ip]=name;
}
for(int i=0;i<n;++i){
 cin>>cmd>>ip;

 cout<<cmd<<" "<<ip<<" #";

mp[ip].pop_back();//Remove the ";" at the end
 cout<<mp[ip]<<endl;
}
}
