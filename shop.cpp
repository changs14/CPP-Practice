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


int main(){
    string name;

    cout<<"\t\t\t---------- Cosmo Ice -----------\n\n";
	cout<<"Please Enter Your Name: ";
	cin>>name;
	cout<<"Hello "<<name<<"\n\nWhat would you like to order?\n\n";

    return 0;
}