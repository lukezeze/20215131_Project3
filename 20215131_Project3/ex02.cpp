#include <iostream>
#include <string.h>
using namespace std;

class String
{
private:
    char* _chars;
public:
   // String() {}
    String(const char* chars) :_chars{ new char[strlen(chars) + 1] }
    {
        strcpy_s(_chars, strlen(chars) + 1, chars);
    }

    bool operator!=(const String& str) const 
    {
        return strcmp(_chars, str._chars) != 0;
    }

    bool operator<(const String& str) const 
    {
        return strcmp(_chars, str._chars) < 0;
    }

    bool operator>=(const String& str) const 
    {
        return !(*this < str);
    }
};

int main_123() {
    String str0{ "abd" };
    String str1{ "cde" };

    if (str0 != str1)
        cout << "True" << endl;

    if (str0 < str1)
        cout << "str0 < str1" << endl;

    if (str0 >= str1)
        cout << "str0 >= str1" << endl;

    return 0;
}