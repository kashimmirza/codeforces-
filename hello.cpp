#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
string s;
while(t--){


    cin>>s;
    int len = s.size();

    int pos;
    char ch ;
    cin>>ch;
    for(int i=0;i<len;i++){

        if(ch ==s[i]){

            pos = i;
            if(((pos-0)%2==0)&&((len-pos)%2)==0){

                printf("YES\n");
            }
            else{

                cout<<"NO"<<endl;
            }

        }
    }





}
}
