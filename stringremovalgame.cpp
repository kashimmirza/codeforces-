#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    vector<int>a;
    int c=0;
    s.push_back('0');
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
                c++;



        }
        else{


            a.push_back(c);
            c=0;
        }

    }

    sort(a.rbegin(), a.rend());
    int total=0;


        for(int i=0;i<a.size();i++){

        if(i%2==0){
            total+=a[i];


        }
    }
    cout<<total<<endl;




}





}
