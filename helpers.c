// Helper functions for music

#include <cs50.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
// Input as a string a fraction and convert it into some integral number of eighths.
// You may assume that duration will only be passed a string formatted as X/Y, whereby each of X and Y is a positive decimal digit, and Y is, moreover, a power of 2.

// TODO
// 1)Ask for string (fraction)
// 2)Take the numerator
// 3) Take the denomenator
// 4) use a common denomenator
// 5) Math to get the number of eights: (Common denominator divided by numberator) x numerator
// 6) Print number of eighths
}
int duration(string fraction)  //use atoi to convert this string to an interger
{     int nume =  atoi(fraction[0]);  //converts the numerator(initially a string) to an interger(using atoi)

       int denom = atoi(fraction[1]);    //converts the denomenator(initially a string) to an interger(using atoi)

       int commonDenom = 8; //use a common denomenator to convert the initial fraction into a fraction of eigths

       int eigths = ((commonDenom / denom * nume));   //math that converts the input into eighths


printf(%n, eights); //prints number of eigths

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    // TODO
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    // TODO
}
