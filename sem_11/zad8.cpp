#include <iostream>
bool isPalindrom( char * text, int size,int index){
if(index>=size/2){
    return true;
}
    
        if(text[index]!=text[size-1-index]){
            return false;
        }
        else{
            return isPalindrom(text, size,index+1);
        }
    
}
int main (){
    int size;
    std::cout<<"size: "<<std::endl;
    std::cin>>size;
    char * text = new char [ size+1];
    std::cin.ignore();
    std::cin.getline(text, size+1);
    std::cout<<std::endl;
    std::cout<<isPalindrom(text,size,0);
    delete []text;

    return 0;
}