
#include<bits/stdc++.h>
using namespace std;


struct Point
{
    int x, y;
};

Point p0;

int Distance (Point p1, Point p2)
{
    return (p1.x - p2.x)*(p1.x - p2.x) +
          (p1.y - p2.y)*(p1.y - p2.y);
}

int Direction(Point p1, Point p2, Point p3)
{
    int a = (p2.y - p1.y) * (p3.x - p2.x) -
              (p2.x - p1.x) * (p3.y - p2.y);
    if (a == 0) return 0;  
    return (a> 0)? 1: 2;  
}

int cmp(const void *vp1, const void *vp2)
{
   Point *p1 = (Point *)vp1;
   Point *p2 = (Point *)vp2;
   int o = Direction(p0, *p1, *p2);
   if (o == 0)
     return (Distance (p0, *p2) >= Distance (p0, *p1))? -1 : 1;
   return (o == 2)? -1: 1;
}


Point nextToTop(stack<Point> &S)
{
    Point p = S.top();
    S.pop();
    Point rest = S.top();
    S.push(p);
    return rest;
}

int main(){
    
    
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
    
  
 int ymin = points[0].y, min = 0;
   
   for (int i = 1; i < n; i++)
   {
     int y = points[i].y;
   
     if ((y < ymin) || (ymin == y &&
         points[i].x < points[min].x))
        ymin = points[i].y, min = i;
   }
   
   swap(points[0], points[min]);
   
   p0 = points[0];
   qsort(&points[1], n-1, sizeof(Point), cmp);
   
   stack<Point> S;
   S.push(points[0]);
   S.push(points[1]);
   S.push(points[2]);
   for (int i = 3; i < n; i++)
   {
      while (Direction(nextToTop(S), S.top(), points[i]) != 2)
         S.pop();
      S.push(points[i]);
   }
  
   while (!S.empty())
   {
       Point p = S.top();
       for(int i=0;i<n;i++){
           if(p.x==temp[i].x&&p.y==temp[i].y)is_point[i]=1;
         
       }
       
       S.pop();
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
