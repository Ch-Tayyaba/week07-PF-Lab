#include<iostream>
using namespace std;
int totalDigit(int number);
main()
{
    int number;
    int digit;
    cout << "Enter a number : ";
    cin >> number;
    digit = totalDigit(number);
    cout << "DIGIT : " << digit;
}
int totalDigit(int number)
{
    int counter = 0;
    while(number > 0)
    {
        number = number / 10;
        counter = counter + 1;
    }
    return counter;
}

