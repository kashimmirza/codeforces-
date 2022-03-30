#include<iostream>
#include<string>
using namespace std;
int main(){
long long l;
cin>>l;
long long i;
for( i=0; ;i++) if(stoll(to_string(i) + to_string(i)) > l){
                       cout<<i-1<<endl;
                       return 0;


    }


}







