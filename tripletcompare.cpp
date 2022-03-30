#include<bits/stdc++.h>
using namespace std;
int main(){

vector<int> a1(3);
vector<int>b1(3);

for(int i=0;i<a1.size();i++){
    cin>>a1[i];



}
for(int i=0;i<b1.size();i++){
    cin>>b1[i];



}
vector<int>r1(3);
for(int i=0;i<a1.size();i++){
        if(a1[i]>b1[i]){
            r1[0]++;


        }
        else if(a1[i]<b1[i]){
            r1[1]++;
        }



}
cout<<r1[0]<<" "<<r1[1]<<endl;






}
