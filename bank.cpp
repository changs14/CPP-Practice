/*********************** Mr. Bean's Bank ***********************
This program will simulate a bank management system with the following features:
    - Create an account (chequing or savings)
    - Display account details
    - Modify account - Edit bank account nickname
    - Delete account
    - Deposit/Withdraw
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

//Account class has class variables and functions
class Account{
    private:
        int accountNumber;  //Randomized account number
        char nickname[50];  //Account nickname
        int depositAmount;        //Initial deposit for account
        int accountType;    //Chequing or savings account

    public:
        //Functions for account management
        void createAccount();
        void displayAccount();
        void modifyAccount();
        void deleteAccount();
        void deposit(int);
        void withdraw(int);
};

int main(){
    char userAnswer; //User inputted menu option

    Account userAccount;

    //Display bank banner and welcome message
    cout<<"\n******************************************************************"<<endl;
    cout<<"************************* MR. BEAN'S BANK ************************"<<endl;
    cout<<"******************************************************************"<<endl;
    
    cout<<"\nHow may we help you today?"<<endl;

    do{
        //Display main menu
        cout<<"1. CREATE NEW ACCOUNT"<<endl;
        cout<<"2. DEPOSIT"<<endl;
        cout<<"3. WITHDRAW"<<endl;
        cout<<"4. CHECK ACCOUNT DETAILS"<<endl;
        cout<<"5. MODIFY ACCOUNT"<<endl;
        cout<<"6. DELETE ACCOUNT"<<endl;
        cout<<"7. EXIT"<<endl;
        cout<<endl;

        cin>>userAnswer; //Get user input

        switch(userAnswer){
            case '1':
                userAccount.createAccount();
                break;
            case '2':
                break;
            case '3':
                break;
            case '4':
                break;
            case '5':
                break;
            case '6':
                break;
            case '7':
                cout<<"\nThank you for banking with Mr. Bean's Bank. Have a nice day!"<<endl;
                break;
            default:
                cout<<"\nInvalid menu option. Please pick from 1-7\n"<<endl;
        }

    }while(userAnswer!='7');



    return 0;
}

//**************************************** FUNCTIONS ***********************************************

/* Function: createAccount()
   Parameters: None
   createAccount will write and save details to an outfile: random account number, nickname, deposit, acc type
*/
void Account::createAccount(){
    cout<<"Let's create a new account"<<endl;
    
    //Generate randomized account number

    cout<<"Please enter a nickname for you account: ";
    cin>>nickname;
    cin.ignore();
    cin.getline(nickname, 50);

    cout<<"Choose the account type (1 - Chequing 2 - Savings): ";
    cin>>accountType;
    cout<<endl;

    cout<<"Deposit Amount (Minimum $25 - Chequing $100 - Savings): ";
    cin>>depositAmount;
    cout<<endl;
    cout<<"Account Created Successfully!"<<endl;
}

void Account::displayAccount(){

}

void Account::modifyAccount(){

}

void Account::deleteAccount(){

}

void Account::deposit(int amount){
    //Change to value returning int?
}

void Account::withdraw(int amount){
    //Change to value returning int?
}
