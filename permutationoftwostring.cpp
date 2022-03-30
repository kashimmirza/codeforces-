#include<bits/stdc++.h>
using namespace std;
int main(){
string s1,s2;
cin>>s1;
cin>>s2;
int len=s1.size();
int len2=s2.size();
vector<char>sn(26,0);
vector<char>sn2(26,0);
int j=0;
int i=0;
for(int i=0;i<len;i++){
    sn[s1[i]-'a']++;
    cout<<sn[i]<<endl;
}

while(j<len2){
    sn2[s2[j]-'a']++;
    if(j-i==len){
        sn2[s2[j]-'a']--;
        i++;


    }
    if(j-i==len-1){
        if(sn==sn2){
            cout<< "Tru"<< endl;


        }
        else{
            cout<<"false"<<endl;
        }
    }
    j++;


}



}








