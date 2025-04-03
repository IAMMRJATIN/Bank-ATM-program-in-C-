
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class userData{
	public:
		
		int acc1(){
			int balance = 100000;
			long long int acc_no_1 = 123465431554;
			int pin_no_1 = 1111;
			cout<<" ::: welcome to Royal bank Mr. JATIN :::\n "<<endl;
			cout<<" Account Holder Name : Jatin"<<endl;
			cout<<" Your account number is : 123465431554"<<endl;
			cout<<" Your mobile number is : 5641414045"<<endl;
			cout<<" Your current balance is : "<<balance<<endl;
			cout<<" Your Pan number is : 634DFG34"<<endl;
		}
		int acc2(){
			int balance = 100000;
			long long int acc_no_2 = 123465431555;
			int pin_no_2 = 2222;
			cout<<" ::: welcome to Royal bank Mis. HARSHITA :::\n "<<endl;
			cout<<" Account Holder Name : Harshita"<<endl;
			cout<<" Your account number is : 123465431555"<<endl;
			cout<<" Your mobile number is : 5641414046"<<endl;
			cout<<" Your current balance is : "<<balance<<endl;
			cout<<" Your Pan number is : 634DFG54"<<endl;
		}
		int acc3(){
			int balance = 100000;
			long long int acc_no_3 = 123465431556;
			int pin_no_3 = 3333;
			cout<<" ::: welcome to Royal bank Mis. KARISHMA :::\n "<<endl;
			cout<<" Account Holder Name : Karishma"<<endl;
			cout<<" Your account number is : 123465431556"<<endl;
			cout<<" Your mobile number is : 5641414047"<<endl;
			cout<<" Your current balance is : "<<balance<<endl;
			cout<<" Your Pan number is : 634DFG24"<<endl;
		}
		int acc4(){
			int balance = 100000;
			long long int acc_no_4 = 123465431557;
			int pin_no_4 = 4444;
			cout<<" ::: welcome to Royal bank Mr. JAMINNER :::\n "<<endl;
			cout<<" Account Holder Name : Jaminner"<<endl;
			cout<<" Your account number is : 123465431557"<<endl;
			cout<<" Your mobile number is : 5641414048"<<endl;
			cout<<" Your current balance is : "<<balance<<endl;
			cout<<" Your Pan number is : 634DFG94"<<endl;
		}
		int acc5(){
			int balance = 100000;
			long long int acc_no_5 = 123465431558;
			int pin_no_5 = 5555;
			cout<<" ::: Welcome to Royal Bank Mr. KRISH :::\n "<<endl;
			cout<<" Account Holder Name : Krish"<<endl;
			cout<<" Your account number is : 123465431558"<<endl;
			cout<<" Your mobile number is : 5641414049"<<endl;
			cout<<" Your current balance is : "<<balance<<endl;
			cout<<" Your Pan number is : 634DFG35"<<endl;
		}
};

class bank : public userData{
	public:
		int welcome(){
			cout<<"               ----------------------------------"<<endl;
			cout<<"                 Welcome to \"RAMAYA Bank\" ATM  "<<endl;
			cout<<"               ----------------------------------"<<endl<<endl;
			cout<<"\n::: Please Insert Your ATM Card :::"<<endl<<endl;
			cin.get();
		}
		
		int option_choose(){
			
			cout<<"   #########  Welcome to \"RAMAYA Bank\" ATM  #########  "<<endl<<endl;
			cout<<"Please select any one option : "<<endl;
			cout<<" Press 1. For Activate Your ATM Card. \n Press 2. For Withdraw Your Money. \n Press 3. For Deposit Money In Your Account. \n Press 4. For Check Your Details. \n Press 5. For Exit."<<endl;
		//	system("cls");
			int operation;
			cin>>operation;
			
	   		switch(operation){
	   			case 1 :
	   				system("cls");  
	   				card_activate();
	   				break;
	   			case 2 :
	   				withdraw();
	   				break;
	   			case 3 :
	   				deposit();
	   				break;
//	   			case 4 :
//	   				balance_check();
//	   				break;
				case 4 :
	   				details();
	   				break;
	   			case 5 :
	   				exit(0);
	   				break;
	   				
	   			default : cout<<"Please Select a Valid Option"<<endl;
			}
		}
			
