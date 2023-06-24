#include<iostream>
using namespace std;
int main(){
    int n;
    float p=0,x=0,z=0;
    cin>>n;
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>0){
            p++;
        }
        else if(a[i]<0){
            x++;
        }
        else{
            z++;
        }
    }
    cout<<float(p/n)<<endl;
    cout<<float(x/n)<<endl;
    cout<<float(z/n)<<endl;
    return 0;
}
