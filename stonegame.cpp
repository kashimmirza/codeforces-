#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int a[1001];
while(t--){
   int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];


  }
  int min_value=a[0];
  int min_index1=0;
  int min_index2=0;

  int max_index1=0;
  int max_index2=0;
  for(int i=1;i<n;i++){
    if(a[i]<=min_value){
        min_value=a[i];
        min_index1=i;

    }
    if(a[i]>=min_value){
        min_value=a[i];
        max_index1=i;
    }
  }
  min_value=a[n-1];
   for(int i=n-1;i>=0;i--){
    if(a[i]<=min_value){
        min_value=a[i];
        min_index2=i;

    }
    if(a[i]>=min_value){
        min_value=a[i];
        max_index2=i;
    }
  }
  min_index2=n-min_index2-1;
  min_index2=min(min_index2, min_index1);
  max_index2=n-max_index2-1;
  max_index2=min(max_index2,max_index1);
  cout<<min_index2+max_index2<<endl;


  }




}



