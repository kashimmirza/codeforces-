#include<bits/stdc++.h>
using namespace std;

set<int>sq;

void solv(){
int n;
cin>>n;
bool f=0;
for(int i=0;i<n;i++){
int x;
cin>>x;
if(!sq.count(x)){
f=1;


}
}
if(f==1){
cout<<"YES"<<endl;
}
else{
cout<<"NO"<<endl;

}


}





int main(){
    int t;
for(int i=1;i<=200;i++){
   sq.insert(i*i);

}
cin>>t;
while(t--){


    solv();
}



}
