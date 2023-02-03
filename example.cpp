#include<iostream>
using namespace std;

main()
{
    string input;
    cout << "Are you happy? " ;
    cin >> input ;
    while(input != "yes")
    {
        cout << "Invalid answer . Try again. " << endl ;
        cout << "Are you happy? " ;
        cin >> input;
    }
    cout << endl;
    for(int number = 0 ; number <= 10 ; number = number + 1)
    {
        cout << "I am Happy ! \t " ;
    }
    cout << endl;
    for(int counter = 0; counter <= 100 ; counter = counter + 1)
    {
        cout << counter << "\t";
    }
    cout << endl;
    for(int counter = 1; counter <= 100 ; counter = counter + 1)
    {
        if (counter % 2 == 0)
        {
            cout << counter << "\t";
        }
    }
    cout << endl;
    int sum = 0;
    for(int num =0 ; num <= 10 ; num++)
    {
        sum = sum + num;
    }
    cout << sum;
    cout << endl;
    sum = 0;
    for(int num = -1 ; num <= 5 ; num++)
    {
        sum = sum + num;
    }
    cout << sum;    

}