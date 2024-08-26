#include <iostream>
#include <cstring>
using namespace std;

void Reverse(char word[], int n)
{
    // two pointer technique
    int start = 0, end = n - 1;
    while (start < end)
    {
        swap(word[start], word[end]);
        start++;
        end--;
    }
}
int main()
{
    char word[] = "code";
    Reverse(word, strlen(word));
    cout << " Revrse = " << word << endl;
    cout << " Length of word is: " << strlen(word);
    return 0;
}