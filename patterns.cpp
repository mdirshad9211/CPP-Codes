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


cout<<endl;

    //Pattern 6
    for(int i = 1; i<=n; i++){
                    cout<<"*";

        for(int j = 1; j<n-1; j++){
           if(i ==1 || i== n){
            cout<<"*";
           } else{
            cout<<" ";
           }
            
        }
        cout<<"*"<<endl;
    }


    //Pattern 11
    bool val = true;
    for (int i = 0; i< n; i++)
    {
        for(int j = 0; j<i; j++){
            cout<<val;
            val = !val;
        }
        cout<<endl;
    }


    //Pattern 12
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i; j++){
            cout<<" ";
        }

        for(int j = 0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }


    //Pattern 13
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i; j++){
            cout<<" ";
        }

        for(int j = i; j>=1; j--){
            cout<<j;
        }
        for(int j = 2; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }



    
    
}