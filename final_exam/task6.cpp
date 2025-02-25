#include <iostream>
#include <cstring>
char * returnOnlyText(char text[]){
    size_t counter=0;
    char* newText = new char[strlen(text) + 1]; 
    for(size_t i=0;text[i]!='\0';i++){
        if(!(text[i]>='0' && text[i]<='9')){
            newText[counter]=text[i];
            counter ++;
        }
    }
    newText[counter]='\0';
    return newText;
}
char * returnOnlyNumbers(char text[]){
     char* newText = new char[strlen(text) + 1]; 
    size_t counter=0;
    
    for(size_t i=0;text[i]!='\0';i++){
        if(text[i]>='0' && text[i]<='9'){
            newText[counter]=text[i];
            counter ++;
        }

    }
    newText[counter]='\0';
    return newText;
}
char * sortedNumbers(char text[]){
    int counter=0;
    size_t len = strlen(text);
    for(size_t i=0;i<len;i++){
        for(size_t j=i+1;j<len;j++){
        if((int)(text[i])>(int)(text[j])){
            int curr=text[i];
            text[i]=text[j];
            text[j]=curr;
        }
        counter ++;
    }
    }
    
    return text;
}
char* conc(char text1[], char text2 []){
    //size_t i=0;
    size_t len1 = strlen(text1);
    size_t len2 = strlen(text2);
    
    // Заделяме памет за комбинирания низ
    char* concText = new char[len1 + len2 + 1];
    for(size_t i=0;i<len1;i++){
        concText[i]=text1[i];
    }
    for(size_t j = 0;j<len2;j++){
        concText[len1+j]=text2[j];
    }
    concText[len1+len2]='\0';
    return concText;
}
void printText(char * text){
    for(size_t i=0;text[i]!='\0';i++){
        std::cout<<*(text+i);
    }
}
int main (){
    char text[101]; ;
    std::cin.getline(text,101);
    char* onlyText= returnOnlyText(text);
    char * onlyNumbers = sortedNumbers(returnOnlyNumbers(text));
    char * finalText = conc(onlyNumbers,onlyText);
    printText(finalText);

     delete[] onlyText;
    delete[] onlyNumbers;
    delete[] finalText;

    return 0;
}