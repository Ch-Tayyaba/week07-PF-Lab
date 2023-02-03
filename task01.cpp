#include<iostream>
using namespace std;

main()
{
    int number01 = 0;
    int number02 = 1;
    int input;
    int next;
    cout << "Enter a range for Fibonacci series : ";
    cin >> input;
    cout << number01 << " , " << number02 ;
    input = input - 2;
    for( int count = 1  ;count <= input ; count++)
    {
        next = number01 + number02;
        cout << " , " << next ;
        number01 = number02;
        number02 = next;
    }


}