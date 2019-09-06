//code to create the struct n c++
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>

using namespace std;

struct model{
  int ID;
  int year;
  char Model_no[20];
  
    
} models[100];
///*
void   printing(model car_type){
    cout<<car_type.ID<<"\n";
    cout<<car_type.year<<"\n";
    cout<<car_type.Model_no;
    
  //  return 0;
}// */



int main()
{
    for(int i=0;i<100;i++){
        models[i].ID=i;
        models[i].year=2017;
        strcpy(models[i].Model_no,"fast and furious");
        
        printing(models[i]);
    }

    return 0;
}
