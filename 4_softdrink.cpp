#include<iostream>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a=(k*l)/(nl*n);
    int b=p/(np*n);
    int e=(c*d)/n;
    if(a<b && a<e){
        cout<<a;
    }
    else if(e<b && e<a){
        cout<<e;
    }
    else{
        cout<<b;
    }
    return 0;
}