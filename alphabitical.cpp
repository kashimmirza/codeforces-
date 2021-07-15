#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        size_t L=s.find('a');
        if(L==string::npos){

            cout<<"NO"<<endl;
            continue;
        }
        size_t R=L;

        size_t n=s.length();
        bool yes=true;
        for(size_t i=1;i<n;i++){
            size_t pos= s.find(char('a'+i));
            if(pos == string::npos||(pos!=L-1&&pos!=R+1)){

                yes=false;
                break;
            }
            else
            {
                L= min(L, pos);
                R=max(R, pos);
            }

        }
        if(yes==true){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;




    }






}
