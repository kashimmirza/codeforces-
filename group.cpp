#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n][5];
    for(int i=0;i<n;i++){

        for(int j=0;j<5;j++){
            cin>>a[i][j];


        }
    }
    int c2=0;
    for(int i=0;i<n;i++){
            int c1=0;

        for(int j=0;j<5;j++){

            if(a[j][i]==1){
                    cout<<a[j][i]<<endl;
                    //*cout<<c1++;
            }
        }

        //*cout<<" ";
        //*cout<<c1<<endl;
        if(c1==n/2){
            c2++;
        }
    }
    if(c2==2){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;




}





}
