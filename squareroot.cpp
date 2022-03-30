#include<bits/stdc++.h>
using namespace std;
signed int  main(){
int t;
cin>>t;
int n;

int x;

bool sq[10000+1];
for(int i=1;i*i<=10000;i++){
    sq[i*i]=1;


}
while(t--){
    scanf("%d",&n);
    bool ok=1;
    int x;

    for(int i=1;i<=n;i++){

        scanf("%d",&x);
        ok&=sq[x];



    }


    puts(ok? "NO":"YES");
}







}
