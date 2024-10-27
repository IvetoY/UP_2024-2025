#include <iostream>

int main (){
    int dayOfTheWeek;
    std::cout<<"choose a day of the week using numbers 1-7 "<<std::endl;
    std::cin>>dayOfTheWeek;
    switch(dayOfTheWeek){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        std::cout<<"it is a working day"<<std::endl;
        break;
        case 6:
        case 7:
        std::cout<<"it is a weekend";
        break;
    }
    return 0;
}