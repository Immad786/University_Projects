#include <iostream>
#include <conio.h>
using namespace std;

sum ( int a , int b)
{ int temp;
temp = a;
 a = b ;
 b = temp;

}
//this is by pointer variable 
swap ( int *a , int *b)
{ int temp;
 temp = *a;
 *a = *b ;
 *b = temp;

}
//again swapping of values, by refernce var..
swap2 ( int& a , int& b)
{ int temp;
 temp = a;
 a = b ;
 b = temp;
}
 main ( )
 { 
  int q = 6 ;
  int w = 7 ;
  sum ( q, w ) ;
  cout<< " the values are : " << q << "\n " <<w<< endl ;
  swap (&q , &w);
{
cout<< " the values are : " << q << "\n " <<w<< endl ;
	
   }   
   swap2 (q , w);
{
cout<< " the values are : " << q << "\n " <<w<< endl ;
	
   } 
  }
