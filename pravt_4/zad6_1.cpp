#include <iostream>
#include <algorithm>

int main (){
    int n;
    std::cout<<"n:"<<std::endl;
    std::cin>>n;
    int numbers[n];
    for(int i=0;i<n;i++){
        std::cin>>numbers[i];
    }
    std::sort(numbers,numbers+n);
    int count = 1;
    int max = INT_MIN;
    int max_i;
    for(int i=0;i<n;i++){
        count = 1;
        for(int j=i+1;j<n;j++){
            if(numbers[i]==numbers[j]){
                count ++;
            }

        }
        if(count==max){
            
            max_i=n+1;
        std::cout<<"there is no majority number"<<std::endl;
        break;
        }
        else if(count>max){
            max=count;
            max_i=i;
        }
        i+=count-1;
    }
    if(max_i<n){
        std::cout<<"the majority number is "<<numbers[max_i];
    }
    
    return 0;
}