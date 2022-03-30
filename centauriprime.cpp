#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main(){
    int T;
    cin>>T;
    char s[20];


    for(int i=1;i<=T;i++){
        cin>>s;
        int len = strlen(s);
        char ch = s[len-1];
        cout<<ch<<endl;
        if(ch =='a'||ch=='e'||ch=='i'||ch =='o'||ch =='u'){

            cout<<"Case #"<<i<<": " <<s<<" is ruled by Alice."<<endl;
        }
        else if(ch=='y'){
                cout<<"Case #"<<i<<": " <<s<<" is ruled by nobody."<<endl;

        }
        else {
             cout<<"Case #"<<i<<": " <<s<<" is ruled by Bob."<<endl;
        }



    }








}
