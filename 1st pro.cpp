#include<iostream>
#include<conio.h>
#include<string.h>
#include<iomanip>
//thats a program created by ur papa g..
using namespace std;
class my_income
{
	private:
	int real_income;
	public:
	int my_fake_income;
	real()
	{
	real_income = 125;
	cout<<endl<<setw(20)<<setfill('>')<<" Jni "<<real_income<<"$ income hai, dsi kisi aan na...\n\n\n\n\n\n";
	}
    fake()
    {
    	my_fake_income = 10000;
    	cout<<endl<<setw(30)<<setfill('>')<<"	ABY MeRi iNcOmE "<<my_fake_income<<"$ hai, nikl bhn k tkky"<<endl;
		cout<<endl<<"   *bsdk pehly password to sahi s likh, real income dkhny k liye...\n\n\n\n\n\n"; }

    
};
	main()
	{
	my_income i1;
	my_income i2;
				cout<<endl<<"\t {~~~~ PROGRAMMING TECH OF BCS 2ND PROGRAMMERS ~~~~}\n\n"<<endl;
cout<<"\t\t  >>> CREATED BY:- \n\n \t\t\t - MR.MOIN"<<endl<<"\t\t\t - MR.AZEEM"<<endl<<"\t\t\t - MR.HUZAIFA\n"<<endl;
cout<<"nikya gl sunr.. pely 4 hrfa da PIN laas.. ____\n\t"<<endl;
loop:
int pass;
cin>>pass;
			if(pass == 9211)
	i1.real(); 
	else if((pass > 0) && (pass < 99999999) && (pass != 9211))
	i2.fake();
	else
		 cout<<"aby saly pin alphabet mn nh hota.. 1 try or maar us..\n ...";
		if(pass != 9211) 
		goto loop;
        char output[] = "CHL HNR 9211 HO JUL SHABA";
        puts(output);
		/*
don't shake ur head..
   this program is created by pro..
   */
getch();
		}

