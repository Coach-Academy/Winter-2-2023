#include <iostream>
using namespace std;
int main()
{
  char ch;
  cin >> ch;
  if (ch == 'a' || ch== 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    cout << "vowel\n";
  else
    cout << "consonant\n";
  return 0;
}
