/******************************************************************************

Write a function named coinToss that simulates the tossing of a coin.
When you call the function, it should generate a random number in the range
of 1 through 2. If the random number is 1, the function should display “heads.”
If the random number is 2, the function should display “tails.”
Demonstrate the function in a program that asks the user how many times the coin
should be tossed and then simulates the tossing of the coin that number of times.

*******************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void coinToss()
{
    int number;
    int lower = 1, upper = 2;
    
    number = rand() % (upper-lower + 1) + lower;
    
    if (number == 1)
    cout << "heads" << endl;
    
    else
    cout << "tails" << endl;

}



int main()
{   
    srand(time(NULL));
    int toss_times;
    
    cout << "How many times do you want to toss the coin? "<< endl;
    cin >> toss_times;
    
    for (int i = 1; i <= toss_times; i++)
    {
    coinToss();
     }

    return 0;
}
