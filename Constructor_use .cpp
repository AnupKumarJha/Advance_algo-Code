//for Introduction to contructor
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

struct student{
    
    int ID,year;
    char name[20];
    
    student() //constructor for initilizizing the variable inside the struct
    {
        ID=6;
        year=2019;
        memset(name,0,sizeof(name));
    }
} student1;

void printing( student st){
    cout<<st.ID<<"\n"<<st.year;
    cout<<st.name;
    
    
}



int main()
{
printing(student1);
    return 0;
}
