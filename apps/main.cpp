#include <iostream>
#include<sstream>
#include "intent.h"

int main(int,char**){
std::string input_str ;
while(1)
{
    std::cout << "How I can help you " << std::endl ;
    std::getline(std::cin,input_str); 
    std::stringstream ss(input_str) ;
    Recognizer rec(ss);
}
return 0 ;  
}