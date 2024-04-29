#include<iostream>
using namespace std;

int main(){
    //Pattern 1
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<j;
        }
        cout<<endl;
        
    }


    //Pattern 2

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j<i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }


    //Pattern 3
    for (int i = n; i> 0; i--)
    {
        for(int j = 0; j<i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //Pattern 4

    for (int i = 0; i< n; i++)
    {
            int cnt = 1;

        for(int j = 0; j<i; j++){
            cout<<j;
        }
        cout<<endl;
    }


    //Pattern 5
    char ch = 'A';
     for (int i = 0; i< n; i++)
    {

        for(int j = 0; j<i; j++){
            cout<<ch++;
        }
        cout<<endl;
    }



    
    
}