#include<iostream>

using namespace std;
int main(){
    int a[100],bob=0;
    int b[100],alice=0;
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    for(int i=0;i<3;i++){
        cin>>b[i];
    }
    
    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            bob++;
        }
        else if(a[i]<b[i]){
            alice++;
        }
        else{
            bob+=0;
            alice+=0;
        }
    }
    cout<<bob<<" "<<alice;
    return 0;
}
