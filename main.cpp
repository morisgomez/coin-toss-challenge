/* COIN TOSS
Write a function named coinToss that simulates the tossing of a coin. When you call the function,
it should generate a random number in the range of 1 through 2. If the random number is 1, the function should display "heads."
If the random number is 2, the function should display "tails." Demonstrate the function in a program that asks the user
how many times the coin should be tossed, then simulates the tossing of the coin that number of times.
*/
#include <iostream>
#include <cstdlib>
using namespace std;

void coinToss (int num) //void bc we dont really need a return value.
{
    int headsA = 1, tailsB = 2, tossTrack = 0;
    srand(time(0));

    for (int count = 1; count <= num; count++)
    {
        int random = rand() % (tailsB - headsA + 1) + headsA;
        if (random == 1)
        {
            tossTrack = tossTrack + 1;
            cout << "toss " << tossTrack << ":" << " heads" << endl;
        }
        else
        {
            tossTrack = tossTrack + 1;
            cout << "toss " << tossTrack << ":" << " tails" << endl;
        }
    }
}

int main ()
{
    cout << "How many times do you want to toss your coin? ";
    int numToss;
    cin >> numToss;
    coinToss(numToss);
    return 0;
}
