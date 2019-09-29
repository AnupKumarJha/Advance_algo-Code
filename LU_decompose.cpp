#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
   
    int p[n];
    for(int i=0;i<n;i++){
        p[i]=i;
    }
    
    for(int i=0;i<n;i++){
        //////////////////////////////////////
        double pivot=arr[i][i];
        int index=i;
        for(int k=i;k<n;k++){
            if(pivot<abs(arr[k][i])) {
                pivot=arr[k][i];
            index=k;
            }
        }
        ///////////////////////////////////////
    swap(p[i],p[index]);
    for(int l=0;l<n;l++){
        swap(arr[i][l],arr[index][l]);
    }
    
    for(int t=i+1;t<n;t++){
        arr[t][i]=arr[t][i]/arr[i][i];////////
        for(int m=i+1;m<n;m++){
            arr[t][m]=arr[t][m]-arr[t][i]*arr[i][m];/////////
    }
    }

    
    }
    
    for(int t=0;t<n;t++){
        cout<<p[t]<<" ";
    }
    
    cout<<"\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    double l[n][n],u[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j){
                if(i==j){
                    l[i][j]=1;
                    u[i][j]=arr[i][j];
                }
                else {
                u[i][j]=arr[i][j];
                l[i][j]=0;    
                }
                
            }
            else {
                u[i][j]=0;
                l[i][j]=arr[i][j];
            }
        }
    }
    
    cout<<"upper matrix\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<u[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    cout<<"lower matrix\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<l[i][j]<<" ";
        }
        cout<<"\n";
    }
    
return 0;
}
