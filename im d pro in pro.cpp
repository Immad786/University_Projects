#include<iostream>
#include<conio.h>
#include<string>
#include<stdlib.h>
#include<iomanip>
using namespace std;
class player
{	
public:
			string Player_nm;
		string Team;
		float Average;
		public:
			string nm;
			string tm;
			float avg;
	    player(string nm, string tm, float avg);
		input();
		change();
		void display();
};
    player :: player(string nm, string tm, float avg)
			{
				loop:
			char choice;
				Player_nm =nm ;
				Team = tm;
				Average = avg;
				cout<<"\n\t\t\t_____Main menu_____\n";
				cout<<setw(225)<<setfill('-')<<endl;
				cout<<"\nAre you want input data of player?? (y/n) \n\t\t ====> ";
				cin>>choice;
				if(choice != 'y')
                goto loop;
			}
     player :: input()
			{
	    cout<<"\n Player name : \n\t";
        cin.ignore();
	    getline(cin,Player_nm);
        cout<<"\n Player team : \n\t";
        getline(cin,Team);
        cout<<"\n Player Average : \n\t";
        cin>>Average;
		        system("cls");
			return 0;
			}
	player :: change()
	        {
	   	cout<<"\n Player name : \n\t";
        cin.ignore();
		getline(cin,Player_nm);
        cout<<"\n Player team : \n\t";
        getline(cin,Team);
        cout<<"\n Player Average : \n\t";
        cin>>Average;
			system("cls");
		return 0;
		}
	void player :: display()
		{
			cout<< "\n Player NAME is : "<<Player_nm<<endl;
			cout<< "\n Player TEAM is : "<<Team<<endl;
	     	cout<< "\n Player AVERAGE is : "<<Average<<endl;
				}
main()
{ 
string Player_nm;
 string Team;
  float Average;
  int choice;
    player PSL(Player_nm,Team, Average);
	PSL.input();
	cout<<"\n Options :: \n\t    1.See info of player : "<<endl; 
	cout<<"\t    2.Change info of player : \n";
	cin>>choice;
			if (choice == 1)
{
		PSL.display();
	}
	else if(choice == 2)
again:
	PSL.change();
				cout<<"\n Options :: \n\t ";
				cout<<"  1. See info of player : \n\t 2. Again change info : \n";
	cin>>choice;
		if (choice == 1)
	{	
	    PSL.display(); 
	}
	else if(choice == 2)
{	
	    PSL.change();
	}
else
cout<<"\n Please press 1 or 2 opt.\n Again input data :\n";
if (choice != 1 || choice !=2)
goto again;
return 0;
getch();
}
