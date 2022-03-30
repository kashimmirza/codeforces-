#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
string s;
cin>>s;
getchar();
int x=0, y=0;
for(int i=1;i<=n; ){

    if(s[i]=='S'){


        x++;
        i++;
    }
    if( s[i]=='R'){
            i = i+1;
        if(s[i]=='S'){
            y= y+1;
            y= (-1)*y;
            i = i+1;
        }


    }

}
cout<<x<<" "<<y<<endl;





}
