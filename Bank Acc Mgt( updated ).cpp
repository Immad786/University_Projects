#include<iostream>

#include<stdio.h>
#include<conio.h>
using namespace std;

    class lib 
    {
     private:

     int std,keys;
     long int books;
     char name[20];

     public:
     	void control_panel();
     void admin(void);
     void librarian(int);
     void user(int);
     void search(int);
     void display(void);

    };

    void lib::control_panel(void)

     {
     	 void search(int);
     void display(void);
     cout << "\n\t\t\t\t\t FACULITY \n\n" ;
         cout<<"ENTER UNIVERSITY NAME :  ";
         cin>>name;
         cout<<"ENTER NO OF STUDENTS :  ";
         cin>>std ;
         cout<<"ENTER THE LIBRARY KEYS : ";
         cin>>keys;
     }

          void lib::librarian(int j)

    {
          int bnc;

          if(keys==j)

       {
        cout<<"ENTER THE AMOUNT OF MONEY : BDT ";
        cin>>bnc;
        books=books+bnc;
        cout<<"nntJOB HAS DONE WELL !!! n";
       }


    }

    void lib::User(int k)
    {
           int blnc,p;

      if(account==k)

      {
        cout<<"YOUR CURRENT ACCOUNT BALANCE IS BDT "<<balance<<"n"<<"THE AMOUNT OF MONEY YOU WANT TO WITHDRAW IS BDT ";
        cin>>blnc;
           p=books-blnc;
           { if(p<0)
              cout<<"SORRY !!! THERE IS NOT ENOUGH MONEY IN YOUR ACCOUNTn";
            else if(p>=0)
              {
                cout<<"ntYOUR REQUEST TO WITHDRAW MONEY HAS DONEnn";
                books=p;
                cout<< " \n\n NOW BOOKS IN THE LIBRARY ARE : " << books ;
              }

           }
       }

    }


    void bank::display(void)
    {    cout<<<<"\n\nUNIVERSITY NAME "<<name<<"\n\nTOTAL BOOKS : "<<books<<"\n\n";
    }

\

    void bank::search(int m)

    {

     if(account==m)
       {
        cout<<<<"\n\nUNIVERSITY NAME "<<name<<"\n\nTOTAL BOOKS : "<<books<<"\n\n";
         cout<<"\n***************\n\n";
       }

    }

       int main()
       {
      int i,j,k,m,l,y=0;
         lib b[20];
        int choice;
              

          do
        {
    cout<<"\n\t\t\t\t ***ADMIN*** \n PRESS 1 TO CREATE ONLINE WEB LIBRARY \n \n";
	cout<<"\n\t\t\t\t ***LIBRARIAN*** \n PRESS 2 TO ADD SOME MORE BOOKS\n\n";
	cout<<"\n\t\t\t\t *** USER *** \n PRESS 3 IF YOU WANT ACCESS TO ANY BOOK\n\n";

<<"PRESS 4 TO EXIT \n\n\t\n";
    cout<<"Your option......";

    cin>>choice;
               switch(choice)
            {
               case 1:
                 cout<<"nHOW MANY ACCOUNT YOU WANT TO OPEN?\n"; //opening account
                 cin>>y;
                  for(i=0;i<y;i++)
                b[i].open();
                	cout<<"\n\t\t\t\t *** ADMIN *** \nPRESS 4 TO DISPLAY \n";
                		cout<<"PRESS 5 TO SEARCH \n\n";
                cin>>choice;
                switch(choice)
                {
				
				case 1:
                for(i=0;i<y;i++)
                  {                                             //display option
                  b[i].display();
                  }
                break;
              case 2:
                cout<<"nENTER YOUR ACCOUNT NO. ";              //search option
                cin>>m;
                 for(i=0;i<y;i++)
                {
                b[i].search(m);
                }
            }
                 break;
			   break;
              case 2:
                 cout<<"nENTER YOUR ACCOUNT NO. ";             //deposite amount
                 cin>>j;
                 for(i=0;i<y;i++)
                  {
                    b[i].deposite(j);
                  }
              break;
              case 3:
                cout<<"nENTER YOUR ACCOUNT NO. ";              //withdraw money
                cin>>k;
                for(i=0;i<y;i++)
                   {
                   b[i].withdraw(k);
                   }
                break;

             
             case 4:
             break;

                default:cout<<"nYOU HAVE PRESSED THE WRONG KEY. PLEASE TRY AGAIN. nnn";
                break;
            }
           }     while(choice!=4);
    }
