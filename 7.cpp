#include<iostream>
#include <climits>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int rev=0;  //This will store Reversed number
    while(x!=0)
    {
        int digit=x%10;    //Take last digit
        if(rev>INT_MAX/10 or rev<INT_MIN/10)    //Check condition before multiplying by 10
        {
            return 0;
        }
        rev=rev*10+digit;   //Add digit to reverse 
        x=x/10;             //remove last digits
    }
    cout<<"Reversed number is :"<<rev;
    return 0;
}