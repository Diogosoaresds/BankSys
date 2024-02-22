#include <iostream>
#include <iomanip>

void showBalance(double Balance);
double deposit();
double withdraw();

int main()
{
    double Balance = 0;
    int choice = 0;
    
    do{

        std::cout << "*********************"<<"\n";
        std::cout << "Enter Your Choice: "<<"\n";
        std::cout << "*********************"<<"\n";
        std::cout << "(1) Show Balance"<<"\n";
        std::cout << "(2) Deposit Money"<<"\n";
        std::cout << "(3) Withdraw Money"<<"\n";
        std::cout << "(4) Exit"<<"\n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch(choice){
            case 1: showBalance(Balance);
                    break;
            case 2: Balance += deposit();
                    showBalance(Balance);
                    break;
            case 3: Balance -= withdraw();
                    showBalance(Balance);
                    break;
            case 4: std::cout<<"Thanks For Visiting!\n";
                    break;
            default: std::cout<<"That is Not a Valid Option\n";
        }

    }while(choice != 4);




    return 0;
}

void showBalance(double Balance){
     std::cout<<"Your Balance is: $"<< std::setprecision(2) << std::fixed << Balance <<"\n";
}
double deposit(){

    double amount = 0;

    std::cout<<"Enter Amount to be Deposited: ";
    std::cin>>amount;
    
    if(amount > 0){
        return amount;
    }
    else{
        std::cout<<"That is Not a Valid Amount: ";
        return 0;
    }
}
double withdraw(double Balance){
    double amount = 0;

    std::cout<<"Enter Amount to be Withdrawn: $"<<"\n";
    std::cin>>amount;

    if(amount > Balance){
        std::cout<<"Insufficient Balance!\n";
        return 0;
    }
    else if(amount < 0){
        std::cout<<"That is Not a Valid Amount!\n";
        return 0;
    }
    else{
        return amount;
    }

}
