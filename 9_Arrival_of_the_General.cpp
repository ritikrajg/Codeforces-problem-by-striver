#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max=INT_MIN,min=INT_MAX,l,r;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(max<temp){
            max=temp;
            l=i;
        }
        if(min>=temp){
            min=temp;
            r=i;
        }
    }
    int v;
    if(l>r){
       v=l+(n-1)-r-1;
    }
    else{
       v=l+n-1-r;
    }
    cout<<v;
    return 0;
}