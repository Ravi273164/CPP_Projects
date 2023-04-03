#include<iostream>
using namespace std;

int main(){
	int quant;
	int choice;
	
//	Quantity
	int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0;
//	Sold
	int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken=0;
//	Total
	int Trooms=0,Tpasta=0,Tburger=0,Tnoodles=0,Tshake=0,Tchicken=0;
	
	cout<<"Quantity of items we have"<<endl;
	cout<<"\nRooms available:"<<endl;
	cin>>Qrooms;
	cout<<"\nQuantity of pasta :"<<endl;
	cin>>Qpasta;
	cout<<"\nQuantity of burger :"<<endl;
	cin>>Qburger;
	cout<<"\nQuantity of noodles :"<<endl;
	cin>>Qnoodles;
	cout<<"\nQuantity of shake :"<<endl;
	cin>>Qshake;
	cout<<"\nQuantity of chicken :"<<endl;
	cin>>Qchicken;
	
	m:
	
	cout<<"\nPlease select from given menu options:"<<endl;
	cout<<"\n1)Rooms";
	cout<<"\n2)Pasta";
	cout<<"\n3)Burger";
	cout<<"\n4)Noodles";
	cout<<"\n5)Shake";
	cout<<"\n6)Chicken-roll";
	cout<<"\n7)Information Regarding sales and collection";
	cout<<"\n8)Exit";
	
	cout<<"\n\nPlease enter your choice\n";
	cin>>choice;
	
	switch(choice){
		case 1:
			cout<<"\nEnter the number of rooms you wants:";
			cin>>quant;
			if(Qrooms-Srooms>=quant){
				Srooms+=quant;
				Trooms+=quant*1200;
				cout<<"\n"<<quant<<" room/rooms have been allotted to you"<<endl;
			}
			else{
				cout<<"\nOnly "<<Qrooms-Srooms<<" Rooms remaining in hotel";
			}
			break;
        case 2:
        	cout<<"\nEnter Pasta Quantity"<<endl;
        	cin>>quant;
        	if(Qpasta-Spasta>=quant){
        		Spasta+=quant;
        		Tpasta+=quant*250;
        		cout<<"\n"<<quant<<" Pasta is delivered"<<endl;
			}
			else{
				cout<<"\nOnly "<<Qpasta-Spasta<<" Pasta remaining in hotel"<<endl;
				
			}
			break;
		case 3:
        	cout<<"\nEnter Burger Quantity"<<endl;
        	cin>>quant;
        	if(Qburger-Sburger>=quant){
        		Sburger+=quant;
        		Tburger+=quant*300;
        		cout<<"\n"<<quant<<" Burger is delivered"<<endl;
			}
			else{
				cout<<"\nOnly "<<Qburger-Sburger<<" Burger remaining in hotel"<<endl;
				
			}
			break;	
        case 4:
        	cout<<"\nEnter Noodles Quantity"<<endl;
        	cin>>quant;
        	if(Qnoodles-Snoodles>=quant){
        		Snoodles+=quant;
        		Tnoodles+=quant*430;
        		cout<<"\n"<<quant<<" Noodles is delivered"<<endl;
			}
			else{
				cout<<"\nOnly "<<Qnoodles-Snoodles<<" Noodles remaining in hotel"<<endl;
				
			}
			break;	
		case 5:
        	cout<<"\nEnter Shake Quantity"<<endl;
        	cin>>quant;
        	if(Qshake-Sshake>=quant){
        		Sshake+=quant;
        		Tshake+=quant*320;
        		cout<<"\n"<<quant<<" Shake is delivered"<<endl;
			}
			else{
				cout<<"\nOnly "<<Qshake-Sshake<<" Shake remaining in hotel"<<endl;
				
			}	
			break;
		case 6:
        	cout<<"\nEnter Chicken Quantity"<<endl;
        	cin>>quant;
        	if(Qchicken-Schicken>=quant){
        		Schicken+=quant;
        		Tchicken+=quant*500;
        		cout<<"\n"<<quant<<" Chicken is delivered"<<endl;
			}
			else{
				cout<<"\nOnly "<<Qchicken-Schicken<<" Chicken remaining in hotel"<<endl;
				
			}
			break;	
		case 7:
		    cout<<"\n\nDetails of sales and collection";
			cout<<"\n\nNumber of Rooms we had :"<<Qrooms;
			cout<<"\n\nNumber of Rooms we for Rent "<<Srooms;	
			cout<<"\nRemaining Rooms :"<<Qrooms-Srooms;
			cout<<"\n\n Total Rooms Collection for the day :"<<Trooms;
			
			cout<<"\n\nNumber of Pasta we had :"<<Qpasta;
			cout<<"\n\nNumber of Pasta we for Rent "<<Spasta;	
			cout<<"\nRemaining Pasta :"<<Qpasta-Spasta;
			cout<<"\n\nTotal Pasta Collection for the day :"<<Tpasta;
			
			cout<<"\nNumber of Burger we had :"<<Qburger;
			cout<<"\nNumber of Burger we for Rent "<<Sburger;	
			cout<<"\nRemaining Burger :"<<Qburger-Sburger;
			cout<<"\nTotal Burger Collection for the day :"<<Tburger;
			
			cout<<"\nNumber of Noodles we had :"<<Qnoodles;
			cout<<"\nNumber of Noodles we for Rent "<<Snoodles;	
			cout<<"\nRemaining Noodles :"<<Qnoodles-Snoodles;
			cout<<"\nTotal Noodles Collection for the day :"<<Tnoodles;
			
			cout<<"\nNumber of Shake we had :"<<Qshake;
			cout<<"\nNumber of Shake we for Rent "<<Sshake;	
			cout<<"\nRemaining Shake :"<<Qshake-Sshake;
			cout<<"\nTotal Shake Collection for the day :"<<Tshake;
			
			cout<<"\nNumber of Chicken we had :"<<Qchicken;
			cout<<"\nNumber of Chicken we for Rent "<<Schicken;	
			cout<<"\nRemaining Chicken :"<<Qchicken-Schicken;
			cout<<"\nTotal Chicken Collection for the day :"<<Tchicken;
			
			cout<<"\nTotal Collection : "<<Trooms+Tpasta+Tburger+Tnoodles+Tshake+Tchicken;
			break;
			
		case 8:
		    exit(0);
		
		default:
			cout<<"\nPlease select the numbers above!"<<endl;
			break;	
	}
	
	goto m;
}