		int card_activate(){
			long long int acc_no_1 = 123465431554;
			long long int acc_no_2 = 123465431555;
			long long int acc_no_3 = 123465431556;
			long long int acc_no_4 = 123465431557;
			long long int acc_no_5 = 123465431558;

			 
			cout<<"For Activate your ATM Card please Fill Right details"<<endl;
			long long int account_no;
			cout<<"Enter your 12 digits account number"<<endl;
			cin>>account_no;
			if( account_no == acc_no_1){
				cout<<"account no is verified successfully"<<endl;
				
			}
			if( account_no == acc_no_2){
				cout<<"account no is verified successfully"<<endl;
			}
			if( account_no == acc_no_3){
				cout<<"account no is verified successfully"<<endl;
			}
			if( account_no == acc_no_4){
				cout<<"account no is verified successfully"<<endl;
			}
			if( account_no == acc_no_5){
				cout<<"account no is verified successfully"<<endl;
			}else{
				system("cls");
				cout<< "Please Enter a Valid Account Number."<<endl;
				card_activate();
			}
			
			int otp;
			cout<<"Enter One Time Password : "<<endl;
			cin>>otp;
			
			int card_no;
			cout<<"Enter last four digits of your ATM card number :"<<endl;
			cin>>card_no;
			
			int create_pin;
			cout<<"Create pin : ";
			cin>>create_pin;
				
			int confirm_pin;
			cout<<"Confirm pin : ";
			cin>>confirm_pin;
			
			if ( confirm_pin != create_pin ){
				cout<<"Please Re-enter your pin."<<endl;
				
				card_activate();
			}
			else {
				cout<<"Pin created successfully."<<endl;
				cin.get();
				cin.get();
				exit(0);
			}
		}
		int login(){
			
			system("cls");
			
			string user1 = "jatin";
			int pin_no_1 = 1111;
			
			string user2 = "harshita";
			int pin_no_2 = 2222;
			
			string user3 = "karishma";
			int pin_no_3 = 3333;
			
			string user4 = "jaminner";
			int pin_no_4 = 4444;
			
			string user5 = "krish";
			int pin_no_5 = 5555;
			
			string username;
		    int pin;
		    cout<<"\nplease enter your username"<<endl;
		    cin>>username;
			
			cout << "Please enter your pin number : "<<endl;
			cin>>pin;
			
			if(username == user1 && pin == pin_no_1){  
		        system("cls");
		     	cout<<"       *** Welcome Jatin ***"<<endl;
		     	option_choose();
		     	
			}
			else if(username == user2 && pin == pin_no_2){  
		        system("cls");
		     	cout<<"       *** Welcome Harshita ***"<<endl;
		     	option_choose();
			}
			else if(username == user3 && pin == pin_no_3){  
		        system("cls");
		     	cout<<"       *** Welcome Karishma ***"<<endl;
		     	option_choose();
			}
			else if(username == user4 && pin == pin_no_4){   
		        system("cls");
		     	cout<<"       *** Welcome Jaminner ***"<<endl;
		     	option_choose();
			}
			else if(username == user5 && pin == pin_no_5){  
		        system("cls");
		     	cout<<"       *** Welcome Krish ***"<<endl;
		     	option_choose();
			}
			else{  
			    system("cls");
			 	cout<<"invalid details.\nplease re-enter username and pin."<<endl;
			 	login();
			}	 
		}
		
