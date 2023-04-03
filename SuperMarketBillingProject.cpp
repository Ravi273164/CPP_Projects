#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;

class shopping{
	private:
		int pcode;
		float price;
		string pname;
	public:
	void menu();
	void administrator();
	void buyer();
	void add();
	void edit();
	void rem();	
	void list();
	void receipt();
};


void shopping::menu(){
	m:
	int choice;
	string email;
	string password;
	
	cout<<"_____________________________________________________"<<endl;
	cout<<"                                                     "<<endl;
	cout<<"                Supermarket billing menu             "<<endl;
	cout<<"                                                     "<<endl;
	cout<<"_____________________________________________________"<<endl;
	cout<<"                                                     "<<endl;
	cout<<"1)Administrator\n";
	cout<<"2)Buyer\n";
	cout<<"3)Exit\n\n"<<endl;
	cout<<"Please Select"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"Please login\n";
			cout<<"Enter email\n";
			cin>>email;
			cout<<"Password\n";
			cin>>password;
			
			if(email=="robby@email.com"&&password=="robby@123"){
				administrator();
			}
			else{
				cout<<"Invalid email/password"<<endl;
			}
			break;
		
		case 2:
		    {
		    	buyer();
				}	
				break;
		case 3:
		    exit(0);
		default:
		{
			cout<<"Please select valid options"<<endl;
					}			
	}
	goto m;
}


void shopping::administrator(){
	m:
	int choice;
	cout<<"\nAdministrator Menu"<<endl;
	cout<<"\n1)Add the product"<<endl;
	cout<<"\n2)Modify the product"<<endl;
	cout<<"\n3)Delete the product"<<endl;
	cout<<"\n4)Back to main menu"<<endl;
	
	cout<<"\n\nPlease enter the choice"<<endl;
	cin>>choice;
	
	switch(choice){
		case 1:
			add();
			break;
		case 2:
		    edit();
			break;
		case 3:
		    rem();
			break;
		case 4:
		    menu();
		    break;
		default:
		    cout<<"Invalid Choice"<<endl;		
	}
	goto m;
	
}



void shopping::buyer(){
	m:
	int choice;
	cout<<"  Buyer \n\n";
	cout<<"\n1)Buy Product\n\n"<<endl;
	cout<<"\n2)Go back    \n\n"<<endl;
	cout<<"Enter your choice : "<<endl;
	cin>>choice;
	
	switch(choice){
		case 1:
			receipt();
			break;
		case 2:
		    menu();
			break;
		default:
		    cout<<"Invalid choice"<<endl;		
	}
	goto m;
}



void shopping::add(){
	m:
	fstream data;
	int c;
	int dis;
	int token=0;
	float p;
	float d;
	string n;
	
	
	cout<<"Add new product :";
	cout<<"Product code of the product ";
	cin>>pcode;
	cout<<"\nName of the product "<<endl;
	cin>>pname;
	cout<<"\nPrice of the product ";
	cin>>price;
	cout<<"\nDiscount on product"<<endl;
	cin>>dis;
	
	data.open("database.txt",ios::in);
	if(!data){
		data.open("database.txt",ios::out);
		data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n"<<endl;
		data.close();
	}
	else{
		data>>c>>n>>p>>d;
		
		while(!data.eof()){
			if(c==pcode){
				token++;
			}
			data>>c>>n>>p>>d;
		}
		data.close();
	}
	
	if(token==1)
	 goto m;
	 
	 else{
	 	data.open("database.txt",ios::out);
		data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n"<<endl;
		data.close();
	 }
	 cout<<"Record Inserted!"<<endl;
}



