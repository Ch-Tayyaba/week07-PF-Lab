#include<iostream>
using namespace std;
void printPercentage(int totalNumber);
main()
{
    int totalNumber;
    cout << "Enter total Numbers : ";
    cin >> totalNumber;
    printPercentage(totalNumber);
}
void printPercentage(int totalNumber)
{
    float number;
    float  num01 = 0 , num02 = 0 , num03 = 0 , num04 = 0 , num05 = 0;
    float p , p1 ,p2 , p3 , p4 , p5;
    int counter = 1 ;
    while (counter <= totalNumber)
    { 
        cout << "Enter a number : ";
        cin >> number;
        if (number <= 1000)
        {
          if(number >= 1 && number < 200)
            {
                num01 = num01 + 1;
            }
            else if(number >=200  && number < 400)
            {
                num02 = num02 + 1;
            }
            else if(number >= 400 && number < 600)
            {
                num03 = num03 + 1;
            }
            else if(number >= 600 && number < 800)
            {
                num04 = num04 + 1;
            }
            else
            {
                num05 = num05 + 1;
            }
        }
        counter = counter + 1;    
    }
    p1 = (num01 * 100) / totalNumber;
    p2 = (num02 * 100) / totalNumber;
    p3 = (num03 * 100) / totalNumber;
    p4 = (num04 * 100) / totalNumber;
    p5 = (num05 * 100) / totalNumber;
    cout << p1 << "%" << endl;
    cout << p2 << "%" << endl;
    cout << p3 << "%" << endl;
    cout << p4 << "%" << endl;
    cout << p5 << "%" << endl;
}