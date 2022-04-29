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
        string nickname;  //Account nickname
        int depositAmount;        //Initial deposit for account
        string accountType;    //Chequing or savings account
        int accountAmount;

    public:
        //Functions for account management
        void createAccount();
        void displayAccount();
        void modifyAccount();
        void deleteAccount();
        void deposit(int);
        void withdraw(int);
        void generateRandomAccountNumber();
};

int main(){
    char userAnswer; //User inputted menu option
    int userWithdraw; //User inputted value to withdraw
    int userDeposit; //User inputted value to deposit

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
        cout<<endl;

        switch(userAnswer){
            case '1':
                userAccount.createAccount();
                break;
            case '2':
                cout<<"Enter an amount to deposit: ";
                cin>>userDeposit;
                userAccount.deposit(userDeposit);
                cout<<endl;
                break;
            case '3':
                cout<<"Enter an amount to withdraw: ";
                cin>>userWithdraw;
                userAccount.withdraw(userWithdraw);
                cout<<endl;
                break;
            case '4':
                userAccount.displayAccount();
                break;
            case '5':
                break;
            case '6':
                break;
            case '7':
                cout<<"Thank you for banking with Mr. Bean's Bank. Have a nice day!"<<endl;
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
    int accountChoice;

    cout<<"Let's create a new account"<<endl;
    
    //Generate randomized account number

    cout<<"Please enter a nickname for you account: ";
    cin>>nickname;

    cout<<"Choose the account type (1 - Chequing 2 - Savings): ";
    cin>>accountChoice;

    if(accountChoice == 1){
        accountType = "Chequing";
    }
    else{
        accountType = "Savings";
    }

    cout<<"Deposit Amount (Minimum $25 - Chequing $100 - Savings): ";
    cin>>accountAmount;
    cout<<endl;

    generateRandomAccountNumber();

    cout<<"Account Created Successfully!"<<endl;
}

void Account::displayAccount(){
    cout<<"Account Name: "<<nickname<<endl;
    cout<<"Account Number: "<<accountNumber<<endl;
    cout<<"Account Type: "<<accountType<<endl;
    cout<<"Current Balance: $"<<accountAmount<<endl;
    cout<<endl;
}

void Account::modifyAccount(){
    char userOption;
    int accountChoice;

    do{
        cout<<"What would you like to modify?"<<endl;
        cout<<"1. Account Nickname"<<endl;
        cout<<"2. Account Type"<<endl;
        cout<<"3. Go Back"<<endl;
    }while(userOption != '3');

    switch(userOption){
        case '1':
            cout<<"New Nickname: ";
            cin>>nickname;
            break;
        case '2':
            cout<<"Account Type: ";
            cin>>accountChoice;

            if(accountChoice == 1){
                accountType = "Chequing";
            }
            else{
                accountType = "Savings";
            }
            break;
        case '3':
            break;
        default:
            cout<<"Invalid menu option"<<endl;
    }

}

void Account::deleteAccount(){

}

void Account::deposit(int amount){
    accountAmount = accountAmount + amount;
}

void Account::withdraw(int amount){
    //Check if current amount is zero
    if(accountAmount <= 0){
        cout<<"No funds can be withdrawn."<<endl;
    }
    else{
        accountAmount = accountAmount - amount;
    }
}

void Account::generateRandomAccountNumber(){
    int random = 100000000 + (rand()%999999999);
    accountNumber = random;
}