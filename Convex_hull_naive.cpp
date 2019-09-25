#include<bits/stdc++.h>
using namespace std;
class points{
    public :
    int x,y;
    
    
};

bool Direcction(points p1,points p2,points p3){
    int a=((p2.x-p1.x)*(p3.y-p1.y)-(p3.x-p1.x)*(p2.y-p1.y));
    
    if(a>0||a==0) return 0;
    else return 1;
    
}

void convex_hull(points arr[],int n){
    bool flag=false ;
     typedef pair<int ,int > pairs;
    set<pairs> E;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            int count=0;
           // flag=true;
            if(i==j)continue;
            else {
                
                for(int k=0;k<n;k++){
                    if(k==i||k==j)continue;
                    else{
                        if(Direcction(arr[i],arr[j],arr[k])==0) count++;
                       // break;//left of line =0 
                    }
                    //if(flag==false) break;
                }
            }
            if (count==n-2)
           {
               pairs p1=make_pair(arr[i].x,arr[i].y);
               pairs p2=make_pair(arr[j].x,arr[j].y);
               E.insert(p1);
               E.insert(p2);
           }
           else continue;
        }
        
    }
    for(auto x:E){
        cout<<x.first<<x.second;
        cout<<"\t";
    }
    //set<pairs>::iterator it;
    //for(it=E.begin();it!=E.end();it++){
    //    cout<<it.first<<it.second;
  //  }
    
}


int main()
{
    int n;
    cin>>n;
    points arr[n];
    for(int i=0;i<n;i++)
{
    int x,y;
cin>>arr[i].x>>arr[i].y;
    
}    

convex_hull(arr,n);


}
