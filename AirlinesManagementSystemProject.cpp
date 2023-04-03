#include<iostream>
#include<fstream>
//#include<iomap>

using namespace std;
void mainMenu();
class Management{
	public:
		Management(){
			mainMenu();
		}
};

class Details{
	public:
		static string name,gender;
		int phoneNo;
		int age;
		string add;
		static int cId;
		char arr[100];
		
		void information(){
		    cout<<"\nEnter the Customer Id";
		    cin>>cId;
		    cout<<"\nEnter the name\n";
		    cin>>age;
		    cout<<"\nEnter the age :\n";
		    cin>>age;
		    cout<<"\nAddress\n";
		    cin>>add;
		    cout<<"\nGender :";
		    cin>>gender;
		    cout<<"\nYour details are saved with us\n";
		}
};

int Details::cId;
string Details::name;
string Details::gender;

class registration{
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		
		void flights(){
			string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
			
			for(int a=0;a<6;a++){
				cout<<(a+1)<<" .flight to "<<flightN[a]<<endl;
			}
			cout<<"\nWelcome to the airlines!"<<endl;
			cout<<"\nPress the number of the country to book the flight"<<endl;
			cin>>choice;
			
			switch(choice){
				case 1:{
					cout<<"_______________________Welcome to DUBAI EMIRATES________________\n"<<endl;
					cout<<"Your Comfort is our priority , Enjoy your journey"<<endl;
					cout<<"Following are the flights\n"<<endl;
					
					cout<<"1> DUB-489"<<endl;
					cout<<"\t08-01-2022 8:00AM 10hrs Rs.10k"<<endl;
					
					cout<<"1> DUB-654"<<endl;
					cout<<"\t09-01-2022 5:00AM 13hrs Rs.9k"<<endl;
					
					cout<<"1> DUB-238"<<endl;
					cout<<"\t08-01-2022 10:00AM 6hrs Rs.14k"<<endl;
					
					cout<<"\nSelect the flight you want to book :"<<endl;
					cin>>choice1;
					
					if(choice1==1){
						charges=10000;
						cout<<"\nYou have successfully booked the flight DUB-489"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==2){
						charges=9000;
						cout<<"\nYou have successfully booked the flight DUB-654"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==3){
						charges=14000;
						cout<<"\nYou have successfully booked the flight DUB-238"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else{
						cout<<"\nInvalid Input,shifting the previous menu"<<endl;
						flights();
					}
					
					cout<<"Press any key to go back to main menu:"<<endl;
					cin>>back;
					
					if(back==1){
						mainMenu();
					}
					else{
						mainMenu();
					}
					break;
				}
			case 2:{
				cout<<"_______________________Welcome to CANADIAN EMIRATES________________\n"<<endl;
					cout<<"Your Comfort is our priority , Enjoy your journey"<<endl;
					cout<<"Following are the flights\n"<<endl;
					
					cout<<"1> CAD-582"<<endl;
					cout<<"\t08-01-2022 5:00AM 10hrs Rs.13k"<<endl;
					
					cout<<"1> CAD-644"<<endl;
					cout<<"\t09-01-2022 3:00AM 13hrs Rs.17k"<<endl;
					
					cout<<"1> CAD-558"<<endl;
					cout<<"\t10-01-2022 10:00AM 6hrs Rs.8k"<<endl;
					
					cout<<"\nSelect the flight you want to book :"<<endl;
					cin>>choice1;
					
					if(choice1==1){
						charges=13000;
						cout<<"\nYou have successfully booked the flight CAD-582"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==2){
						charges=17000;
						cout<<"\nYou have successfully booked the flight CAD-644"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==3){
						charges=8000;
						cout<<"\nYou have successfully booked the flight CAD-558"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else{
						cout<<"\nInvalid Input,shifting the previous menu"<<endl;
						flights();
					}
					
					cout<<"Press any key to go back to main menu:"<<endl;
					cin>>back;
					
					if(back==1){
						mainMenu();
					}
					else{
						mainMenu();
					}
				break;
			}
		case 3:{
			cout<<"_______________________Welcome to UK AIRWAYS________________\n"<<endl;
					cout<<"Your Comfort is our priority , Enjoy your journey"<<endl;
					cout<<"Following are the flights\n"<<endl;
					
					cout<<"1> UK-743"<<endl;
					cout<<"\t07-01-2022 8:00AM 10hrs Rs.44k"<<endl;
					
					cout<<"\nSelect the flight you want to book :"<<endl;
					cin>>choice1;
					
					if(choice1==1){
						charges=44000;
						cout<<"\nYou have successfully booked the flight DUB-489"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else{
						cout<<"\nInvalid Input,shifting the previous menu"<<endl;
						flights();
					}
					
					cout<<"Press any key to go back to main menu:"<<endl;
					cin>>back;
					
					if(back==1){
						mainMenu();
					}
					else{
						mainMenu();
					}
			break;
		}
		case 4:{
			cout<<"_______________________Welcome to US Airways________________\n"<<endl;
					cout<<"Your Comfort is our priority , Enjoy your journey"<<endl;
					cout<<"Following are the flights\n"<<endl;
					
					cout<<"1> US-463"<<endl;
					cout<<"\t05-01-2022 8:00AM 10hrs Rs.37k"<<endl;
					
					cout<<"1> US-654"<<endl;
					cout<<"\t17-01-2022 5:00AM 13hrs Rs.44k"<<endl;
					
					cout<<"\nSelect the flight you want to book :"<<endl;
					cin>>choice1;
					
					if(choice1==1){
						charges=10000;
						cout<<"\nYou have successfully booked the flight US-463"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==2){
						charges=9000;
						cout<<"\nYou have successfully booked the flight US-654"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else{
						cout<<"\nInvalid Input,shifting the previous menu"<<endl;
						flights();
					}
					
					cout<<"Press any key to go back to main menu:"<<endl;
					cin>>back;
					
					if(back==1){
						mainMenu();
					}
					else{
						mainMenu();
					}
			break;
		}	
		case 5:{
			cout<<"_______________________Welcome to Australian Airlines________________\n"<<endl;
					cout<<"Your Comfort is our priority , Enjoy your journey"<<endl;
					cout<<"Following are the flights\n"<<endl;
					
					cout<<"1> AUS-459"<<endl;
					cout<<"\t08-01-2022 8:00AM 10hrs Rs.34k"<<endl;
					
					cout<<"1> AUS-343"<<endl;
					cout<<"\t09-01-2022 5:00AM 13hrs Rs.44k"<<endl;
					
					cout<<"1> AUS-678"<<endl;
					cout<<"\t08-01-2022 10:00AM 6hrs Rs.42k"<<endl;
					
					cout<<"\nSelect the flight you want to book :"<<endl;
					cin>>choice1;
					
					if(choice1==1){
						charges=34000;
						cout<<"\nYou have successfully booked the flight AUS-459"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==2){
						charges=44000;
						cout<<"\nYou have successfully booked the flight AUS-343"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==3){
						charges=42000;
						cout<<"\nYou have successfully booked the flight AUS-678"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else{
						cout<<"\nInvalid Input,shifting the previous menu"<<endl;
						flights();
					}
					
					cout<<"Press any key to go back to main menu:"<<endl;
					cin>>back;
					
					if(back==1){
						mainMenu();
					}
					else{
						mainMenu();
					}
			break;
		}
		case 6:{
			cout<<"_______________________Welcome to Europian Airlines________________\n"<<endl;
					cout<<"Your Comfort is our priority , Enjoy your journey"<<endl;
					cout<<"Following are the flights\n"<<endl;
					
					cout<<"1> EU-489"<<endl;
					cout<<"\t05-01-2022 2:00AM 10hrs Rs.36k"<<endl;
					
					cout<<"1> EU-654"<<endl;
					cout<<"\t09-01-2022 5:00AM 13hrs Rs.38k"<<endl;
					
					cout<<"1> EU-238"<<endl;
					cout<<"\t08-01-2022 10:00AM 6hrs Rs.40k"<<endl;
					
					cout<<"\nSelect the flight you want to book :"<<endl;
					cin>>choice1;
					
					if(choice1==1){
						charges=36000;
						cout<<"\nYou have successfully booked the flight EU-489"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==2){
						charges=38000;
						cout<<"\nYou have successfully booked the flight EU-654"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else if(choice1==3){
						charges=40000;
						cout<<"\nYou have successfully booked the flight EU-238"<<endl;
						cout<<"You can go back to menu and take the ticket"<<endl;
					}
					else{
						cout<<"\nInvalid Input,shifting the previous menu"<<endl;
						flights();
					}
					
					cout<<"Press any key to go back to main menu:"<<endl;
					cin>>back;
					
					if(back==1){
						mainMenu();
					}
					
					else
					{
						mainMenu();
					}
			break;
		}
		default:
		{
			cout<<"\nInvalid input , Shifting to the main menu"<<endl;
			mainMenu();
			break;
		}
			}
		}
};

float registration::charges;
int registration::choice;
class ticket : public registration,Details{
	public:
		void Bill(){
			string destination="";
			ofstream outf("records.txt");
			{
				outf<<"     XYZ Airlines       "<<endl;
				outf<<"        Ticket           "<<endl;
				outf<<"__________________________"<<endl;
				
				outf<<"Customer ID:"<<Details::cId;
				outf<<"Customer Name:"<<Details::name<<endl;
				outf<<"Customer Gender:"<<Details::gender<<endl;
				outf<<"Description"<<endl<<endl;
				
				
				if(registration::choice==1){
					destination="Dubai";
				}
		        else if(registration::choice==2){
		        	destination="Canada";
				}
				else if(registration::choice==3){
		        	destination="UK";
				}
				else if(registration::choice==4){
		        	destination="USA";
				}
				else if(registration::choice==5){
		        	destination="Australia";
				}
				else if(registration::choice==6){
		        	destination="Europe";
				}
				
				outf<<"Destination\t"<<destination<<endl;
				outf<<"Flight cost :\t"<<registration::charges<<endl;
				
			}
			outf.close();
		}
		void dispBill(){
			ifstream ifs("records.txt");
			{
				if(!ifs){
					cout<<"File Error!"<<endl;
				}
				while(!ifs.eof()){
					ifs.getline(arr,100);
					cout<<arr<<endl;
				}
			}
			ifs.close();
		}
		
	
};


void mainMenu(){
	int lchoice;
	int schoice;
	int back;
	
	cout<<"\t              XYZ airlines\n"<<endl;
	cout<<"_________________Main Menu"<<endl;
	cout<<"\t__________________________"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<endl;
	
	
	cout<<"\tPress 1 to add the Customer details\t"<<endl;
	cout<<"\tPress 2 for Flight Registration\t"<<endl;
	cout<<"\tPress 3 for Ticket and Charges\t"<<endl;
	cout<<"\tPress 4 to Exit\t"<<endl;
	cout<<"\t\t\t\t\t\t\t"<<endl;
	cout<<"____________________________________"<<endl;
	
	cout<<"Enter the choice :"<<endl;
	cin>>lchoice;
	
	Details d;
	registration r;
	ticket t;
	
	switch(lchoice){
		case 1:
			{
				cout<<"_______________Customers______________\n"<<endl;
				d.information();
				cout<<"Press 1 to go back to Main Menu"<<endl;
				cin>>back;
				
				if(back==1){
					mainMenu();
				}
				else{
					mainMenu();
				}
				break;
			}
		case 2:
		    {
		    	cout<<"__________Book a flight using this system__________\n"<<endl;
		    	r.flights();
		    	break;
				}	
		case 3:
		    cout<<"_______Get Your Ticket________\n"<<endl;
			t.Bill();
			
			cout<<"Your ticket is printed, you can collect it \n"<<endl;
			cout<<"Press 1 to display your ticket ";
			
			cin>>back;
			
			if(back==1){
				t.dispBill();
				cout<<"Press any key to go back to main menu:"<<endl;
				cin>>back;
				if(back==1){
					mainMenu();
				}
				else{
					mainMenu();
				}
			}		
			else{
				mainMenu();
			}
			break;
		case 4:
			{
			cout<<"\n\n\t__________________Thank You______________"<<endl;
			break;
			}	
		default:
			{
			cout<<"Invalid input, Please try again\n"<<endl;
			}	
			
	}
}
int main(){
	Management Mobj;
	return 0;
}
