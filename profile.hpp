#include <iostream>
#include <vector>
using namespace std;

class Profile {

private:
    string name;
    int age;
    string city;
    string country;
    string pronouns;
    vector<string> hobbies;

public:
    void set_name(string new_name);
    void set_age(int new_age);
    void set_city(string new_city);
    void set_country(string new_country);
    void set_pronouns(string new_pronouns);
    void set_hobbies(string new_name);
    void add_hobby(string new_hobby);
    string view_profile();

    // Constructors
    Profile(string new_name, int new_age, string new_city, string new_country, string new_pronouns="they/them");

};

