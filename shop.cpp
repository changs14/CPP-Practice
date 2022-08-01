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

using namespace std;

void taiyaki_choice();


int main(){
    string name;
    int choice;

    cout<<"\t\t\t---------- Cosmo Ice -----------\n\n";
	cout<<"Please Enter Your Name: ";
	cin>>name;
	cout<<"Hello "<<name<<"\n\nWhat would you like to order?\n\n";

    cout<<"1. Ice cream"<<endl;
    cout<<"2. Taiyaki\n"<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"What style would you like your ice cream?"<<endl;
            cout<<"1. Cone"<<endl;
            cout<<"2. Upside down"<<endl;
            cout<<"3. In a cup"<<endl;
            break;

        case 2:
            taiyaki_choice();
            break;

        default:
            cout<<"Invalid input"<<endl;
    }

    return 0;
}

void taiyaki_choice(){
    //Taiyaki selection

    int num_taiyaki = 0;

    cout<<"How many pieces of taiyaki would you like? (MAX 5)"<<endl;
    cin>>num_taiyaki;

    //Flavours: Mozarella, nutella, oreo, custard, redbean, taro
    cout<<"\nTaiyaki Flavours:"<<endl;
    cout<<"1. Mozarella\n2. Nutella\n3. Orea\n4. Custard\n5. Red Bean\n6. Taro"<<endl;

    if(num_taiyaki > 6 || num_taiyaki <0){
        cout<<"Invalid number of taiyakis."<<endl;
    }

    switch(num_taiyaki){
        case 1:
            break;
    }

}