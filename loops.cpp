#include<iostream>
using namespace std;

int main(){

    //for loops 

    //print N natural numbers
    int n;
    cin>>n;
    for(int num = 0; num<=n; num++){
        cout<<num<<endl;
    }

    //print sum of first N natural numbers
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum+= i;
    }
    cout<<sum;

    //While Loops
    int count = 0;
    while(count <5){
        cout<<endl<<count;
        count++;
    }



    //Do While Loop

    do{
        cout<<count;
    }while(count<5);

    return 0;
}