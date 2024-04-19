#ifndef PARTY_H
#define PARTY_H
#include <iostream>
#include "Candidate.h"
#include <string>
using namespace std;

class Party {
private:
    string partyName;
    string partyAdmin;
    string password;

public:
    Party(string name, string admin, string pass);
    string getPartyName();
    string getPartyAdmin();
    string getPassword();
    void setPartyName(string name);
    void setPartyAdmin(string admin);
    void setPassword(string pass);
    

};


#endif //SECTORS_MODULE_PARTY_H
