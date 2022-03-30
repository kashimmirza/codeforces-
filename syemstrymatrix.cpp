#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){


    int n, m;
    cin>>n>>m;
    if(m%2!=0){

        cout<<"NO"<<endl;
        continue;
    }

    int x, y;
    int flag=0;
    while(n--){
        cin>>x>>y;
        if(x==y){

            flag=1;
        }



    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
}



}
