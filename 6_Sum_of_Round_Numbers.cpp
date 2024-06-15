#include<iostream>
#include<vector>
#include<stack>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
       int d;
       cin>>d;
       a.push_back(d);
    }
    for(int i=0;i<n;i++){
        stack<int> b;
        int d=a[i];
        for(int j=0;d!=0;j++){
            int e=d%10;
            d=d/10;
            int f=pow(10,j);
            if(e>0){
                e=e*f;
                b.push(e);
            }
        }
        cout<<b.size()<<endl;
        while(!b.empty()){
            cout<<b.top()<<" ";
            b.pop();
        }
        cout<<endl;
    }
}