#include<bits/stdc++.h>
using namespace std;


int fun_cal(int n,int arr[],int a){
    int val=0;
    for(int i=0;i<=n;i++){
        val+=arr[i]*a^n;
    }
    return val;
    
}

int main(){
    
    
    int n;
    cout<<"enter the ma power of poly\n";
    cin>>n;
    int arr[n+1];
    cout<<"enter the value of each coeeff  starting from high to low\n";
    for(int i=0;i<=n;i++){
        cin>>arr[i];
        
    }
    
    int a;
    int b;
    cout<<"enter the first estimation\n";
    cin>>a>>b;
    int counter=0;
    while((int)((100*abs(a-b))/1000)!=0){
        cout<<counter<<"\n";
        int f1=fun_cal(n,arr,a);
        int f2=fun_cal(n,arr,b);
        int c=(a*f2-b*f1)/(f2-f1);
        if(f1*f2<0)
        b=c;
        else a=c;
        
    }
    cout<<a;
    
    return 0;
}
