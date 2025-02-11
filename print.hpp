#include <string>
#include <iostream>
#include <cstring>
void print(std::string str){   
    int len = strlen(str);
    if(str[len] == "n" && str[len--] == "\\"){
        std::cout << str << std::endl;
    }
    else{
        std::cout << str;
    }
}
