#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n, m;
cin>>n>>m;

char arr[][50]={'a'};

for(int i=0;i<n;i++){

    for(int j=0;j<m;j++){
        cin>>arr[i][j];


    }
}
bool tik=true;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){

        if(arr[i][j]=='.'){
            if((arr[i][j++]=='R'&&arr[i][j--]=='W')||(arr[i][j++]=='W'&&arr[i][j++]=='R')||(arr[i++][j]=='R'&&arr[i--][j]=='W')||(arr[i++][j]=='W'&&arr[i--][j]=='R')){
                tik =false;
                break;
            }


        }
    }
}
if(tik==true){

    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){
            if(arr[i][j]=='.'){
                if(arr[i][j++]=='R'||arr[i][j--]=='R'){

                    arr[i][j]='W';
                }
                else if(arr[i][j++]=='W'||arr[i][j--]=='W'){

                    arr[i][j]='R';
                }
                else if(arr[i++][j]=='R'||arr[i--][j]=='R'){

                    arr[i][j]='W';
                }
                else if(arr[i++][j]=='W'||arr[i--][j]=='W'){

                    arr[i][j]='R';
                }


            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
    }
    cout<<endl;
}
else
    cout<<"NO"<<endl;







}
}
