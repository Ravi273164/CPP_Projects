#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void login();
void registration();
void forgotpassword();

int main()
{
	int c;
	cout<<"__________________________________________________\n\n\n";
   cout<<"              Welcome To Login Page                \n\n\n";
   cout<<"_______________________Menu________________________\n\n\n";
   cout<<"Press 1 to login"<<endl;
   cout<<"Press 2 to Register"<<endl;
   cout<<"Press 3 if you forgot your password"<<endl;
   cout<<"Press 4 to exit"<<endl;
   cin>>c;
   
   switch(c)
   {
   	case 1:
   		login();
   		break;
   	case 2:
	    registration();
		break;
	case 3:
	    forgotpassword();
	    break;	
	case 4:
		cout<<"Thank You"<<endl;
	    exit(0);
	default:
		   system("cls");
	    	cout<<"Please Select valid options"<<endl;	
			main();	
   }
   
}


void login(){
	int count;
	string userId,password,id,pass;
	system("cls");
	cout<<"Please enter the username and password"<<endl;
	cout<<"Username"<<endl;
	cin>>userId;
	cout<<"Password"<<endl;
	cin>>password;
	
	ifstream input("records.txt");
	while(input>>id>>pass){
		if(id==userId&&pass==password){
			count=1;
			system("cls");
		}
	}
	input.close();
	
	if(count==1){
		cout<<userId<<"\nYour Login is Successful\nThanks for login"<<endl;
		main();
	}
	else{
		cout<<"\n Login Error\nPlease Check your username and password\n"<<endl;
	}
}

void registration(){
	string ruserId,rpassword,rid,rpass;
	system("cls");
	cout<<"\nEnter the username :"<<endl;
	cin>>ruserId;
	cout<<"Enter ther password"<<endl;
	cin>>rpassword;
	
	ofstream f1("records.txt",ios::app);
	f1<<ruserId<<' '<<rpassword<<endl;
	system("cls");
	cout<<"Registration is succesfull"<<endl;
	main();
}



void forgotpassword(){
	int option;
	system("cls");
	cout<<"\nYou forgot the password no worries"<<endl;
	cout<<"Now press 1 to search your id by username"<<endl;
	cout<<"Press 2 to go back to main menu"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>option;
	switch(option){
		case 1:
			{
			int count=0;
			string suserId,sId,spass;
			cout<<"Enter the username you remembered :"<<endl;
			cin>>suserId;
			
			ifstream f2("records.txt");
			
			while(f2>>sId>>spass){
				if(sId==suserId){
					count=1;
				}
			}
			f2.close();
			if(count==1){
				cout<<"Your account is found!"<<endl;
				cout<<"Your password is :"<<spass<<endl;
				main();
			}
			else{
				cout<<"\nSorry your account is not found!"<<endl;
				main();
			}
			break;
			}
		
		case 2:
			main();
			break;
			
		default:
		     cout<<"Wrong choice! Please try again"<<endl;
			 forgotpassword();
			 break;	
	}
}

