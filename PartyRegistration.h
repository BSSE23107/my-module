

#ifndef PARTYREGISTRATION_H
#define PARTYREGISTRATION_H
#include <iostream>
#include <vector>
#include "Party.h"
#include <fstream>
#include "nlohmann/json.hpp"
#include <string>
using json=nlohmann::json;
using namespace std;

class PartyRegistration {

    static PartyRegistration* instance;
    vector<Party> parties;
    PartyRegistration();
public:


    static PartyRegistration* getInstance();
    void addParty(Party party);
    void addCandidate(Candidate candidate,string name);
};


#endif //SECTORS_MODULE_PARTYREGISTRATION_H
