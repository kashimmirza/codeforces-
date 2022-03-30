#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){

    int n, a, b;
    cin>>n>>a>>b;
    int arr[n];
    vector<int>h1, h2;
    for(int i=0;i<n;i++){


        cin>>arr[i];
    }
    for(int i=0;i<n;i++){

        if(arr[i]<=a){

            h1.push_back(arr[i]);
        }
        else
            h2.push_back(arr[i]);
    }
    int mini= min(h1.size(), h2.size());
    int c=0;
    for(int i=0, j=i+1;i<mini;i++){
            arr[c]=h1[i];
             c++;
             arr[c]=h2[j];
             c++;


    }
    int rem=0;
    if(h1.size()>=h2.size()){

        rem=h1.size()-h2.size();
    }
    else
        rem=h2.size()-h1.size();


if(h1.size()>h2.size()){
for(int i=c;i<rem;i++){

    arr[i]=h1[i];
}
}
else{

    for(int i=c;i<rem;i++){

        arr[i]=h2[i];
    }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;



}
}
