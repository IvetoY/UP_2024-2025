#include <iostream>
#include <algorithm>
int main (){
    char c [100];
    std::cin.ignore();
    std::cin.getline(c,101);
    size_t size=0;
    bool flag = false;
    size_t countNumbers=0;
    for(size_t i=0;c[i]!='\0';i++){
        size++;
        if((c[i]>='0' && c[i]<='9')){
            flag=true;
            countNumbers++;
        }
    }
    if(flag==true){
        int numbers[countNumbers];
        int counter=0;
        for(size_t i=0;i<size;i++){
            if((c[i]>='0' && c[i]<='9')){
            numbers[counter] = c[i] - '0';
            counter ++;
        }
        
        }
        std::sort(numbers,numbers+countNumbers);
        
            if(numbers[0]==0){
                for(size_t j=0;j<countNumbers;j++){
                    if(numbers[j]!=0){
                        int curr=numbers[0];
                        numbers[0]=numbers[j];
                        numbers[j]=curr;
                        break;
                    }
                }
            }
        
        
        for(size_t i=0;i<countNumbers;i++){
            std::cout<<numbers[i];
        }
    }
    return 0;
}