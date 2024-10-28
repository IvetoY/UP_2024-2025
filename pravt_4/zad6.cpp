#include <iostream>

int main (){
    int n;
    std::cout<<"n:"<<std::endl;
    std::cin>>n;
    int numbers[n];
    for(int i=0;i<n;i++){
        std::cin>>numbers[i];
    }
    int majorityElement=numbers[0];//izbirame proizvolno i tova proizvolno e parvoto
    int c = 1;// count
    for(int i=0;i<n;i++){
        if(numbers[i]==majorityElement){
            c++;
        }
        else {
            c--;
        }
        if(c==0){
            c=1;
            majorityElement=numbers[i];
        }
    }
    int countMajorityElement_2=0;
    for(int i=0;i<n;i++){
        if(majorityElement==numbers[i]){
            countMajorityElement_2++;
        }
    }
    
    if(countMajorityElement_2>=((n/2)+1)){
        std::cout<<"the majority element is "<<majorityElement<<std::endl;
    }
    else{
        std::cout<<"there is no majority element"<<std::endl;
    }
    return 0;
}