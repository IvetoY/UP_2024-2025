#include <iostream>
void zip(char*a,char*b,char*result){
    size_t counterA=0;
    size_t counterB=0;
    for(size_t i=0;i<sizeof(a)+sizeof(b)+1;i++){
        if(i%2==0){
            result[i]=a[counterA];
            counterA++;
        }
        else {
            result[i]=b[counterB];
            counterB++;
        }
    }
    for(size_t i=0;i<sizeof(a)+sizeof(b)+1;i++){
        std::cout<<result[i];
    }
}
int main (){
    char*a=new char [100];
    char *b= new char [100];
    char *result = new char [200];
    std::cout<<"a:"<<std::endl;
    std::cin.getline(a,100);
    std::cout<<"b:"<<std::endl;
    std::cin.getline(b,100);
    /*std::cout<<"result: "<<std::endl;
    std::cin.getline(result,200);
    */
    zip(a,b,result);
    delete []a;
    delete []b;
    delete []result;
    return 0;
}