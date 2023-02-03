#include<iostream>
using namespace std;
int frequencyChecker(int number , int digit);
main()
{
    int number ;
    int digit ;
    int frequency;
    cout << "Enter a number : ";
    cin >> number ;
    cout << "Enter Digit : ";
    cin >> digit;
    frequency = frequencyChecker(number , digit);
    cout << "Frequency : " << frequency; 

}
int frequencyChecker(int number , int digit)
{
    int num = 0 , num01 , num02 = 1;
    while( num02 > 0)
    {
        num01 = number % 10;
        num02 = number / 10;

        if (num01 == digit)
        {
            num = num + 1;
        }
        number = num02;
    }
    return num;

}