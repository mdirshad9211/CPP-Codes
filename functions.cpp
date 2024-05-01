#include<iostream>
using namespace std;


//function to add 2 Numbers
int sum(int num1, int num2){
    int sum = num1+ num2;
    return sum;
}
//Function Overloading
int sum(int num1, int num2, int num3){
    int sum = num1+ num2 + num3;
    return sum;
}

int main(){

    int num1 =14;
    int num2 = 35;
    int num3 = 13;

    cout<<sum(num1, num2)<<endl;
    cout<<sum(num1, num2,num3);
    

    return 0;
}