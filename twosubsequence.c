#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int n=s.size();
int idx[n];
for(int i=0;i<n;i++){
idx[s[i]-'a']=i+1;




}
int index;
char ch;
for(int i=0;i<25;i++){
if(idx[i]>0){
index=idx[i];
ch ='a';
ch=ch+1;
break;



}


}
string s1= s.substr(0,index-1)+s.substr(index);
cout<<ch<<" "<s1<<endl;





}
