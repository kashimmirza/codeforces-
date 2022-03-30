#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
string s;
cin>>s;
int n=s.size();
int idx[101];
for(int i=0;i<n;i++){
idx[s[i]-'a']=i+1;




}
long long  index;
char ch;
for(int i=0;i<=25;i++){
if(idx[i]>0){
index=idx[i];
ch ='a';
ch=ch+i;
break;



}


}
string s1= s.substr(0,index-1)+s.substr(index);
cout<<ch <<" "<< s1<<endl;
    }





}
