#include<iostream>
using namespace std;
int main(){
    int n,sum1=0,sum2=0;
    cin>>n;
    int a[100][100];
    for(int i =0 ; i<n ;i++){
        for(int j=0 ;j<n ; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0 ; i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum1 = sum1 + a[i][j];
            }
        }
    }
    for(int i=0 ; i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)==(n-1)){
                sum2 = sum2 + a[i][j];
            }
        }
    }
    if(sum1>sum2){
        cout<<sum1-sum2<<endl;
    }
    else{
        cout<<sum2-sum1<<endl;
    }
    return 0;
}
