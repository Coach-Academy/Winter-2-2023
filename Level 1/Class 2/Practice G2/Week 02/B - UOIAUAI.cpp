#include <iostream>
using namespace std;
int main()
{
  char s;
  cin >> s;
  if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')
    cout << "vowel\n";
  else
    cout << "consonant\n";
  return 0;
}
