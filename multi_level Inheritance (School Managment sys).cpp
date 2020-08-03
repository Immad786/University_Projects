 //                --- SCHOOL MANAGMENT SYSTEM ---
 /*               this is a school  managment system 
      Where every member of School is input his data to login to an account
 */
#include <iostream>
#include <conio.h>
using namespace std;
class identity 
{
  protected:
      string code;
      char name[20];
  public:
      void getsinfo(void)
      {
    /*  	int Pin;
    do
    {
        cout << "\n ------- Login -------";
        cout << "\n Enter Secret Pin: ";
        cin >> Pin; // this pin is secret.. to run this program
        if (Pin != 786)
        {
            cout << "Incorrect username or Password combination, Please try again. \n"
                 << endl;
        }
        else
        {

            cout << " Access granted.. " << endl;
        }
    } while (Pin != 786);
    */
    cout<<"\n\nEnter code :-";
    cin>>code;
    cout<<"Enter name :-";
    cin>>name;
      }
      void dispinfo(void)
      {
       cout<<"\nNAME       :-"<<name;
       cout<<"\nCODE       :-"<<code;
      }
};

class teacher : public identity
{
      char sub[20];
      string classes[10];
  public:
      void create(void)
      {
    getsinfo();
    cout<<"Enter Subject :-";
    cin>>sub;
    cout<<"Enter Classes per week :-";
    cin>>classes[10];
      }
      void display(void)
      {
     dispinfo();
     cout<<"\nSUBJECT    :-"<<sub;
     cout<<"\nPUBLICATION:-"<<classes;
      }
};

class officer : public identity
{
       char grade;
   public:
    void create(void)
    {
       getsinfo();
       cout<<"Enter Grade :-";
       cin>>grade;
    }
    void display(void)
    {
       dispinfo();
       cout<<"\nGRADE      :-"<<grade;
    }
};

class typist : public identity
{
       float speed;
  public:
      void gettypist(void)
      {
    getsinfo();
    cout<<"Enter speed (wpm):-";
    cin>>speed;
      }
      void disptypist(void)
      {
    dispinfo();
    cout<<"\nSPEED      :-"<<speed;
      }
};


class students : public typist
{
     float gpa;
   public:
       void create(void)
    {
      gettypist();
      cout<<"Enter GPA :-";
      cin>>gpa;
    }
    void display(void)
    {
      disptypist();
      cout<<"\nDAILY WAGES:-"<<gpa;
    }
};

main()
{

teacher o1t[10];
students  o1c[10];
officer  o1o[10];
int choice,i;
char test;
while(1)
{
int count;
start:
 
   cout<<"\n=====School Managment SYS=====\n\n\n";
   cout<<"Choose Category of Information\n";
   cout<<"1)   Teachers\n";
   cout<<"2)   Officer\n";
   cout<<"3)   STUDENTS\n";
   cout<<"4)   Exit\n";
   cout<<"Enter your choice:-";
   cin>>choice;
   switch(choice)
   {
      case 1 :  while(1)
        {
        
        cout<<"\n=====TEACHERS INFORMATION=====\n\n";
        cout<<"\nChoose your choice\n";
        cout<<"1) Create\n";
        cout<<"2) Display\n";
        cout<<"3) Jump to Main Menu\n";
        cout<<"Enter your choice:-";
        cin>>choice;
        switch(choice)
        {
         case 1 :  for(count=0,i=0;i<10;i++)
               {
                 cout<<endl;
                 o1t[i].create();
                 count++;
                 cout<<endl;
                 cout<<"\n\nAre you Interested in entering data\n";
                 cout<<"Enter y or n:-";
                 cin>>test;
                 if(test=='y' || test=='Y')
                continue;
                 else goto out1;
                 }
                 out1:
                 break;
         case 2 : for(i=0;i<count;i++)
               {
                cout<<endl;
                 o1t[i].display();
                 cout<<endl;
               }
               getch();
               break;
         case 3 : goto start;
         default: cout<<"\nEnter choice is invalid\ntry again\n\n";
         }
         }
      case 2 :   while(1)
         {
        cout<<"\n=====OFFICERS INFORMATION=====\n\n";
        cout<<"\nChoose your choice\n";
        cout<<"1) Create\n";
        cout<<"2) Display\n";
        cout<<"3) Jump to Main Menu\n";
        cout<<"Enter your choice:-";
        cin>>choice;
        switch(choice)
        {
         case 1 : for(count=0,i=0;i<10;i++)
               {
                cout<<endl;
                o1o[i].create();
                 count++;
                 cout<<endl;
                 cout<<"\n\nAre you Interested in entering data\n";
                 cout<<"Enter y or n:-";
                 cin>>test;
                 if(test=='y' || test=='Y')
                continue;
                 else goto out2;
                 }
                 out2:
                 break;
         case 2 : for(i=0;i<count;i++)
               {
                cout<<endl;
                 o1o[i].display();
                 cout<<endl;
               }
               getch();
               break;
         case 3 : goto start;
         default: cout<<"\nInvalid choice\ntry again\n\n";
         }
         }
      case 3 :  while(1)
        {
        cout<<"\n=====Student INFORMATION=====\n\n";
        cout<<"\nChoose your choice\n";
        cout<<"1) Create\n";
        cout<<"2) Display\n";
        cout<<"3) Jump to Main Menu\n";
        cout<<"Enter your choice:-";
        cin>>choice;
        switch(choice)
        {
         case 1 : for(count=0,i=0;i<10;i++)
               {
                 cout<<endl;
                 o1c[i].create();
                 count++;
                 cout<<endl;
                 cout<<"\n\nAre you Interested in entering data\n";
                 cout<<"Enter y or n:-";
                 cin>>test;
                 if(test=='y' || test=='Y')
                continue;
                 else goto out3;
                 }
                 out3:
                 break;
         case 2 : for(i=0;i<count;i++)
               {
                 cout<<endl;
                 o1c[i].display();
                 cout<<endl;
               }
               getch();
               break;
         case 3 : goto start;
         default: cout<<"\nInvalid choice\ntry again\n\n";
         }
         }
      case 4 : exit(0);
    }
 }
 }
