#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int c=0;

        while(n!=0){
            int s=n%10;
            if(s%4==0||s%7==0){

                c++;
            }
            n=n/10;


        }
        cout<<c<<endl;
    }

    return 0;





}