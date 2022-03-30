#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int  j=1;j<=t;j++){
            int n;
    cin>>n;
    int cnt=0;
    int sum=0;



    for(int i=1;i<=n;i++){



    string str1;
    cin>>str1;



if(str1[str1.size()-1]=='*'){
        cnt++;
}




stringstream geek(str1);
int x=0;
geek>>x;
sum+=x;
    }
    if(n==cnt){

         cout<<"Case "<<j<<": "<<"-1"<<endl;
    }
    else {
    cout<<"Case "<<j<<": "<<sum/(n-cnt)<<endl;
    }








}
}
