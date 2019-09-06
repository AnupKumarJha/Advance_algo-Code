\\ c++ program to for constructor
#include<bits/stdc++.h>

using namespace std;


struct product{
int price;
char name[20];
    product(){
       price=10;
          memset(name,0,sizeof(name));
        }
        product(int PRICE)
        {
         price=PRICE;
        }
        product(char st[]){
            memset(name,0,sizeof(name));
            strcpy(name,st);
            
        }





};





int main()
{
    product X(15);
    cout<<"\n";
    product Y("anup");
    cout<<X.price;
    cout<<"\n";
    cout<<Y.name;
return 0;
}
