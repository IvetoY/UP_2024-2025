#include <iostream>
char * reverse (char * text, int size, char * newText, int index){
    if(index==size){
        newText[size]='\0';
        return newText;
    }
    newText[index]=text[size-index-1];

    return reverse(text,size,newText,index+1);

}
int main (){
    int size;
    std::cout<<"size: ";
    std::cin>>size;
    std::cin.ignore();

    char * text = new char [size];
    char * newText = new char [size+1];
    std::cin.getline(text,size);
    std::cout<<reverse(text, size,newText,0);
    delete [] text;
    delete []newText;
    return 0;
}