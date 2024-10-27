#include <iostream>

int main (){
    int amountOfMoney;
    std::cout<<"how much money do you want"<<std::endl;
    std::cin>>amountOfMoney;
    int fiveEuros;
    int tenEuros;
    int twentyEuros;
    int fiftyEuros;
    int sum=0;
    std::cout<<"how much of each banknote do you have"<<std::endl;
    std::cin>>fiveEuros>>tenEuros>>twentyEuros>>fiftyEuros;
    if(amountOfMoney%fiftyEuros==0){
        std::cout<<amountOfMoney/fiftyEuros<<" banknotes of 50"<<std::endl;
    }
    else {
        sum=amountOfMoney%fiftyEuros;
        std::cout<<amountOfMoney/fiftyEuros<<" banknotes of 50"<<std::endl;
        if(sum%)
    }

    return 0;
}