
#include "Party.h"
Party::Party(string name, string admin, string pass):partyName(name),partyAdmin(admin),password(pass){

}

//Party::~Party(){
//
//}

string Party::getPartyName(){
    return partyName;
}

string Party::getPartyAdmin(){
    return partyAdmin;
}

string Party::getPassword(){
    return password;
}

void Party::setPartyName(string name){
    partyName = name;
}

void Party::setPartyAdmin(string admin){
    partyAdmin = admin;
}

void Party::setPassword(string pass){
    password = pass;
}
