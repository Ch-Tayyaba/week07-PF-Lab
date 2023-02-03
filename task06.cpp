#include<iostream>
using namespace std;
int calculateHCF(int number01, int number02);
int calculateLCM(int number01, int number02 , int HCF);
main()
{
    int num01;
    int num02;
    int HCF;
    int LCM;
    cout << "Enter first number : ";
    cin >> num01;
    cout << "Enter second number : ";
    cin >> num02;
    HCF = calculateHCF(num01, num02);
    cout << "HCF : " << HCF << endl;
    LCM = calculateLCM(num01, num02 , HCF);
    cout << "LCM : " << LCM ; 
}
    
int calculateHCF(int number01, int number02)
{
    int HCF, num01 , num02;
    for(int counter = 1 ; counter <= number01 ; counter ++ )
    {
        num01 = number01 % counter;
        num02 = number02 % counter;
        if (num01 == 0 && num02 == 0)
        {
            HCF = counter;
        }
        
    }
    return HCF;
}
int calculateLCM(int number01, int number02 , int HCF)
{
    int LCM ;
    LCM = (number01 * number02) / HCF;
    return LCM;
}
