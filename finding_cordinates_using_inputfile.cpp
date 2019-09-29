#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream file1;
    file1.open("input.txt");
    int x=0;
    int y=0;
    //int l=-1;
    char ch;
    
    ofstream file2;
    file2.open("output.txt");
    
    while(!file1.eof()){
        file1.get(ch);
        
        if(ch==' ')x++;
        if(ch=='p') {
            x++;
            
            file2<<"("<<x++<<","<<y<<")"<<"\t";
        }
        if(ch=='\n'){
            y++;
            x=0;
        }
        
    }
}
