#include<bits/stdc++.h>
using namespace std;
int main(){
int n, m;

cin>>n>>m;
int present;



int initial=1;
long long int ans =0;
for(int i=0;i<m;i++){
        cin>>present;
    if(initial<= present){
        ans = ans + (present-initial);
    }
    else{
        int dif = initial-present;
        ans =  ans + (n- dif);


    }
    initial= present;



}
cout<<ans<<endl;







}
