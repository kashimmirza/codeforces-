#include<bits/stdc++.h>
using namespace std;
int main(){


  string s;


  cin>>s;
  int c=1;
  if((s[0]!=s[1]&&s[0]!=s[2])&&(s[1]!=s[0]&&s[1]!=s[2])&&(s[2]!=s[0]&&s[2]!=s[1])){
     c=3;

     }
   else if(s[0]==s[1]&&s[0]==s[2]){
    c=1;
   }
   else
   c=2;


   if(c==3)
    cout<<c*2<<endl;
   else if(c==2){
    cout<<3<<endl;
   }
   else
    cout<<1<<endl;

}
