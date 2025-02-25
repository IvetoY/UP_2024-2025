#include <iostream>
#include <cstring>
struct Color{
    int red;
    int blue;
    int green;
};
struct Point {
    int x;
    int y;
};
struct pixel{
    Point point;
    Color color; 
};
char * RLE(char *text){
    char * newText = new char [strlen(text)+1];
    size_t sizeNewText=0; 
    size_t k=0;
    for(size_t i=0;i<strlen(text);i++){
       
       int counter =1;
            for(size_t j=i+1;j<strlen(text);j++){
                
                if(text[i]==text[j]){
                    counter++;
                }
                else {
                    break ;
                }
            }
            if(counter>=2){
                char a = counter + '0';
        newText[sizeNewText]=text[i];
        newText[sizeNewText+1]=a;
        sizeNewText+=2;
        i=i+counter-1;
            }
            else {
                newText[sizeNewText]=text[i];
                sizeNewText++;
            }
     }
    newText[sizeNewText]='\0';
    return newText;
}
char * de_RLE(char *text){
    char * newText = new char [100];
    size_t sizeNewText=0; 
    size_t k=0;
    for(size_t i=0;i<strlen(text);i++){
       if(text[i+1]>='0'&& text[i+1]<='9'){
        int len = text[i+1] - '0'; 
        while(len!=0){
            newText[sizeNewText]=text[i];
            len--;
            sizeNewText++;
        }
       }
       else {
        if(!(text[i]>='0'&& text[i]<='9')){
            newText[sizeNewText] = text[i];
           sizeNewText++;
        }
           
       }
     }
    newText[sizeNewText]='\0';
    return newText;
}
int main (){
    char * text = new char [100];
    std::cin.getline(text,100);
    std::cout<<RLE(text);
    std::cout<<std::endl;
    char *rle_text=RLE(text);
    std::cout<<de_RLE(rle_text);
    return 0;
}