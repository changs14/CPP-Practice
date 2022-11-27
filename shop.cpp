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
#include <unordered_map>

using namespace std;

bool taiyakiChoice(vector<string> &);
bool drinkChoice(vector<string> &);
bool iceCreamChoice(vector<string> &);

int main(){
    string name;                                //Get user name for the order
    int choice;                                 //Main menu selection

    //Holds the complete order
    vector<vector<string>> taiyakiFinal;        //Final 2d vector containing all orders
    vector<vector<string>> iceCreamFinal;       //Find 2d vector containing all orders
    vector<string> drink;                       //Final drink vector

    //Checks if the menu item has been added to the order - used for final order printing
    bool taiyakiOrdered = false;
    bool iceCreamOrdered = false;
    bool drinkOrdered = false;

    //Orders
    vector<string> taiyaki;     //Vector to hold a temp order of a taiyaki order
    vector<string> iceCream;    //Vector to hold a temp order of ice cream  

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
                iceCreamOrdered = iceCreamChoice(iceCream);

                if(iceCreamOrdered){
                    iceCreamFinal.push_back(iceCream);
                }

                break;
            case 2:
                taiyakiOrdered = taiyakiChoice(taiyaki);

                if(taiyakiOrdered){
                    taiyakiFinal.push_back(taiyaki);
                }

                taiyaki.clear();
                break;
            case 3:
                drinkOrdered = drinkChoice(drink);
                break;
            case 4:    
                //End menu display
                break;
            default:
                cout<<"Invalid input"<<endl;
        }

    }while(choice!=4);

    //Print the final order
    cout<<"\nFinal order:"<<endl;
    cout<<"Name: "<<name<<endl;

    //Print out the final taiyaki order

    if(!taiyakiFinal.empty()){
        cout<<taiyakiFinal.size()<<" pc Taiyaki: ";
        for(int i=0; i<taiyakiFinal.size();i++){
            for(int j = 0; j< taiyakiFinal[i].size(); j++){
                cout<<taiyakiFinal[i][j]<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}

/* taiyakiChoice(vector<string> &) - Function that gets a single taiyaki order from the user. 
*/
bool taiyakiChoice(vector<string> &customer_taiyaki){
    //Taiyaki selection

    int num_taiyaki = 0;
    int taiyaki_flavour;
    string taiyaki[6] = {"Mozarella", "Nutella", "Oreo", "Custard", "Red Bean", "Taro"};

    cout<<"How many pieces of taiyaki would you like? (MAX 5, 0 for NONE)"<<endl;
    cin>>num_taiyaki;

    //Turn into a do while loop
    if(num_taiyaki > 6 || num_taiyaki <-1){
        cout<<"Invalid number of taiyakis."<<endl;
    }
    else if(num_taiyaki == 0){
        return false;
    }

    //Flavours: Mozarella, nutella, oreo, custa rd, redbean, taro
    cout<<"\nTaiyaki Flavours:"<<endl;
    cout<<"1. Mozarella\n2. Nutella\n3. Oreo\n4. Custard\n5. Red Bean\n6. Taro"<<endl;
    cout<<"Enter the number to choose the flavour:"<<endl;

    //Get user chosen flavours
    for(int i=0; i<num_taiyaki; i++){
        cin>> taiyaki_flavour;
        customer_taiyaki.push_back(taiyaki[taiyaki_flavour-1]);
    }

    cout<<"You chose "<<num_taiyaki<<" pc taiyaki with fillings: ";

    for(int i=0; i<num_taiyaki; i++){
        cout<<customer_taiyaki[i]<<" ";
    }

    cout<<endl;

    return true;

}

//1.2. Flavour - Chocolate, vanilla, strawberry, matcha, mango, guava
bool iceCreamChoice(vector<string> & customer_ice_cream){

    return true;

}

bool drinkChoice(vector<string> & customer_drink){
    
    return true;
     
}