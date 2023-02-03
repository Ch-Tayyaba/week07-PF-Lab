#include<iostream>
using namespace std;
int sumOfNumbers(int number);
main()
{
    int number = 100;
    int sum;
    sum = sumOfNumbers(number);
    cout << "Sum  : " << sum;
}
int sumOfNumbers(int number)
{
    int sum = 0;
    for(int  num = 1 ; num <= number  ; num ++)
    {
        sum = sum + num;
    }
    return sum;
}