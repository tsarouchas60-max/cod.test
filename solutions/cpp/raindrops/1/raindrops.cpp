#include "raindrops.h"
#include <string>
namespace raindrops {

std::string convert(int n)
    {
        std::string k="",l="",m="";
        if((n%3)==0)
            k="Pling";
        if((n%5)==0)
            l="Plang";
        if((n%7)==0)
            m="Plong";
        if(k+l+m=="")
            return std::to_string(n);
        else 
            return k+l+m;
    }

}  // namespace raindrops
