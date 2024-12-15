#include <iostream>
char * f(char *text,int size, int index,char * newText){
    if(index==size){
        newText[size]='\0';
        return newText;
    }
     newText[index]=text[size-1-index];
    return f(text,size,index+1,newText);
    }
int main (){
    int size;
    std::cout<<"size"<<std::endl;
    std::cin>>size;
    std::cin.ignore();
    char* text = new char [size];
    std::cin.getline(text,size+1);
    char * newText =  new char[size+1];
    std::cout<<f(text,size,0,newText);



    delete [ ]text;
    delete [] newText;

    return 0;
}