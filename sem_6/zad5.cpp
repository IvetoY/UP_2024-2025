#include <iostream>
void getSubString_(char a[], int f, int l){
    int arraySize=l-f+1;
    char b[arraySize];
    for(int i=f;i<l;i++){
        b[i]=a[i];
        std::cout<<b[i];
    }
}
int main (){
    int firstIndex,lastIndex;
    char a[256];
    std::cout<<"a[]:";
    std::cin.getline(a,255);
    std::cout<<"first index:"<<std::endl;
    std::cin>>firstIndex;
    std::cout<<"last Index:"<<std::endl;
    std::cin>>lastIndex;
    getSubString_(a,firstIndex,lastIndex);


    return 0;

}