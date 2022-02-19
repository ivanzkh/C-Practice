/******************************************************************************

Write a program that calculates how much a person would earn over a period of
time if his or her salary is one penny the first day and two pennies the second
day, and continues to double each day. The program should ask the user for the
number of days. Display a table showing how much the salary was for each day,
and then show the total pay at the end of the period. The output should be displayed
in a dollar amount, not the number of pennies.

Input Validation: Do not accept a number less than 1 for the number of days worked.

*******************************************************************************/

#include <iostream>

using namespace std;


int main()
{   
    int numberOfDays, pennies, total_pennies = 1;
    double dollars;
    
    
    cout << "Enter the number of days worked: " << endl;
    cin >> numberOfDays;
    
    while (numberOfDays < 1)
    {
        cout << "ERROR. Number of days worked cannot be negative. "<< endl;
        cout << "Enter the number of days worked: " << endl;
        cin >> numberOfDays;
    }
    
    for (int i = 1; i <=numberOfDays; i++)
    {
        if (i == 1)
        {
            pennies = 1;
            cout << "Earned on day " << i << ": $"<< pennies/100.00<< endl;
        }
        else
        {
          pennies = pennies * 2;
          total_pennies+=pennies;
          cout << "Earned on day " << i << ": $";
          cout << (pennies/100.00) << endl;
          
          //cout << "Earned on day " << i << ": " << setprecision(2);
          //cout << fixed << dollars << endl;
            
        }  
        
    
    }
    
    cout << "Total amount earned for the period: $" << (total_pennies/100.00);

    return 0;
}
