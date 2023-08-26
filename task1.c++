#include<iostream>
using namespace std;
int main()
{
    float num1;
    float num2;

    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

    cout<<"Enter the operation you want to perform: "<<endl;
    cout<<"Enter 1 to ADD"<<endl<<"Enter 2 to Subtract"<<endl<<"Enter 3 to Multiply"<<endl<<"Enter 4 to Divide"<<endl;
    int choice;
    cin>>choice;

    switch(choice)
    {
        case 1:
           cout<<"Answer is: "<<num1+num2<<endl;
           break;
        case 2:
           cout<<"Answer is: "<<num1-num2<<endl;
           break;
        case 3:
           cout<<"Answer is: "<<num1*num2<<endl;
           break;
        case 4:
           cout<<"Answer is: "<<num1/num2<<endl;
           break;

        default:
           cout<<"Invalid choice...!"<<endl;
           break;         
    }
    return 0;
}
