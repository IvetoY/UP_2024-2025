#include <iostream>
#include <string>

std::string grade(int p){

    if(p>=91 && p<=100){
        return "A";
    }
    else if(p>=81 && p<=90){
        return "B";
    }
    else if(p>=71 && p<=80){
        return "C";
    }
    else if(p>=61 && p<=70){
        return "D";
    }
    else if(p>=51 && p<=60){
        return "E";
    }
    else if(p>=0 && p<=50){
        return "F";
    }
    else {
        return "please enter points between 0 and 100";
    }
}
int main (){
    int points;
    std::cout<<"your points: "<<std::endl;
    std::cin>>points;
    std::cout<<grade(points);

    return 0;
}