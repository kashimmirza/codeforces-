#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, a;
    cin>>n>>k>>a;
     int ans ;
     ans= (k+a-1)%n;
    if(ans ==0){
        cout<<n<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }
}







