#include<iostream>
#include "defaultconfig.h"

int main(){
    std::cout << "Software Version " << MILITARYAPP_VERSION_MAJOR << "." << MILITARYAPP_VERSION_MINOR << std::endl;
    std::cout << "Author :: ==>" << AUTHOR << std::endl;
    std::cout << "Product Type ::==> " << ProductType << std::endl;
    std::cout << "Product Year :: ==> " << ProductYear << std::endl;

    return 0;
}