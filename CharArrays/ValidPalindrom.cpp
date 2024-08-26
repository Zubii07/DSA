
/*A palindrome is a word, phrase, number, or any other sequence of characters that reads the same
  forward and backward (ignoring spaces, punctuation, and capitalization).

  Examples of Palindromes:
1) Words:
    "madam"
    "racecar"
    "level"

2) Phrases (ignoring spaces and punctuation):
    "A man, a plan, a canal, Panama!"
    "Madam, in Eden, I'm Adam."

3) Numbers:
    121
    12321
    1001
  */

#include <iostream>
#include <cstring>
using namespace std;
bool ispalindrom(char str[], int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        if (str[start++] != str[end--])
        {
            cout << " not Valid Palindrom" << endl;
            return false;
        }
    }
    cout << " Valid Palindrom" << endl;
    return true;
}
int main()
{
    char word[] = "racecar";
    ispalindrom(word, strlen(word));

    return 0;
}
