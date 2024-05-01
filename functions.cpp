#include<iostream>
using namespace std;


//function to add 2 Numbers
int sum(int num1, int num2){
    int sum = num1+ num2;
    return sum;
}

int main(){

    int num1 =14;
    int num2 = 35;

    int total = sum(num1, num2);
    cout<<total;

    return 0;
}