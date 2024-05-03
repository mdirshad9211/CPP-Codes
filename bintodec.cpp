#include<iostream>
using namespace std;

void decToBinary(int dec){
    int n = dec;
    int pow = 1;
    int bin = 0;
    while(n>0){
        int rem = n%2;
        bin= bin + rem*pow;
        n= n/2;
        pow= pow*10;
    }
    cout<<bin<<endl;
}


void binToDec(int bin){
    int n = bin;
    int pow = 1;
    int dec = 0;
    while(n>0){
        int lastDig = n % 10;
        dec= dec + lastDig * pow;
        pow= pow*2;
        n= n/10;
    }
    cout<<dec<<endl;
}

int main(){
    decToBinary(10);
    binToDec(101);
    decToBinary(134);
    binToDec(10000110);

    return 0;
}