#include<bits/stdc++.h>
using namespace std;
int n=10001;
vector<int>re(n);
vector<int> closestNumbers(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int sm1= abs(arr[0]-arr[1]);
    vector<int>re;
    re[0]=arr[0];
    re[1]=arr[1];
    int c=2;
    for(int i=1,  j=i+1;i<arr.size()-1;i++){
        if(abs(arr[i]-arr[j])==sm1){
            re[c]=arr[i];
            re[c++]=arr[j];


        }
    }
    return re;
}
int main(){
   vector<int>arr;
   int x;
   for(int i=0;i<10;i++){
        cin>>x;
    arr.push_back(x);


   }
   closestNumbers(arr);


   for(int i=0;i<re.size();i++){
    cout<<re[i]<<" ";
   }
   cout<<endl;






}
