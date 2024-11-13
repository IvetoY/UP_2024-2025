#include <iostream>
double Abs(double n){
    if (n >  0){
        return n;
    }
    else {
        return n*(-1);
    }
}
double Pow(double n,double p){
    while(p!=0);
    return n*Pow(n,p-1);
}
void max(double n,double m){
    if(n>m){
        std::cout<<n<<std::endl;
    }
    else {
        std::cout<<m<<std::endl;
    }
}
void min(double n,double m){
    if(n>m){
        std::cout<<n<<std::endl;
    }
    else {
        std::cout<<m<<std::endl;
    }
}
void maxOfThree(double n,double m,double k){
    if(n>m && n>k){
        std::cout<<n<<std::endl;
    }
    else if ( m>k && m>n) {
        std::cout<<m<<std::endl;
    }
    else if(k>n && k>n){
        std::cout<<k<<std::endl;
    }
}
void minOfThree(double n,double m,double k){
    if(n<m && n<k){
        std::cout<<n<<std::endl;
    }
    else if ( m<k && m<n) {
        std::cout<<m<<std::endl;
    }
    else if(k<n && k<n){
        std::cout<<k<<std::endl;
    }
}
bool isAlpha(char a){
    if((a>='a' && a<='z') || (a>='A' && a<= 'Z')){
        return true;
    }
    else {
        return false;
    }
}
bool isDigit(char a){
    if(a>='0' && a<='9'){
        return true;
    }
    else {
        return false;
    }
}
bool isEven(int n){
    if(n%2==0){
        return true;
    }
    else {
        return false;
    }
}
int main (){
    double number;
    double p;
    double number_2;
    double  number_3;
    char a;
    std::cout<<"a:"<<std::endl;
    std::cin>>a;
    std::cout<<"number:"<<std::endl;
    std::cin>>number;
    std::cout<<"degree:"<<std::endl;
    std::cin>>p;
    std::cout<<"number_2:"<<std::endl;
    std::cin>>number_2;
    std::cout<<"number_3: "<<std::endl;
    std::cin>>number_3;
    std::cout<<"abs: "<<Abs(number)<<std::endl;
    std::cout<<"pow: "<<Pow(number,p)<<std::endl;
    std::cout<<"min: ";
    min(number,number_2);
    std::cout<<"min: ";
    max(number,number_2);
    std::cout<<"minOfThree"<<std::endl;
    minOfThree(number,number_2,number_3);
    std::cout<<"maxOfThree"<<std::endl;
    maxOfThree(number,number_2,number_3);
    std::cout<<"isAlpha:"<<isAlpha(a)<<std::endl;
    std::cout<<"idDgit:"<<isDigit(a)<<std::endl;
    std::cout<<"isEven(number): "<<isEven(number)<<std::endl;


    return 0;
}