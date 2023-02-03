#include<iostream>
using namespace std;
int digitSum(int number );
main()
{
    int number ;
    int digit ;
    int sum;
    cout << "Enter a number : ";
    cin >> number ;
    sum = digitSum( number );
    cout << "Sum: " << sum; 

}
int digitSum(int number )
{
    int sum = 0 , num01 , num02 = 1;
    while( num02 > 0)
    {
        num01 = number % 10;
        num02 = number / 10;
        sum = sum + num01;
        number = num02;
    }
    return sum;

}