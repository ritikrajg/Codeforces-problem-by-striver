#include<iostream>
using namespace std;
int main(){
    long long a;
    int c=0;
    cin>>a;
    while(a!=0){
        int b=a%10;
        a/=10;
        if(b==7 || b==4){
            c++;
        }
    }
    if(c==7 || c==4){
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
    return 0;
}