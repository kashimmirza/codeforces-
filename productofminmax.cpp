#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
    int a[100001];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){


        cin>>a[i];

    }
    if(n<=2){
            long long sum=a[n-1]*a[n-2];


        cout<<sum<<endl;
       continue;
    }
    long long sum=0;
    for(int i=0;i<n;i++){


            int j=i+1;



            long long sum2=a[i]*a[j];
            if(sum2>sum){
                sum=sum2;
            }

        }




    cout<<sum<<endl;




}





}
