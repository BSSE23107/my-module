#include <iostream>
#include <string>
#include "Party.h"
#include "PartyRegistration.h"
using namespace std;

int main()
{
    int choice;
    cout<<"_________________________________________"<<endl;
    cout<<"  Welcome To Party Registration Service "<<endl;
    cout<<"  _____________________________________ "<<endl;
    cout<<endl;
    cout<<"Enter 1 to Register"<<endl;
    cout<<"Enter 2 to Login"<<endl;
    cout<<"Enter 3 to Logout"<<endl;
    cout<<"Enter 4 to Exit"<<endl;
    cout<<endl;
    cout<<"Enter Your Choice: ";
    cin>>choice;
    PartyRegistration* registerParty=PartyRegistration::getInstance();
    switch(choice){
        case 1: {
            string admin = "null", partyName = " ", pass = " ";
            cout << "Enter Party Name: ";
            cin >> partyName;
            cout << "Enter Party's Leader Name:";
            cin >> admin;
            cin.ignore();
            cout << "Enter Password: ";
            cin >> pass;
            cin.ignore();
            Party party(partyName, admin, pass);
            registerParty->addParty(party);
            break;
        }
        case  2:
        {
            string name = " ", password = " ";
            cout << "Enter Party Name :";
            cin >> name;
            cin.ignore();
            ifstream file(name + ".json");
            if (!file.is_open()) {
                cerr << "Error! No Such Party Exist!" << endl;
            } else cout << "Enter Password :";
            cin >> password;
            cin.ignore();
            json data;
            file >> data;
            file.close();
            if (password != data["pass"]) {
                cerr << "Wrong Password!" << endl;
            } else
                cout << "Choose An Option \n1.Add A Candidate\n2.Nominate a Candidate\n3.Logout\n";
            int choice = 0;
            cin >> choice;
            if (choice == 1) {
                string name_of_Candidate = " ", party_name = " ";
                int cnic_of_candidate = 0;
                cout << "Enter Name of Candidate: ";
                cin >> name_of_Candidate;
                cin.ignore();
                cout << "Enter CNIC of Candidate: ";
                cin >> cnic_of_candidate;
                cout << "Enter Party Name of Candidate: ";
                cin >> party_name;
                cin.ignore();
                Candidate candidate(name_of_Candidate, cnic_of_candidate, party_name);
                registerParty->addCandidate(candidate,name);
            }
        }




    }



    return 0;

}
