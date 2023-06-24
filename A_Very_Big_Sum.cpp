#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long int *a = new long int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long int sum=0;
    for(int i=0;i<n;i++){
        sum = sum+a[i];
    }
    cout<<sum;
    return 0;
}
