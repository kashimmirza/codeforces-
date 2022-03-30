#include<bits/stdc++.h>
using namespace std;
int f(long long  n){
long long  sum=0;
for(long  x=2;x<=n;x++){
        sum+= pow(x,x)%(x-1);




}
return sum;



}
int main(){
long long n;
cout<<f(n)<<endl;





}
