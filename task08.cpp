#include<iostream>
using namespace std;
float calculateMoney(int age , int toyPrice);
main()
{
    int years;
    int toyPrice;
    float machinePrice;
    float money;
    int leftMoney;
    cout << "How old is Lily ? ";
    cin >> years;
    cout << "Enter Price of ecah toy : ";
    cin >> toyPrice;
    cout << "Enter Price of Machine : ";
    cin >> machinePrice;
    money = calculateMoney(years , toyPrice);
    if(money < machinePrice)
    {
      leftMoney=  machinePrice-money;
        cout << "No! " << leftMoney << " is required";
    }
    else
    {
       leftMoney=  money - machinePrice;
        cout << "Yes! " << leftMoney << " is remaining money.";
    }
}
float calculateMoney(int age , int toyPrice)
{
    int counter = 1;
    int toy = 0;
    int money = 0;
    int even = 1;
    while(counter <= age)
    {
        
        if(counter % 2 != 0)
        {
            toy = toy + 1;
        }
        else
        {
            money = money +(even * 10.00);
            money = money - 1;  
            even = even + 1;      
        }
        counter = counter + 1;
    }
    money = money + (toy * toyPrice);
    return money;
}
