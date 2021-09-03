#include <iostream>
#include <sstream>
#include "profile.hpp"
using namespace std;

Profile::Profile(string new_name, int new_age, string new_city, string new_country, string new_pronouns)
    : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns){}

string Profile::view_profile(){
    string profile;

    profile = "Name: " + name;
    stringstream ss; ss << age;
    profile += "\nAge: " + ss.str();
    profile += "\nCity: " + city;
    profile += "\nCountry: " + country;
    profile += "\nPronouns: " + pronouns;
    
    profile += "\nHobbies: ";
    for (int i=0; i<hobbies.size()-1; i++){
        profile += hobbies[i] + ", ";
    }
    profile += hobbies[hobbies.size()-1];

    return profile;
}

void Profile::add_hobby(string new_hobby){
    hobbies.push_back(new_hobby);
}