//                    ONLINE LIBRARY SYSTEM
/* WHERE ADMIN CAN ADD BOOKS AS PDF
   AND USER CAN BORROW BOOKS
   BUT ADMIN / USER MUST HAVE
TO ATTEMT TWO STEP VERIFICATION CODE
*/
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

class lib
{
private:
    int std;
    long int books = 0;
    float tel;
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
    int adminPin;
    do
    {

        system("cls");
        cout << "\n ---------- Admin Login -------";
        cout << "\n Enter Admin Pin: ";
        cin >> adminPin;
        if (adminPin != 786)
        {
            cout << "Incorrect username or Password combination, Please try again. \n"
                 << endl;
        }
        else
        {

            cout << " Access granted.. " << endl;
        }
    } while (adminPin != 786);

    void search(int);
    void display(void);
    cout << "\n\t\t\t\t\t FACULITY \n\n";
    cout << "ENTER UNIVERSITY NAME :  ";
    cin >> name;
    cout << "ENTER NO OF BOOKS YOU WANT TO ADD :  ";
    cin >> books;
    cout << "LIBRARY TEL NO in this format : (e.g : 09921111) : ";
    cin >> tel;
    system("cls");
}

void lib::librarian(int j)

{
    int add;

    if (tel == j)

    {
        cout << "ENTER THE NO OF BOOKS YOU WANT TO ADD ";
        cin >> add;
        books = books + add;
        cout << "\n BOOKS ARE SUCCESSFULLY ADDED !!! \n ";
    }
}

void lib::user(int k)
{
    int counter;
    int issued, p;

    if (tel == k)

    {
        int userPin;
        do
        {
            do
{
                system("cls");
            cout << "\n ---------- USER Login -------";
            cout << "\n Enter Admin Pin: ";
            cin >> userPin;
            if (userPin != 2582)
            {
                cout << "Incorrect username or Password combination, Please try again. \n"
                     << endl;
            }
            else
            {

                cout << " Access granted.. " << endl;
            }
        } while (userPin != 2582);

        cout << "YOUR CURRENT BOOKS IN LIBRARY ARE " << books << "\n";
        cout << "HOW MANY BOOKS YOU WANT ";
        cin >> issued;
        p = books - issued;}
        
        while (issued <= 3);

        {

            if (p < 0)
                cout << "SORRY !!! THERE IS NOT A SINGLE BOOK IN LIBRARY\n";
            else if (p >= 0)
            {
                cout << "\n\t Successfully issued the book \n\n";
                books = p;
                cout << " \n\n NOW BOOKS IN THE LIBRARY ARE : " << books;
            }
        }
    

}
}

void lib::display(void)
{
    cout << "\n\nUNIVERSITY NAME " << name << "\n\nTOTAL BOOKS : " << books << "\n\n";
}

void lib::search(int m)

{

    if (tel == m)
    {
        cout << "\n\nUNIVERSITY NAME " << name << "\n\nTOTAL BOOKS : " << books << "\n\n";
        cout << "\n***************\n\n";
    }
}

int main()
{
    int i, j, k, m, l, y = 0;
    lib b[20];
    int choice;

    do
    {
        cout << "\n\t ***ADMIN***     PRESS 1 TO CREATE ONLINE WEB LIBRARY \n \n";
        cout << "\n\t ***LIBRARIAN*** PRESS 2 TO ADD SOME MORE BOOKS\n\n";
        cout << "\n\t *** USER ***    PRESS 3 IF YOU WANT ACCESS TO ANY BOOK\n\n";
        cout << "                     PRESS 4 IF YOU WANT TO DISPLAY THE TOTAL BOOKS\n\n";
        cout << "                     PRESS 5 IF YOU WANT TO SEARCH ANY BOOK\n\n";
        cout << "\n                     PRESS 6 TO EXIT \n\n\t\n";
        cout << "\n\t\t  Your option...... ";
        cin >> choice;
        switch (choice)
        {
            system("cls");
        case 1:
        {
            cout << " repeat action times (PLEASE PRESS 1)";
            cin >> y;
            cout << "\n\n"; //opening online library
            b[i].control_panel();

            break;
        }
        case 2:
            cout << "\nENTER Library TEL NO "; //add some more books
            cin >> j;
            for (i = 0; i < y; i++)
            {
                b[i].librarian(j);
            }
            break;
        case 3:
            cout << "\nEnter library TEL NO "; //issue books to user
            cin >> k;
            for (i = 0; i < y; i++)
            {
                b[i].user(k);
            }

        case 4:
            for (i = 0; i < y; i++)
            { //display the statistics
                b[i].display();
            }
            break;
        case 5:
            cout << "\n enter library TEL NO "; //Search
            cin >> m;
            for (i = 0; i < y; i++)
            {
                b[i].search(m);
            }
        case 6:
            break;

        default:
            cout << "nYOU HAVE PRESSED THE WRONG KEY. PLEASE TRY AGAIN. nnn";
            break;
        }
    } while (choice != 6);
    getch();
}

