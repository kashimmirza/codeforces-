#include<bits/stdc++.h>
using namespace std;
int a[101];

void reverse(int a[], int i, int j){
 a[j-1]=a[i-1];



}
int main(){
int n;
int t;

cin>>t;
for(int c=1;c<=t;c++){
        cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];

}

int j=0;
int sum=0;
int mi=0;
int index=0;


for(int i=0;i<n-1;i++){
        mi=a[i];
        index=i;

        for(j=i;j<n;j++){
                if(mi>=a[j]){
                    mi=a[j];
                    index=j;
                    //cout<<index<<"indexofminimum"<<endl;

                }


        }
        cout<<"indexofindex"<<index<<endl;
        sum+=index-i+1;
        cout<<sum<<"***"<<endl;
        reverse(a, i, index);
        for(int m=0;m<n;m++){
            cout<<a[m]<<" ";
        }








        }
        cout<<sum<<endl;






}



}