		int withdraw(){
			
			system("cls");   
			
			int balance = 100000;
			int remain_balance=0;
			int withdraw;

			cout << ":: WITHDRAW MONEY ::\n"<<endl;
		
			
			cout<<"Please Enter The Amount You Want To Withdraw"<<endl;
			cin>>withdraw;
			
			remain_balance = balance - withdraw;
			cout<<"Please Collect Your Money." <<endl<<endl;
			char remain;
			cout<<"Do You Want To See Remaining Balance ? \nPress 'y' for Yes. \nPress 'n' for No."<<endl;
			cin>>remain;
			if(remain == 'y'){
				cout<<"Your Current Balance is : "<<remain_balance;
				cin.get();
				cin.get();

				exit(0);
			}
			else{
				exit(0);
			}
			return withdraw;
		}
		
		int deposit(){
			
			system("cls");   
			
			int balance = 100000;
		
			int credit = 0;
			cout << ":: DEPOSITE MONEY ::\n"<<endl;
			
		//	cout<<"Please enter your pin number :"
			cout<<"\n\n Please enter amount for deposite :"<<endl;
			cin>>credit;
			balance = balance + credit;
			cout <<"Please insert your cash into machine carefully."<<endl;
			cin.get();
			cin.get();
			cout <<"Your Amount is successfully Deposite in Your Account Balance"<<endl;
			
			
			char recheck;
			cout<<"\n\nDo You Want To See Current Balance ? \nPress 'y' for Yes. \nPress 'n' for No."<<endl;
			cin>>recheck;
			if(recheck == 'y'){
				cout<<"Your Current Balance is "<<balance;
				//cin.get();
				//cin.get();
				exit(0);
			}
			if(recheck == 'n'){
				exit(0);
			}
			return credit;
		}
			
		//
		
		int details(){
			
			system("cls");
			
			string user1 = "jatin";
			int pin_no_1 = 1111;
			
			string user2 = "harshita";
			int pin_no_2 = 2222;
			
			string user3 = "karishma";
			int pin_no_3 = 3333;
			
			string user4 = "jaminner";
			int pin_no_4 = 4444;
			
			string user5 = "krish";
			int pin_no_5 = 5555;
			
			cout << ":: DETAILS CHECK ::"<<endl;
			
			cout<<"Please Enter Your Details Carefully.\n";
		    
			string username;
		    int pin;
		    cout<<"\nplease enter your username"<<endl;
		    cin>>username;
		    cout<<"please enter your pin"<<endl;
		    cin>>pin;
			if(username == user1 && pin == pin_no_1){  
		        system("cls");
		     	acc1();
		    	cin.get();
		    	cin.get();
		     	exit(0);
			}
			else if(username == user2 && pin == pin_no_2){  
		        system("cls");
		    	acc2();
		    	cin.get();
		    	cin.get();
		     	exit(0);
			}
			else if(username == user3 && pin == pin_no_3){  
		        system("cls");
		     	acc3();
		    	cin.get();
		    	cin.get();
		     	exit(0);
			}
			else if(username == user4 && pin == pin_no_4){   
		        system("cls");
		     	acc4();
		    	cin.get();
		    	cin.get();
		     	exit(0);
			}
			else if(username == user5 && pin == pin_no_5){  
		        system("cls");
		     	acc5();
		     	cin.get();
		     	cin.get();
		     	exit(0);
			}
			else{  
			    system("cls");
			 	cout<<"invalid details.\nplease re-enter username and pin."<<endl;
			 	details();
			}	 
		}
		
//		int balance_check(){
//			
//			system("cls");
//			
//			cout<<" :: BALANCE CHECK ::\n"<<endl;
//			
//			int credit = 0;
//			int remain_balance = 0;
		
	//	} 
		
//		int exit(){
//			system("cls");
//			cout<<" ---- THANK YOU FOR BANKING ----\n     **** Please Visit Again ****"<<endl;
//			cin.get();
//		}
};

int main(){
	bank obj;
	obj.welcome();
	obj.login();
	obj.option_choose();
}
