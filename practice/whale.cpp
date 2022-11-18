/* Whale Talk
This program will take a phrase and translate it into whale talk.
Conditions: No consonants.
            U and E are doubled.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

  string str;

  vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  vector<char> result = {};

  cout<<"Enter a string: ";
  cin>>str;

  for(int i=0; i<str.size();i++){
    if(str[i] == 'e' || str[i] == 'u'){
      result.push_back(str[i]);
    }

    for(int j=0; j<vowels.size();j++){
      if(str[i] == vowels[j]){
        result.push_back(str[i]);
      }
    }
  }

  for(int i=0; i<result.size();i++){
    cout<<result[i];
  }

  cout<<endl;

  return 0;
}
