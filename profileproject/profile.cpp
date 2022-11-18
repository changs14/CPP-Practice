#include <iostream>
#include <string>
#include <vector>
#include "profile.hpp"

using namespace std;

Profile::Profile(string new_name, int new_age, string new_city, string new_country, string new_pronouns){

  name = new_name;
  age = new_age;
  city = new_city;
  country = new_country;
  pronouns = new_pronouns;
  
}

string Profile::view_profile(){
  string str = "Name: "+ name +"\nAge: " + to_string(age) + "\nCity: "+ city+"\nCountry: "+country +"\nPronouns: "+ pronouns + "\nHobbies: ";

   for(int i=0;i<hobbies.size();i++){
    str = str + hobbies[i]+"\n";
  }

  return str;
}

void Profile::add_hobby(string new_hobby){
  hobbies.push_back(new_hobby);
}