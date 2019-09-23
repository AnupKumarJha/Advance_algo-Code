     #include<bits/stdc++.h>
using namespace std;

struct Points{
  int x,y;  
};

int direction(Points arr[]){
    
    auto det=(arr[0].x*arr[1].y-arr[1].x-arr[0].y);
    if (det>0) return 1;
    else return 0;
}
int main(){
    int n;
    cin>>n;
    Points arr[n];
    int x,y;
    

    
    for(int i=0;i<n;i++){
        cout<<"enter the p"<<i+1<<"\n";
        cin>>arr[i].x>>arr[i].y;
        
    }
    int k=direction(arr);
    if (k>0)cout<<"p1 is clock wise to p2 wrt origin\n";
    else cout<<"p1 is clock wise to p1 wrt origin";
return 0;
}
