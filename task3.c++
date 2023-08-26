#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int rockpaperscissor(char comp,char you)
{
    int scissor,rock,paper;
    if(you==comp)
    {
        return 0;
    }
    else if(you=='r' && comp=='p')
    {
        return -1;
    }
    else if(you=='p' && comp=='r')
    {
        return 1;
    }
    else if(you=='r' && comp=='s')
    {
        return 1;
    }
    else if(you=='s' && comp=='r')
    {
        return -1;
    }
    else if(you=='p' && comp=='s')
    {
        return -1;
    }
    else if(you=='s' && comp=='p')
    {
        return 1;
    }
}

int main()
{
    int rock,paper,scissor;
    char you,comp;
    int number,result;
    srand(time(0));
    number = rand()%100+1;
    if(number<33)
    {
        comp='r';
    }
    else if(number>33 && number<66)
    {
        comp='p';
    }
    else{
        comp='s';
    }
    cout<<"Enter rock,paper,scissior "<<endl;
    cin>>you;
    string str1;
    if(you=='p')
    {
        str1="paper";
    }
    else if(you=='s')
    {
        str1="scissor";
    }
    else
    {
        str1="rock";
    }
    string str2;
    if(comp=='p')
    {
        str2="paper";
    }
    else if(comp=='s')
    {
        str2="scissor";
    }
    else
    {
        str2="rock";
    }
    cout<<"You choosed "<<str1<<" and computer chooses "<<str2<<endl;
    result = rockpaperscissor(comp,you);
    if(result==0)
    {
        cout<<"Match draw"<<endl;
    }
    else if(result==1)
    {
        cout<<"You won"<<endl;
    }
    else
    {
        cout<<"You lose"<<endl;
    }
    return 0;
}
