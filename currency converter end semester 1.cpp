/*
	Name: Syed Muhammad Khizer Haider
	Copyright: 
	Author: Syed Muhammad Khizer Haider
	Date: 09/12/23 21:57
	Description: Updated currency converter
*/
#include<iostream>
using namespace std;
//function to convert Pakistani currency.
double convertpkrinusd(double amount) {
	return amount*0.0035   ;
}
double convertpkrinPound(double amount) {
	return amount*0.0030  ;
}
double convertpkrinEuro(double amount) {
	return amount*0.0033 ;
}
double convertpkrinYen(double amount) {
	return amount *0.51 ;
}
double convertpkrinLira(double amount) {
	return amount *0.10  ;
}
// functions to convert USD.
double convertusdinPkr(double amount) {
	return 283.99 * amount;
}
double convertusdinEuro(double amount) {
	return 0.93 * amount;
}
double convertusdinPound (double amount) {
	return 0.80 * amount;
}
double convertusdinYen(double amount) {
	return 144.86 * amount;
}
double convertusdinLira(double amount) {
	return 28.98 * amount;
}
// functions to convert GBP
double convertgbpinusd(double amount) {
	return amount*1.25  ;
}
double convertgbpinPkr(double amount) {
	return amount/ 356.35 ;
}
double convertgbpinEuro(double amount) {
	return amount*1.16;
}
double convertgbpinYen(double amount) {
	return amount / 181.78;
}
double convertgbpinLira(double amount) {
	return amount / 36.37 ;
}
//functions to convert euro.
double converteurinPkr(double amount) {
	return amount*305.96 ;
}
double converteurinPound (double amount) {
	return amount*0.86;
}
double converteurinYen(double amount) {
	return amount*156.09 ;
}
double converteurinLira(double amount) {
	return amount*31.22;
}
double converteurinusd(double amount) {
	return amount*1.08;
}
//function to convert Lira.
double converttryinPkr(double amount) {
	return amount*9.80  ;
}
double converttryinPound (double amount) {
	return amount*0.027 ;
}
double converttryinYen(double amount) {
	return amount*5.00 ;
}
double converttryinusd(double amount) {
	return amount*0.035 ;
}
double converttryineuro(double amount) {
	return amount*0.032 ;
}
//function to convert JPY.
double convertjpyinLira(double amount) {
	return amount*0.20    ;
}
double convertjpyinPkr(double amount) {
	return amount*1.96   ;
}
double convertjpyinPound (double amount) {
	return amount*0.0055  ;
}
double convertjpyinusd(double amount) {
	return amount*0.0069  ;
}
double convertjpyineuro(double amount) {
	return amount*0.0064  ;
}
int main() {
	int n;
	string choice;
do{
string curren;
	cout<<"You can convert 6 currencies which are listed below.\nSelect the currency which is to be converted (do type in CAPITAL).\n";
	cout<<"If dollars then type (USD) \nIf UK pounds then type (GBP) \nIf Euro then type (EUR)\nIf Turkish Lira the type (TRY)\nIf japense Yen then type (JPY)\nIf Pakistani Rupee then type (PKR)\n";
	cout<<"Type the type of currency in CAPITAL ALPHABET'S : ";
	cin>>curren;
	cout<<"Enter the amount of:"<<curren<<endl;
	cin>>n;
	
	if(curren=="USD") {
		cout<< n << " Dollar in Pakistan Rupees will be : "<<convertusdinPkr(n)<<endl;
		cout<< n <<" Dollar in UK pounds will be : "<<convertusdinPound(n)<<endl;
		cout<< n <<" Dollar in Euro will be : "<<convertusdinEuro(n)<<endl;
		cout<< n <<" Dollar in Turkish Lira will be :"<<convertusdinLira(n)<<endl;
		cout<< n <<" Dollar in Japense Yen will be : "<<convertusdinYen(n)<<endl;
	} else if(curren=="GBP") {
		cout<< n << " Pound sterling in Pakistan Rupees will be : "<<convertgbpinPkr(n)<<endl;
		cout<< n <<" Pound sterling in US Dollars will be : "<<convertgbpinusd(n)<<endl;
		cout<< n <<" Pound sterling in Euro will be : "<<convertgbpinEuro(n)<<endl;
		cout<< n <<" Pound sterling in Turkish Lira will be :"<<convertgbpinLira(n)<<endl;
		cout<< n <<" Pound sterling in Japense Yen will be : "<<convertgbpinYen(n)<<endl;
	}
	else if(curren=="EUR"){
			cout<< n << " Euro in Pakistan Rupees will be : "<<converteurinPkr(n)<<endl;
		cout<< n <<" Euro in US Dollars will be : "<<converteurinusd(n)<<endl;
		cout<< n <<" Euro in Pound sterling will be : "<<converteurinPound(n)<<endl;
		cout<< n <<" Euro in Turkish Lira will be :"<<converteurinLira(n)<<endl;
		cout<< n <<" Euro in Japense Yen will be : "<<converteurinYen(n)<<endl;
	}
	else if(curren=="TRY"){
			cout<< n << " Turkish Lira in Pakistan Rupees will be : "<<converttryinPkr(n)<<endl;
		cout<< n <<" Turkish Lira in US Dollars will be : "<<converttryinusd(n)<<endl;
		cout<< n <<" Turkish Lira in Pound sterling will be : "<<converttryinPound(n)<<endl;
		cout<< n <<" Turkish Lira in Euro will be :"<<converttryineuro(n)<<endl;
		cout<< n <<" Turkish Lira in Japense Yen will be : "<<converttryinYen(n)<<endl;
	}
	else if(curren=="JPY"){
			cout<< n << " Japense Yen in Pakistan Rupees will be : "<<convertjpyinPkr(n)<<endl;
		cout<< n <<" Japense Yen in US Dollars will be : "<<convertjpyinusd(n)<<endl;
		cout<< n <<" Japense Yen in Pound sterling will be : "<<convertjpyinPound(n)<<endl;
		cout<< n <<" Japense Yen in Turkish Lira will be :"<<convertjpyinLira(n)<<endl;
		cout<< n <<" Japense Yen in Euro will be : "<<convertjpyineuro(n)<<endl;
	}
	else if(curren=="PKR"){
			cout<< n << " Pakistan Rupees in Euro will be : "<<convertpkrinEuro(n)<<endl;
		cout<< n <<" Pakistan Rupees in US Dollars will be : "<<convertpkrinusd(n)<<endl;
		cout<< n <<" Pakistan Rupees in Pound sterling will be : "<<convertpkrinPound(n)<<endl;
		cout<< n <<" Pakistan Rupees in Turkish Lira will be :"<<convertpkrinLira(n)<<endl;
		cout<< n <<" Pakistan Rupees in Japense Yen will be : "<<convertpkrinYen(n)<<endl;
	}
	else{
		cout<<"\nEnter registered currency, any other entry other then the above mentioned entries will not be accepted";
	}
	cout<<"\nIf you want to try again then enter (again), if not then type any thing else\nChoose : ";
	cin>>choice;
}
while(choice=="again");
	return 0;
}