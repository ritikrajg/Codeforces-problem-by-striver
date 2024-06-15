#include<iostream>
using namespace std;
int main(){
    int k,l,m=0;
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
              k=i;
              l=j;
            }
        }
    }
    while(k!=2){
        if(k>2){
            k--;
            m++;
        }
        else{
            k++;
            m++;
        }
    }
    while(l!=2){
        if(l>2){
            l--;
            m++;
        }
        else{
            l++;
            m++;
        }
    }
    cout<<m;
    return 0;
}