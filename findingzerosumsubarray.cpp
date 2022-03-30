#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int a[100001];
cin>>n;
set<int>s;
for(int i=0;i<n;i++){
    cin>>a[i];
}
int sum=0;
s.insert(0);
for(auto it=s.begin();it!=s.end();it++){
        sum+=a[it];
if(s.find(sum)!=s.end()){
    cout<<*it<<endl;



}
else
    s.insert(sum);



}





}
