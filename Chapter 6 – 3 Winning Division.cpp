/******************************************************************************

Write a program that determines which of a company’s four divisions (Northeast,
Southeast, Northwest, and Southwest) had the greatest sales for a quarter.
It should include the following two functions, which are called by main.

• double getSales() is passed the name of a division.
It asks the user for a division’s quarterly sales figure,
validates the input, then returns it. It should be called once for each division.

• void findHighest() is passed the four sales totals.
It determines which is the largest and prints the name
of the high grossing division, along with its sales figure.

Input Validation: Do not accept dollar amounts less than $0.00.

*******************************************************************************/

#include <iostream>

using namespace std;

string NE = "Northeast", SE = "Southeast", NW = "Northwest", SW = "Southwest";
double NE_sales, SE_sales, NW_sales, SW_sales;

double getSales(string name)
{
    double sales; //declaring a variable for return
    cout << "Enter quarterly sales for "<< name << ": " << endl;
    cin >> sales;
    
    while (sales < 0.00)
    {
        cout << "Error. Enter a positive number for sales: "<<endl;
        cin >> sales;
    }
    
    return sales;
    
}

    void findHighest(double a, double b, double c, double d)
    {
        if( (a>b) && (a>c) && (a>d) )
        cout << NE << " " << NE_sales;
        
        else if ( (b>a) && (b>c) && (b>d) )
        cout << SE << " " << SE_sales;
        
        else if ( (c>a) && (c>b) && (c>d) )
        cout << NW << " " << NW_sales;
        
        else if ( (d>a) && (d>b) && (d>c) )
        cout << SW << " " << SW_sales;
        
        
    }

int main()
{
    
    NE_sales=getSales(NE);
    SE_sales=getSales(SE);
    NW_sales=getSales(NW);
    SW_sales=getSales(SW);
    
    findHighest(NE_sales, SE_sales, NW_sales, SW_sales);
    

    return 0;
}
