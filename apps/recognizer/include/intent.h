#include<iostream>
#include<map>
#include<sstream>
#include<string>
#define DEBUG       0
class Recognizer{
    private:
    std::map<std::string,int> weather_dtb {{"weather",0},{"today?",0},{"in",0},{"Paris",0},{"Cairo",0},{"New",0},{"York",0}} ;
    std::map<std::string,int> calender_dtb {{"free",0},{"today?",0},{"tomorrow?",0},{"at",0},{"PM",0},{"AM",0},{"appointment",0}} ;
    std::map<std::string,int> fact_ftb {{"fact.",0},{"interesting.",0},{"information.",0},{"Tell",0}} ;
    public: 
    std::string Get_Intent(std::stringstream &ss);
    
};