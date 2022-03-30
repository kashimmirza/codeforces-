#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int t;
cin>>n;
int a[n];
int flag=0;
for(int i=0;i<n;i++) cin>>a[i];
int cur=1;
do{

    cur = cur+ a[cur-1];
    if( cur ==t){
        cout<<"YES"<<endl;
        break;

    }
    cout<<cur<<endl;
    cout<<"NO"<<endl;




}while(n<cur);


if(flag==1){

    cout<<"YES"<<endl;

}
else
    cout<<"NO"<<endl;





}
