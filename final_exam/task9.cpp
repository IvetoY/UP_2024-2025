#include <iostream>
#include <cstring>
char * reverseAndReplaceText(char *text){
    char* reversedText = new char [strlen(text)+1];
    size_t j=0;
    for(size_t i=strlen(text)-1;i!=0;i--){
        if(text[i]=='e'){
            reversedText[j] = '!';
            
        }
        else if(text[i]=='y'){
            reversedText[j] = '*';
            
        }
        else {
            reversedText[j] = text[i];
            
        }
        j++;
        
    }
    reversedText[j]='\0';
    return reversedText;
}
int main (){
    char * text = new char[256];
    //std::cin.ignore();
    std::cin.getline(text,256);
    char* newText = reverseAndReplaceText(text);
    std::cout<<std::endl;
    std::cout<<newText;
    delete []text;
    delete []newText;
    

    return 0;
}