void shopping ::edit(){
	fstream data,data1;
	int pkey;
	int token=0;
	int dis;
	int c;
	float p;
	float d;
	string n;
	
	cout<<"\nModify the record"<<endl;
	cout<<"\nProduct Code :"<<endl;
	cin>>pkey;
	
	data.open("database.txt",ios::in);
	if(!data){
		cout<<"\nFile doesn't exist!";
	}
	else{
		data1.open("database1.txt",ios::app|ios::out);
		data>>pcode>>pname>>price>>dis;
		while(!data.eof()){
			if(pkey==pcode){
				cout<<"\nProduct new code :";
				cin>>c;
				cout<<"\nName of the product :";
				cin>>n;
				cout<<"\nDiscount :";
				cin>>d;
				data1<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<"\n"<<endl;
				cout<<"\nRecord Edited"<<endl;
				token++;
			}
			else{
				data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<endl;
			}
			data>>pcode>>pname>>price>>dis;
		}
		data.close();
		data1.close();
		
		remove("database.txt");
		rename("database.txt","database1.txt");
		
		if(token==0){
			cout<<"\nRecord not fount sorry"<<endl;
		}
	}
}



void shopping::rem(){
	fstream data,data1;
	int pkey;
	int dis;
	int token=0;
	cout<<"\nDelete product\n"<<endl;
	cout<<"\nProduct code"<<endl;
	cin>>pkey;
	data.open("database.txt",ios::in);
	if(!data){
		cout<<"File doesn't exist";
	}
	else{
		data1.open("databse1.txt",ios::app|ios::out);
		data>>pcode>>pname>>price>>dis;
		while(!data.eof()){
			if(pcode==pkey){
				cout<<"\nProduct deleted successfully"<<endl;
				token++;
			}
			else{
				data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
			}
			data>>pcode>>pname>>price>>dis;
		}
		data.close();
		data1.close();
		remove("database.txt");
		rename("databse1.txt","database.txt");
		
		if(token==0){
			cout<<"\n\nRecord Not Found"<<endl;
		}
	}
}



void shopping::list(){
    fstream data;
	int dis;
	data.open("database.txt",ios::in);
	cout<<"\n\n|_____________________________________\n";
	cout<<"ProductNo\t\tName\t\tPrice\n";
	cout<<"\n\n______________________________________\n";
	data>>pcode>>pname>>price>>dis;
	while(!data.eof()){
		cout<<pcode<<"\t\t"<<pname<<"\t\t"<<price<<"\n";
		data>>pcode>>pname>>price>>dis;
		
	}
	data.close();
	
}



void shopping::receipt(){
	fstream data;
	int arrc[100];
	int arrq[100];
	char choice;
	int c=0;
	float amount=0;
	float dis=0;
	float total=0;
	
	cout<<"\n\n\t\t\t\tRECEIPT"<<endl;
	data.open("database.txt",ios::in);
	if(!data){
		cout<<"\n\nEmpty database";
	}
	else{
		data.close();
		list();
		cout<<"\n_________________________________\n";
		cout<<"\n                                 \n";
		cout<<"         Please place the order    \n";
		cout<<"                                   \n";
		cout<<"\n_________________________________\n";
		do{
			m:
			cout<<"\nEnter Product code :";
			cin>>arrc[c];
			cout<<"\n\nEnter the product quantity :";
			cin>>arrq[c];
			for(int i=0;i<c;i++){
				if(arrc[c]==arrc[i]){
					cout<<"\n\nDuplicate product code,Please try again";
					goto m;
				}
			}
			c++;
			cout<<"\nDo you want to buy another product?if yes press y else no";
			cin>>choice;
		}
		while(choice=='y');
		
		cout<<"\n\n\t\t\t____________________RECEIPT____________________\n";
		cout<<"\nProductNo\tProductName\tProduct Quantity\tPrice\tAmount with discount\n";
		
		for(int i=0;i<c;i++){
			data.open("database.txt",ios::in);
			data>>pcode>>pname>>price>>dis;
			while(!data.eof()){
				if(pcode==arrc[i]){
					amount=price*arrq[i];
					dis=amount-((amount*dis)/100.0);
					total=total+dis;
					cout<<"\n"<<pcode<<"\t\t"<<pname<<"\t\t"<<arrq[i]<<"\t\t"<<price<<"\t\t"<<amount<<"\t\t"<<dis;
				}
				data>>pcode>>pname>>price>>dis;
			}
		}
		data.close();
	}
	cout<<"\n\n______________________________________________";
	cout<<"\n Total Amount :"<<total;	
}



int main(){
	shopping s;
	s.menu();
}
