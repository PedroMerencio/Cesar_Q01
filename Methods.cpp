/*
 * Created by Pedro Merencio Primo Passos
 *
 * This source code file contains the implementation to
 * a method that replaces all the spaces with "&32"
 * in a array of characters.
 *
 * It is assumed the original array of characters does
 * not have any space at its beginning nor at its ending.
*/
#include <cstdlib>
#include <iostream>

using namespace std;

char* replacingSpace( char arr[], unsigned int size )
{
    unsigned int spaceCounter = 0;
    unsigned int newSize = 0;
    static char* newArr = NULL;
    unsigned int i = 0, j = 0;

    // Counting total of spaces characters in the array
    for ( i = 0; i < size; i++ )
    {
        if ( arr[i] == ' ' )
            spaceCounter++;
    }
    newSize = size + 2 * spaceCounter;

    // Allocating memory for the new array
    if ( !(newArr = new char[newSize]) )
    {
        cout << "Error: memory not allocated." << endl;
        exit(1);
    }

    // Replacing characters
    for ( i = 0; i < size; i++ )
    {
        if ( arr[i] == ' ' )
        {
            newArr[j++] = '&';
            newArr[j++] = '3';
            newArr[j++] = '2';
        }
        else
        {
            newArr[j++] = arr[i];
        }
    }

    return newArr;
}