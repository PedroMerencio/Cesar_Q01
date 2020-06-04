/*
 * Created by Pedro Merencio Primo Passos
 *
 * This header file contains the prototype to a method
 * that replaces all the spaces with "&32" in a array
 * of characters.
 *
 * It is assumed the original array of characters does
 * not have any space at its beginning nor at its ending.
*/

/**
  * @brief  Replaces space characters with "&32" in a string.
  * @param  arr: Original array. It is assumed there is no spaces
  *              at the beginning and ending of the string
  * @param  size: Numbers of characters in the original array
  * @return newArr: Pointer to the modified string.
  */
char* replacingSpace( char arr[], unsigned int size );