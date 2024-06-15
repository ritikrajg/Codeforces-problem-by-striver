#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long a;
    int c;
    cin>>a;
    vector<int> b;
    while(a!=0){
    c=a%10;
    b.push_back(c);
    a=a/10;
    }
    
    for(int i=0;i<b.size();i++){
        if(b[i]>4){
          b[i]=9-b[i];
        }
    }
    int s=b.size();
    if(b[s-1]==0){
      a=9;
    }
    else{
        a=b[s-1];
    }
    for(int i=s-2;i>=0;i--){
        a=a*10+b[i];
    }
    cout<<a;
    return 0;
}