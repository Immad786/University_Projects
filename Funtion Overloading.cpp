            // I made a simple program of funtion overloading
            
#include<iostream>      
using namespace std; 

// Calculate the area of triangle
int area(int b, int h)                 // funtion with two arguments..
{
    return((0.5) * b * h );
}

// Calculate the area of square
int area(int s)                        // funtion with only one argument..
{
    return (s * s);
}

// calculate the total area surface
int area (int l, int b, int h)         // funtion with three arguments..
{
    return ( 2 * l * b + 2 * b * h + 2 * l * h);
}

int main(){
    cout<<"The total area surface is  "<<area(4, 6, 8)<<endl;
    cout<<"The area of triangle is    "<<area(4, 6)<<endl;
    cout<<"The area of square is      "<<area(4)<<endl;
    return 0;
}

