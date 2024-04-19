
#ifndef CANDIDATE_H
#define CANDIDATE_H
#include <iostream>
#include <string>
#include "nlohmann/json.hpp"
using namespace std;

class Candidate {
string name;
int cnic;
string partyName;
static int count;
public:
    Candidate(string name,int cnic,string partyName);

};


#endif //SECTORS_MODULE_CANDIDATE_H
