#include<iostream>
using namespace std;
float calculatePrice(float money , int year);
main()
{
    int year;
    float inheritance;
    float finalMoney;
    cout << "Enter Money that inherited : ";
    cin >> inheritance;
    cout << "Enter Year : ";
    cin >> year;
    finalMoney = calculatePrice(inheritance , year);
    if(finalMoney < 0)
    {
        finalMoney = (-1) * finalMoney;
        cout << "He will need " << finalMoney << " dollar to survive.";
    }
    else
    {
        cout << "Yes! He will live a carefree life and will have " << finalMoney << " dollars left.";
    }

}
float calculatePrice(float money , int year)
{
    int age = 18;
    float money01 = 0 , money02 = 0; 
    float money03 ;
    for(int count = 1800 ; count <= year ; count = count + 1)
    {
        if (year % 2 == 0)
        {
            money01 = money01 + 12000;
        }
        else if (year % 2 == 1)
        {
            money02 = money02 + (12000 + (50 * age));
        }
        age = age + 1;
    }
    money03 = money01 + money02;
    money = money - money03;
    return money; 
}