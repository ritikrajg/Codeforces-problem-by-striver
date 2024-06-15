#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a;
    vector<string> v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    long long m=0;
    for(auto x:v){        
        if(x=="Tetrahedron"){
            m+=4;
        }
        else if(x=="Cube"){
            m+=6;
        }
        else if(x=="Octahedron"){
            m+=8;
        }
        else if(x=="Dodecahedron"){ 
            m+=12;
        }
        else{
            m+=20;
        }
    }
    cout<<m;
}