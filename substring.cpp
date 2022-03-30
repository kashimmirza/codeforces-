#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string s;
cin>>s;
int cnt =0;
int ans =0;
for(int i=0., j=1, k=2;i<s.size();i++,j++, k++){
    if(s[i]=='x'&&s[j]=='x'&&s[k]=='x'){

        ans = ans+1;
        }



}
cout<<ans<<endl;







}
