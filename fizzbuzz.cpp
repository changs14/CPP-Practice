/* Basic program that will print out fizz for numbers divisible by 3, buzz for numbers divisible 5 or fizzbuzz if both */

#include <iostream>

using namespace std;

int main(){
  for(int i = 1; i<=100; i++){
    if(i%3 == 0 && i%5 == 0){
      cout<<"FizzBuzz"<<endl;
    }
    else if(i%3 == 0){
      //Check if the number is divisible by 3
      cout<<"Fizz"<<endl;
    }
    else if (i%5==0){
      //Check if the number is divisible by 5
      cout<<"Buzz"<<endl;
    }
    else{
      cout<<i<<endl;
    }
  }

  return 0;
}