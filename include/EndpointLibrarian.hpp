#pragma once

#include <stdint.h>
#include <map>
#include <set>
#include <string>

class EndpointLibrarian {
    public :
        EndpointLibrarian(const uint64_t publishPeriod);
        
        
        
        
    private :
        std::map<std::string, std::set<std::string>> endpoints;
        
        uint64_t publishPeriod;
};