#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  //Generate a random number between 0-9
  srand(time(NULL));
  int num = rand() % 10;

  //Display the title
  cout<<"MAGIC 8-BALL"<<endl;

  //Display different messages based on randomized number

  if(num==1){
    cout<<"It is certain"<<endl;
  }
  else if(num==2){
    cout<<"It is decidedly so"<<endl;
  }
  else if(num==3){
    cout<<"Without a doubt"<<endl;
  }
  else if(num==4){
    cout<<"Yes - definitely"<<endl;
  }
  else if(num==5){
    cout<<"You may rely on it"<<endl;
  }
  else if(num==6){
    cout<<"Reply hazy, try again"<<endl;
  }
  else if(num==7){
    cout<<"Don't count on it"<<endl;
  }
  else if(num==8){
    cout<<"Outlook not so good"<<endl;
  }
  else{
    cout<<"Very doubtful"<<endl;
  }

  return 0;
  }