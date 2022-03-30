#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
int n, k;
cin>>n>>k;
int num=n;


vector<int>s(n+1);
for(int i=2;i<n;i+=2){
if(k==0)break;

s[i]=num--;

k--;




}
if(k){

    cout<<-1<<endl;
    continue;
}
int cur=1;
for(int i=1;i<=n;i++){
  if(!s[i])
  s[i]=cur++;



}

for(int i=1;i<=n;i++){
cout<<s[i]<<" ";


}
cout<<endl;





}
}
