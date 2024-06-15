#include<iostream>
#include<vector>
using  namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> a;
  for(int i=0;i<n;i++){
    int b;
    cin>>b;
    a.push_back(b);
  }
  vector<int> d(n,0);
  for(int i=0;i<n;i++){
    d[a[i]-1]=i+1;
  }
  for(int i=0;i<n;i++){
    cout<<d[i]<<" ";
  }
  return 0;
}