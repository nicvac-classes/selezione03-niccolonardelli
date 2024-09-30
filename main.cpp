#include <iostream>
using namespace std;

int main() 
{
 int n1, n2, massimo;
 cout<< "qual è il primo numero" << endl;
 cin>>n1;
 cout << "qual è il secondo numero" << endl;
 cin>>n2;
 if (n1>n2)
 {
  massimo = n1;
 }
 else
 {
  massimo = n2;
 }
 cout << " il numero massimo è "<< massimo << endl;
}




