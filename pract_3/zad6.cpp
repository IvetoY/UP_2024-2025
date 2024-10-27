#include <iostream>

int main (){
    int year;
    int month;
    int day;
    std::cout<<"enter a year"<<std::endl;
    std::cin>>year;
    std::cout<<"enter a month"<<std::endl;
    std::cin>>month;
    std::cout<<"enter a day "<<std::endl;
    std::cin>>day;
    if(year>=0 && year<=2500){
        if(month>=1 && month<=12){
            switch(month){
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                if(day>=0 && day<=31){
                    if(year%4==0 || year%400==0){
                        std::cout<<"Leap year "<<year<<"/"<<month<<"/"<<day<<" is a valid date"<<std::endl;
                    }
                    else {
                        std::cout<<year<<"/"<<month<<"/"<<day<<" is a valid date"<<std::endl;
                    }
                    
                }
                break;
                case 4:
                case 6:
                case 9:
                case 11:
                if(day>=0 && day<=30){
                    if(year%4==0 || year%400==0){
                        std::cout<<"Leap year "<<year<<"/"<<month<<"/"<<day<<" is a valid date"<<std::endl;
                    }
                    else {
                        std::cout<<year<<"/"<<month<<"/"<<day<<" is a valid date"<<std::endl;
                    }
                }
                break;
                case 2:
                if(year%4==0 || year%400==0) {
                    if(day>=0 && day<=29){
                        if(year%4==0 || year%400==0){
                        std::cout<<"Leap year "<<year<<"/"<<month<<"/"<<day<<" is a valid date"<<std::endl;
                    }
                    else {
                        std::cout<<year<<"/"<<month<<"/"<<day<<" is a valid date"<<std::endl;
                    }
                    }
                    else {
                        std::cout<<"invalid date"<<std::endl;
                    }
                } 
                else {
                    if(day>=0 && day<=28){
                        std::cout<<year<<"/"<<month<<"/"<<day<<" is a valid date"<<std::endl;
                    }
                    else {
                        std::cout<<"invalid date"<<std::endl;
                    }
                    }
                }              
            }
        }
    
    else {
        std::cout<<"invalid date!"<<std::endl;
    }
    return 0;
}