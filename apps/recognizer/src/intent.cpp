#include<iostream>
#include<map>
#include<sstream>
#include<string>
#include "intent.h"

    std::string Recognizer::Get_Intent(std::stringstream &ss)
    {
        int dtb_size=5 ; 
        int intent_weather=0;
        int intent_calender=0;
        int intent_fact=0;
        std::string it; 
        while(ss>>it)
        {
            if(weather_dtb.contains(it)) // contains C++20
            {
                weather_dtb[it]++;
                intent_weather++;
            }   
            if (calender_dtb.contains(it))
            {
                calender_dtb[it]++;
                intent_calender++;
            }
            if (fact_ftb.contains(it))
            {
                fact_ftb[it]++;
                intent_fact ++ ;
            }
            #if (DEBUG)
            std::cout<< it<<std::endl ;
            #endif
        }
        if(intent_weather >= 2 )
        {
            if((weather_dtb["Paris"] >0) || (weather_dtb["York"] > 0)|| (weather_dtb["Cairo"] > 0))
            return "Intent: Get Weather City ";
            else 
            return "Intent: Get Weather";
        }
        else if(intent_calender >=2 )
        {
            return "Intent: Check calendar";
        }
        else if(intent_fact >=2)
        {
            return "Intent: Get Fact"; 
        }
return "Intent: Not clear for me";
    }