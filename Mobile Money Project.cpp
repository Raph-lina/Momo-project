#include <iostream>
using namespace std;

int main() {
	const string defaultpin = "0000";
	const string defaultshortcode = "*170#";
	int attempts = 0;
	int select;
	char option, Y, N;
	string reference, pin, c_pin, new_pin, shortcode, number; 
	float balance, amount;
	balance=1000;
	
		do{
		cout<<"Please enter Momo short code"<<endl;
		cin>>shortcode;
		if (shortcode != defaultshortcode){
			cout<<"Error performing request" <<endl;
			cout<<"  Unknown Error!!!" <<endl;
	}
	else if (shortcode== defaultshortcode){	
			}
		}while (shortcode != defaultshortcode);
		
	do{
		cout<<"Welcome to MTN Mobile Money, please enter your MM PIN "<<endl;
		cin>> pin;
		attempts++;
		if (pin != defaultpin){
			cout<<"Incorrect PIN. Please try again" <<endl;
				if(attempts==3){
				cout<<"Maximum attempts reached."; 
				cout<<"Exiting Program"<<endl;
				switch(attempts){
					break;
				}
			}
		}
	} while (pin != defaultpin && attempts < 3);

cout<<"Main Menu"<<endl;
cout<<"1.Check Balance"<<endl;
cout<<"2. Reset/Change Pin"<<endl;
cout<<"3. Transfer Money"<<endl;
cout<<"4. Exit  "<<endl;
cin>>select;

if(select==1){
	do{
		cout<<"Fee is GHS 0.00. Enter your MM PIN "<<endl;
		cin>> pin;
		attempts++;
		if (pin != defaultpin){
			cout<<"Incorrect PIN. Please try again" <<endl;	
		}
		else if(pin==defaultpin){
			cout<<"Your balance is: GHS"<<balance<<endl;
	}} while (pin != defaultpin && attempts ==3);
}

else if(select==2){
	cout<<" Are You Sure You Want To Change Your Pin?  "<<endl;
	cout<<" Choose Y/N "<<endl;
	cin>>option;
	if(option=='Y'){	
	cout<<"Enter your current Pin "<<endl;
		cin>>c_pin;
		if(c_pin!=defaultpin){
			cout<<"Incorrect Pin"<<endl;
	}
		else if (c_pin==defaultpin){
		cout<<"Enter New Pin" <<endl;
		cin>>new_pin;
		pin==new_pin;
		cout<<" Your New Pin Is "<<new_pin;
	}}
	else if(option=='N'){
		cout<<"Pin reset cancelled"<<endl;
		cout<<"Exiting program";
	switch (option){
		break;
	}}
	else{	
		cout<<"Incorrect choice"<<endl;
		cout<<"Please try again"<<endl;	
	}}

else if(select==3){
	cout<<"Enter Mobile Number "<<endl;
	cin>>number;
	cout<<" "<<endl;
	cout<<"Enter Amount To Transfer "<<endl;
	cin>>amount;
	cout<<" "<<endl;
	cout<<"Enter Reference "<<endl;
	cin>>reference;
	cout<<" "<<endl;
	cout<<"Please enter your MM PIN if you wish to transfer GHS"<<amount<<" to "<<number<<endl;
	cin>>pin;
		
	if(pin == defaultpin && amount <= balance){
			cout<<" "<<endl;
			cout<<"Payment made for GHS"<<amount<<" to "<<number<<"."<<endl;
			cout<<"Current balance: GHS "<<balance-amount<<endl;
			cout<<"Available balance: GHS "<<balance-amount<<endl;
			cout<<"Reference: "<<reference<<endl;
			cout<<"Thank you for using MTN Mobile Money";
	}
	else if(amount > balance ){
			cout<<" Insuficient balance "<<endl;
			cout<<"You would require GHS "<<amount-balance<<" in addition to make this transaction successful."<<endl;
	}
	else if( pin!= defaultpin){
			cout<<"Incorrect pin."<<endl; 
			cout<<"Please try again!!"<<endl;
	}}

else if(select==4){
	cout<<"Thank you for using Mobile Money. "<<endl;
	switch(attempts){
		break;
	}}}

