#include<iostream>
using namespace std;

int main(){
    //if else condition
    int age;
    cin>>age;

    if(age>= 18){
        cout<<"Can Vote";
    }else{
        cout<<"Can not Vote";
    }


    // else if condition
    int marks; 
    cin>>marks;
    if(marks >= 90){
        cout<<"A";
    } else if(marks >= 80){
        cout<<"B";
    }else{
        cout<<"C";
    }

    //ternary statement

    bool isAdult = (age >=18) ? true: false;
    cout<<endl<<isAdult;



    //switch statement
    int day; 
    cin>>day;

    switch (day)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thursday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
        cout<<"Sunday";
        break;
    default: cout<<"Invalid";
        break;
    }

    return 0;
}