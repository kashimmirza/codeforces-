#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
string s1=s;
int len= s.size();
for(int i=0;i<len/2;i++){
    swap(s[i], s[len-i-1]);


}
cout<<s1<<" "<<s<<endl;
if (s==s1){
    cout<<"First"<<endl;
}
else
{
    cout<<"Second"<<endl;
}




}
