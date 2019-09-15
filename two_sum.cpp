#include<bits/stdc++.h>
using namespace std;
struct index{
    
int L,R;    
    
} indx;

int  main(){
    
int arr[]={1,4,2,8,7,5,6};
int *temP_arr=arr;
int targert=11;
int len=sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+len);
int i=0;
int  j=len-1;
while(i<j){
    if(targert==(arr[i]+arr[j])){
        indx.L=i;
        indx.R=j;
        //cout<<indx.L<<indx.R;
        break;
    }
    
    if(targert>(arr[i]+arr[j]))i++;
    else j--;
    
}
int a=arr[indx.L];
int b=arr[indx.R];
for(int i=0;i<len;i++){
    if(temP_arr[i]==a) indx.L=i;
    if(temP_arr[i]==b) indx.R=j;
    
    
}

cout<<indx.L<<" "<<indx.R;
    
}
