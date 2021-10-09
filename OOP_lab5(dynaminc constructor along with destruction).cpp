/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Employee
{
 char *E_name, *Employee_department;;
 long *Employee_ID,*s;
 long DA, HRA, TA, Gross_salary;

 public:

 void display()
 {
    cout <<"\n\nName of the Employee: "<< E_name;

     cout << "\n\nEmployee ID: "<<*Employee_ID;

   cout << "\n\nThe department of the employee: "<<Employee_department ;
   
   cout << "\n\nThe basic salary: "<< *s;

   cout << "\n\nDearness allowance: "<< DA;
   cout << "\nHRA: "<< HRA;
   cout << "\nTA: "<< TA;
   cout << "\nEmployees' gross salary: "<< Gross_salary<<"\n\n";
  
 }


 Employee()
 {
    //Implementation of dynamic constructor
    
   E_name = new char[20];
   Employee_department = new char[20]; 
   Employee_ID = new long;
   s = new long;


   cout << "\n\nEnter name of the Employee: ";
   cin.getline(E_name,20);

   cout << "Enter employee ID: ";
  cin >> *Employee_ID;

  cout << "Enter the department of the employee: ";
  cin >> Employee_department;

   cout << "Enter basic salary of the employee: ";
   cin >> *s;
  

   DA = (0.5**s);
   HRA = (0.3**s);
   TA = (0.1**s);
   Gross_salary = *s + DA + HRA + TA;
 }

 //Implementation of destructor
 ~Employee()  
 {
   delete[] E_name; 
   delete[] Employee_department;;
   delete[] Employee_ID;
   delete[] s;
 }

};


int main() 
{
  Employee E;//implementation of Default constructor
  E.display(); 
}
