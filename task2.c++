#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    int number,guess,chance=0;
    srand(time(0));
    number = rand()%100+1;
    do
    {
        cout<<"Guess the number: "<<endl;
        cin>>guess;
        if(guess>number)
        {
            cout<<"smaller number please "<<endl;
        }
        else if(guess<number)
        {
            cout<<"Greator number please "<<endl;
        }
        else
        {
            cout<<"you guessed it in "<<chance<<" attempts "<<endl;
        }
        chance++;
    } while (guess!=number);
    
    return 0;
}
