April 21st, 2015

Given the following constraints of the ISBN number, you should write a function that can return True if a number is a valid ISBN and False otherwise.

An ISBN is a ten digit code which identifies a book. The first nine digits represent the book and the last digit is used to make sure the ISBN is correct.

To verify an ISBN you :-
obtain the sum of 10 times the first digit, 9 times the second digit, 8 times the third digit... all the way till you add 1 times the last digit. If the sum leaves no remainder when divided by 11 the code is a valid ISBN.

For example :
0-7475-3269-9 is Valid because

(10 * 0) + (9 * 7) + (8 * 4) + (7 * 7) + (6 * 5) + (5 * 3) + (4 * 2) + (3 * 6) + (2 * 9) + (1 * 9) = 242 

which can be divided by 11 and have no remainder.

For the cases where the last digit has to equal to ten, the last digit is written as X.

For example 156881111X.

BONUS: Create an application that accepts ISBN numbers as user input in a text field. Your program should validate that the input is a valid ISBN number. Retrieving the corresponding book would be even niftier!

from /r/dailyprogrammer