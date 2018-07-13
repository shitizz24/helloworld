#include<bits/stdc++.h>
using namespace std;
bool subsetsum(int *a,int s){
if(a[0]==0 && s!=0){return false;}
if(s==0){return true;}
if(a[1]==0){
if(a[0]==s)return true;
else
 return false;}
 if(subsetsum(a+1,s-a[0]))
  return true;
 if(subsetsum(a+1,s))
  return true;
else
 return false;
 }
 int main(){
int n;
cin>>n;
int *a=new int[n];
for(int i=0;i<n;i++){cin>>a[i];}
int s;
cin>>s;
if(subsetsum(a,s)){cout<<"YES"<<endl;}
else
 {cout<<"NO"<<endl;}
 return 0;
 }

