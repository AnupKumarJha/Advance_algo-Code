#include<bits/stdc++.h>
using namespace std;
int main(){
    ifstream file1;
    file1.open("input.txt");
    char ch;
    string line;
    ofstream file2;
    int line_count=0;
    
    file2.open("output.txt");
    while(!file1.eof()){
        line_count++;
        getline(file1,line);
        cout<<line<<"\n";
        file2<<line<<"\n";
    }
    cout<<line_count;
}
