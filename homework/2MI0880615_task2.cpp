#include <iostream>
#include <cctype>
#include<cstring>//isupper(), islower.....

bool isValidChar(char c) {
    int cValue=(int)c;
    return (cValue>=48 && cValue<=57)|| (cValue>=65 && cValue<=90) || (cValue>=90 && cValue<=122);//lower,upper,, digit
}

char toLower(char c) {//izhoda e s malki bukvi
    int cValue=(int)c;
    if (cValue>=65 && cValue<=90) {
        return c + ('a' - 'A');
    }
    return c;
}
size_t newStrlen(const char * str){
    size_t size=0;
    while(str[size]!='\0'){
        size++;
    }
    return size;
}

int newStrcmp(const char* str1, const char* str2) {

    size_t str1Size=newStrlen(str1);
    size_t str2Size=newStrlen(str2);
    size_t index1=0,index2=0;

   while (index1<str1Size && index2<str2Size) {
        if (str1[index1] != str2[index2]) {
            return (unsigned char)str1[index1] - (unsigned char)str2[index2];
        }
        index1++;
        index2++;
    }
    return (unsigned char)str1[index1] - (unsigned char)str2[index2];
}

void newStrncpy(char* copy, const char* str, size_t n) {//copy>str
    size_t i = 0;
    for (;i < n && str[i] != '\0'; i++) {
        copy[i] = str[i];
        
    }
    
    for ( ;i < n; i++) {
        copy[i] = '\0';
    }
}

size_t countWords(const char* sentence) {
    size_t count = 0;
    bool inWord = false;
    const size_t strLength=newStrlen(sentence);
    size_t index=0;

    while (index<strLength) {
        if (isValidChar(sentence[index])) {
            if (!inWord) {
                inWord = true;
                count++;
            }
        } else {
            inWord = false;
        }
        index++;
    }

    return count;
}

char** extractWords(const char* sentence, int wordCount) {
    char** words = new char*[wordCount];
    const size_t senLength=newStrlen(sentence);
    size_t index=0;//index za celiq string
    size_t indexWords = 0;

    while (index<senLength) {
        if (isValidChar(sentence[index])) {
            const size_t start = index;

            while (isValidChar(sentence[index])) {
                index++;
            }

            int length = index - start;
            words[indexWords] = new char[length + 1];
            for (size_t i = 0; i < length; i++) {
                words[indexWords][i] = toLower(sentence[start+i]); 
            }
            words[indexWords][length] = '\0';
            indexWords++;
        } else {
            index++;
        }
    }
    words[indexWords] = nullptr;
    for (size_t i = 0; i < wordCount - 1; i++) {
        for (size_t j = i + 1; j < wordCount; j++) {
            if (newStrcmp(words[i], words[j]) > 0) {
                char* temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
        }
    }

    return words;
}

int countSentences(const char* text) {
    size_t count = 0;
    const size_t textLength=newStrlen(text);
    size_t index=0;

    while (index<textLength) {//char 
        if (text[index] == '.' || text[index] == '!' || text[index] == '?') {
            count++;
        }
        index++;
    }

    return count;
}

char** extractSentences(const char* text, int sentenceCount) {
    char** sentences = new char*[sentenceCount];//masiv s elemnti izr[0], izr[1] izr[2]
    const size_t textLength=newStrlen(text);
    size_t index = 0;
    size_t indexSentences=0;
    size_t start = 0;

    while (index<textLength) {//simvolite dali sa krai na izr
        if (text[index] == '.' || text[index] == '!' || text[index] == '?') {
            size_t length = index - start + 1;
            sentences[indexSentences] = new char[length + 1];//novoto izr zapovhva ot sledvashtiq simvol
            newStrncpy(sentences[indexSentences], text+start, length);
            sentences[indexSentences][length] = '\0';
            indexSentences++;
            start = index + 1;
        }
        index++;
    }

    return sentences;
}

char*** transformText(const char* text) {
    int sentenceCount = countSentences(text);//broi izr
    char** sentences = extractSentences(text, sentenceCount);
    char*** result = new char**[sentenceCount + 1];//finalen masiv / text

    for (size_t i = 0; i < sentenceCount; i++) {
        int wordCount = countWords(sentences[i]);
        result[i] = extractWords(sentences[i], wordCount);
        delete[] sentences[i];
    }

    delete[] sentences;
    result[sentenceCount] = nullptr;

    return result;
}

void freeMemory(char*** transformed) {
    if (!transformed) return;

    for (size_t i = 0; transformed[i] != nullptr; i++) {
        for (size_t j = 0; transformed[i][j] != nullptr; j++) {
            delete[] transformed[i][j];
        }
        delete[] transformed[i];
    }
delete[] transformed;
}

int main() {
    const char* text = "This is just an example for Your homework. Do, not; forget: to (handle) some special characters! Is it okay to defend Your solutions on 17th January?";
    /*std::string inputText;
    std::cout << "Please enter the text: ";
    std::getline(std::cin, inputText);
    const char* text = inputText.c_str();*/

    char*** transformed = transformText(text);//result
    std::cout << "[\n";
    for (size_t i = 0; transformed[i] != nullptr; i++) { //
        std::cout << "    [\n";
        for (size_t j = 0; transformed[i][j] != nullptr; j++) {
            std::cout << "        \"" << transformed[i][j] << "\"";
            if (transformed[i][j + 1] != nullptr) std::cout << ",";
            std::cout << "\n";
        }
        std::cout << "    ]";
        if (transformed[i + 1] != nullptr) std::cout << ",";
        std::cout << "\n";
    }
    std::cout << "]\n";
    freeMemory(transformed);
    return 0;
}