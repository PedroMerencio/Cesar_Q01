/*
 * Created by Pedro Merencio Primo Passos
 *
 * This programs uses a method to replace all the
 * spaces with "&32" in a array of characters.
 *
 * It is assumed the original array of characters
 * does not have any space at its beginning nor at
 * its ending.
*/

#include <iostream>
#include "methods.h"

using namespace std;

int main()
{
    char originalSentence[] = "a b c";
    char* returnedSentence;


    returnedSentence = replacingSpace(originalSentence, sizeof(originalSentence));

    cout << "Original: " << originalSentence << endl;
    cout << "Returned: " << returnedSentence << endl;

    delete[] returnedSentence;

    return 0;
}