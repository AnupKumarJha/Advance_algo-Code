
#include <bits/stdc++.h>
using namespace std; 
struct Point			
{
    int x, y;
} ;

int Direction(Point p1, Point p2, Point p3)
{
    int a = (p2.y - p1.y) * (p3.x - p2.x) -
              (p2.x - p1.x) * (p3.y - p2.y);
    if (a == 0) return 0; 	 
    return (a > 0)? 1: 2; 	
}
int main()
{
   

    int max_size=1000;
    Point points1[max_size];
    for(int i=0;i<max_size;i++){
        points1[i].x=0;
        points1[i].y=0;
    }
    
    ifstream file1;
    file1.open("input.txt");
   
    
   
    int x=0,y=0;
    char ch;
    int index=0;
while(!file1.eof()){
    file1.get(ch);
    if(ch==' ')x++;
    if(ch=='p'){
       
        points1[index].x=x;
        points1[index].y=y;
         x++;
        index++;
        
    }
    if(ch=='\n'){
        x=0;
        y++;
    }
}
file1.close();
    int n=0;
    for(int i=0;i<max_size;i++){
        if(points1[i].x==0&&points1[i].y==0) break;
          n++;
    }
    Point points[n];
    Point temp[n];
    int is_point[n];
    for(int i=0;i<n;i++){
        points[i].x=points1[i].x;
        temp[i].x=points1[i].x;
        points[i].y=points1[i].y;
        temp[i].y=points1[i].y;
        is_point[i]=0;
    }
    vector<Point> convex_hl;
    
    int l = 0;
    for (int i = 1; i < n; i++)
        if (points[i].x < points[l].x)
            l = i;
    
    int p = l, r;
    do
    {
        convex_hl.push_back(points[p]);
        r = (p+1)%n;
        for (int i = 0; i < n; i++)
        {
        if (Direction(points[p], points[i], points[r]) == 2)
               r = i;
        }
       
        p = r;
    } while (p != l); 
    
    for (int i = 0; i < convex_hl.size(); i++){
    
             for(int j=0;j<n;j++){
                 if(convex_hl[i].x==temp[j].x&&convex_hl[i].y==temp[j].y)is_point[j]=1;
             }
        }
      
      file1.open("input.txt");
 int index1=0;
ofstream file2;
file2.open("output.txt");
char ch2;

while(!file1.eof()){
     file1.get(ch2);
     if(ch2=='\n')file2<<ch2;
     if(ch2=='p')
        {
           if(is_point[index1]==1){
            ch2='*';
            file2<<ch2;
            }
    else file2<<ch2;
        index1++;
        }
    if(ch2==' ')file2<<ch2;
    }
      return 0;
    
}
