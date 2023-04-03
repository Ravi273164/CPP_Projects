#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;
int main(){
	int a,i=0;
	string text,old,password1,password2,pass,name,password0,age,user,word,word1;
	string creds[2],cp[2];
	
	cout<<"      Security System    "<<endl;
	
	cout<<"_________________________________\n\n";
	cout<<"\t1)Register\n\t2)Login\n\t3)Change Password\n\t4)End Program\n"<<endl;
	
	do{
		cout<<"\n\n";
		cout<<"Enter your choice :"<<endl;
		cin>>a;
		
		switch(a){
			case 1:{
				cout<<"________________________________"<<endl<<endl;
				cout<<"_____________Register___________\n\n"<<endl;
				cout<<"Please enter username :-\n";
				cin>>name;
				cout<<"Enter the password :-";
				cin>>password0;
				cout<<"Please enter your age :-";
				cin>>age;
				
				ofstream of1;
				of1.open("Record.txt");
				if(of1.is_open()){
				   of1<<name<<"\n"<<password0<<"\n"<<age;
					cout<<"\nRegistration Succcessfull\n";
			}
				
				
				break;
			}
		case 2:{
			i=0;
			cout<<"____________________________________"<<endl;
			cout<<"------------Login-------------------"<<endl;
			cout<<"____________________________________"<<endl<<endl;
			
			ifstream of2;
			of2.open("Record.txt");
			cout<<"Please enter the user name:-"<<endl;
			cin>>user;
			cout<<"Please enter the password"<<endl;
			cin>>pass;
			
			if(of2.is_open()){
				while(!of2.eof()){
					{
						while(getline(of2,text)){
							istringstream iss(text);
							iss>>word;
							creds[i]=word;
							i++;
						}
						if(user==creds[0]&&pass==creds[1]){
							cout<<"--Login Successful--";
							cout<<endl<<endl;
							
							cout<<"Details : "<<endl;
							cout<<"Username :"+name<<endl;
							cout<<"Password :"+pass<<endl;
							cout<<"Age :"+age<<endl;
						}
						else{
							cout<<endl<<endl;
							cout<<"Incorrect Credentials"<<endl;
							cout<<"      1)Press 2 to login "<<endl;
							cout<<"      2)Press 3 to change password"<<endl;
							break;
						}
					}
				}
			}
			break;
		}
		case 3:{
			i=0;
			
			cout<<"---------------------Change Password------------------"<<endl;
			ifstream of0;
			of0.open("Record.txt");
			cout<<"Enter the old password:- ";
			cin>>old;
			if(of0.is_open()){
				while(of0.eof()){
					while(getline(of0,text)){
						istringstream iss(text);
						iss>>word1;
						cp[i]=word1;
						i++;
					}
					
					if(old==cp[1]){
						of0.close();
						
						ofstream of1;
						if(of1.is_open()){
							cout<<"Enyer your new password:-";
							cin>>password1;
							cout<<"Enter your password again:-";
							cin>>password2;
							if(password1==password2){
								of1<<cp[0]<<"\n";
								of1<<password1;
								cout<<"Password changed successfully"<<endl;
							}
							else{
								of1<<cp[0]<<"\n";
								of1<<old;
								cout<<"Password do not match"<<endl;
							}
						}
					}
					else{
						cout<<"Please enter a valid password"<<endl;
						break;
					}
				}
			}
			break;
		}
		case 4:{
			cout<<"____________Thank You!________";
			break;
		}
		default:{
			cout<<"Enter a valid choice";
			break;
		}
		}
	}while(a!=4);
	return 0;
}

