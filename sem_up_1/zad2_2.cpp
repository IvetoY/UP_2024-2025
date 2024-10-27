 #include <iostream>

 int main (){
    int number1, number2;
    std::cout<<"enter your numbers"<<std::endl;
    std::cin>>number1>>number2;
    if(number1<0 && number2<0){
        std::cout<<"both are negative"<<std::endl;
    }
    else if(number1>0 && number2>0){
        std::cout<<"both are positive"<<std::endl;
    }
    else if(number1==0 && number2==0){
        std::cout<<"there are two zeros"<<std::endl;
    }
    else {
        std::cout<<"they are a combination of +,- or 0"<<std::endl;
    }
    return 0;
 }