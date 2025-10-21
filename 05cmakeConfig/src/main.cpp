#include<iostream>
#include "defaultconfig.h"

int main(){
    std::cout << "Software Version" << TECTCAPP_VERSION_MAJOR << "." << TECTCAPP_VERSION_MINOR<< std::endl;
    std::cout << "Product Type "<< ProductType << std::endl;
    std::cout << "Product Year" << ProductYear << std::endl;
}