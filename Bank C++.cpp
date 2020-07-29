#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string>
#include<stdio.h>
#include<iomanip>
using namespace std;
class NBPL
{
	//ACC NO : 
	//TYPE OF ACC : 
	//BALANCE AMOUNT IN ACC :
	string acc_no;
	string acc_type; 
float amount;
public :
	//name of depositor :
	string name;
	NBPL(string n, string an, string at, float a);
     Deposit(float d);
	 Withdrawl(float w);
     display();

};
NBPL :: NBPL(string n, string an, string at, float a)
	{	
	system("cls");
	cout<<setw(185)<<setfill('-')<<endl;
	cout<<"\n\t 1. Deposit some amount";
	    cout<<"\n\t 2. Withdrawl some amount\n\t 3. See amount detail\n\t 4. Cancel";
		name = n;
		acc_no = an;
	acc_type = at;
   amount= a;
	}
	 NBPL :: Deposit(float d)
 {
  cout<<"\n What is your account type : \n\n\t 1. Current :\n\t 2. Saving :\n\n\t  Press 1 or 2 \n  => ";
	int choice;
 	cin>>choice;
system("cls");
		 					if (choice == 1)
		cout<<" \nYour account type is Current: \n";
		else if (choice == 2)
		cout<<" \n Your account type is Saving: \n";
		else
		cout<<" \n Your account is not Current nor Saving: \n";
 float deposit;
deposit = d;
	cout<<"\n \t\t<------- DEPOSIT AMOUNT ------->: ";
	cout<<"\n\n Input amout to deposit : $";
	cin>>deposit;
	amount = amount + deposit;
cin.ignore();	}	
	NBPL :: Withdrawl(float w)
	{
		loop2:
		cout<<" \n \t\t< _________WITHDRAWL AMOUNT_________ >";
	float withdrawl;
		withdrawl = w;
		cout<< "\n\n\t Input amount to withdraw : $";
	cin>>withdrawl;
		if(withdrawl>amount)
	cout<<"\n => aby o bekari, baap ka maal smj rkhy..\n";
	if(withdrawl>amount)
	goto loop2; 
	amount = amount - withdrawl;
}
   NBPL :: display()
    {
    cout<< "\nYOUR ACC NO IS :      "<<acc_no<<endl;
    cout<< "\nYOUR ACC TYPE IS :    "<<acc_type<<endl;
	cout<< "\nYOUR NAME :           "<<name<<endl;
	cout<< "\nYOUR ACC BALANCE IS : "<<amount;	
}
main()
{
	again:
		int choice;
NBPL Imad("Imad Khan", "0096 62xx xxxx xxxx", "Current acc", 0);
cout<<" \n\n\tHey there! What do you want, pls select 1, 2, 3 or 4 respectively.\n ";
cout<<setw(95)<<setfill('-')<<endl<<"  => ";
cin>>choice;
switch(choice)
{
 case 1:
  	float dep;
Imad.Deposit(dep);
system("cls");
case 2:
	float wid;
Imad.Withdrawl(wid);
    case 3:
Imad.display();
case 4:
	cout<<"\n\n\t\t\t\tTHANK YOU!";
}
cout<< " \n\n ARE YOU WANT ONE MORE TRANSACTION : \n\n\t\t1. YES\n\n\t\t2. NO\n\t=> ";
cin>>choice;
	if (choice == 1 )
	goto again;
}
