#include <Iostream>

int main (){
    int n;
    char ch;
    std::cout<<"n:"<<std::endl;
    std::cin>>n;
    std::cout<<"ch:"<<std::endl;
    std::cin>>ch;
    if(n%2==0){
        n+=1;
    }
    int rows = n/2 +1;

    for(int i=0;i<rows;i++){
        int space =rows-i;
        for(int j=1;j<space;j++){
            std::cout<<" ";
        }
            int chNumber = 2*i+1;
            for( int j= 0; j < chNumber; j++){
                std::cout<<ch;
            }
        std::cout<<std::endl;

    }

    for( int i=0;i<rows-1; i++){
        std::cout<<" ";
    }
    std::cout<<ch<<std::endl;
    
    return 0;
}