#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int c=0;
char a[4];
int i=3;
while(n!=0){




    n= n/10;

    c++;


}
string s1=to_string(n);
cout<<c<<endl;
if(c>=4){
    cout<<n<<endl;
}
else if(c<4){
    if(c==1){
      cout<<strcat("000",s1);
    }
    else if(c==2){
        cout<<"00"<<n<<endl;
    }
    else if(c==3){
        cout<<"0"<<n<<endl;
    }
    cout<<a<<endl;


}






}
