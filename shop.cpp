/* Simple ordering system.
Inspired by a previous ice cream job, this program will simulate the ordering system of an ice cream shop.
There are three options to customize an ice cream.

1. Ice cream
2. Taiyaki

1.1. Style - Cone, upside down, cup
The style will determine the pricing of the ice cream.

1.2. Flavour - Chocolate, vanilla, strawberry, matcha, mango, guava
Self explanatory

1.3. Cone filling - Custard, red bean, nutella, taro, none
Self explanatory

2.1. Taiyaki count - 2 or 5 pieces

2.2. Taiyaki fillings - Mozarella, nutella, oreo, custard, redbean, taro
Customers may choose a variety of fillings.

After a customer has ordered an ice cream, the record of the order will be kept in the program until it is terminated.
*/


#include <iostream>
#include <string>
#include <vector>

using namespace std;

void taiyakiChoice();
void drinkChoice();
void iceCreamChoice();



int main(){
    string name;
    int choice;

    cout<<"\t\t\t---------- Cosmo Ice -----------\n\n";
	cout<<"Please Enter Your Name: ";
	cin>>name;
	cout<<"Hello "<<name<<"\n\nWhat would you like to order?\n\n";

    do{
        cout<<"1. Ice cream"<<endl;
        cout<<"2. Taiyaki"<<endl;
        cout<<"3. Drinks"<<endl;
        cout<<"4. Finish Order"<<endl;

        cout<<"\nEnter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                iceCreamChoice();
                break;
            case 2:
                taiyakiChoice();
                break;
            case 3:
                drinkChoice();
                break;
            case 4:    
                //End program
                break;
            default:
                cout<<"Invalid input"<<endl;
        }

    }while(choice!=4);

    return 0;
}

void taiyakiChoice(){
    //Taiyaki selection

    int num_taiyaki = 0;
    int taiyaki_flavour;
    string taiyaki[6] = {"Mozarella", "Nutella", "Oreo", "Custard", "Red Bean", "Taro"};
    vector<string> customer_taiyaki;

    cout<<"How many pieces of taiyaki would you like? (MAX 5)"<<endl;
    cin>>num_taiyaki;

    if(num_taiyaki > 6 || num_taiyaki <0){
        cout<<"Invalid number of taiyakis."<<endl;
    }

    //Flavours: Mozarella, nutella, oreo, custard, redbean, taro
    cout<<"\nTaiyaki Flavours:"<<endl;
    cout<<"1. Mozarella\n2. Nutella\n3. Oreo\n4. Custard\n5. Red Bean\n6. Taro"<<endl;
    cout<<"Enter the number to choose the flavour:"<<endl;

    for(int i=0; i<num_taiyaki; i++){
        cin>> taiyaki_flavour;
        customer_taiyaki.push_back(taiyaki[taiyaki_flavour-1]);
        
        //Check the input
    }

    cout<<"You chose " + num_taiyaki<<" pc taiyaki with fillings : ";
    for(int i=0; i<num_taiyaki; i++){
        cout<<customer_taiyaki[i]<<" ";
    }

    cout<<endl;

}

//1.2. Flavour - Chocolate, vanilla, strawberry, matcha, mango, guava
void iceCreamChoice(){

}

void drinkChoice(){
     
}