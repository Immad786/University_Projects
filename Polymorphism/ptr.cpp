#include<iostream>
int main() {
  int a = 10;
  int* ptr = &a; 
  *ptr = 11; //how is this possible 
  std::cout<< ptr;
  return 0;
};
