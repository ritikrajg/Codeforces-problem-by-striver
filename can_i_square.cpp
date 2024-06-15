#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        long long a,v=0;
        vector<long long> num;
        cin>>a;
        for(long long j=0;j<a;j++){
            long long b;
            cin>>b;
           num.push_back(b);
        }
        for(long long j=0;j<a;j++){
           
           v+=num[j];
           
        }
        long long sr=sqrt(v);
        if(v==sr*sr){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}