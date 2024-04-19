#include "PartyRegistration.h"
PartyRegistration* PartyRegistration::instance=nullptr;
 PartyRegistration* PartyRegistration:: getInstance(){
    if(!instance){
        instance = new PartyRegistration();
        return instance;
    }
 }
 PartyRegistration::PartyRegistration() {

 }
 void PartyRegistration::addParty(Party party){
string filename= party.getPartyName() + ".json";
ofstream file(filename);
json obj;
obj["name"]=party.getPartyName();
file<<obj<<endl;

cout<<"--------------------------------"<<endl;
     file.close();

 }
void PartyRegistration::addCandidate(Candidate candidate,string name) {
string filename=name+".json";
ifstream input(filename);
json data;
input>>data;

 }