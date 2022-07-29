#include <bits/stdc++.h>

using namespace std;

char digittochar(int digit)
{
    return digit + '0';
}

int chartodigit(char ch)
{
    return ch - '0';
}

string addnumber(string s1, string s2)
{
    if (s1.length() > s2.length())
    {
        swap(s1, s2);
    }
    string result = "";
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    int carry = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        int d1 = chartodigit(s1[i]);
        int d2 = chartodigit(s2[i]);
        int sum = d1 + d2 + carry;
        int output_digit = sum % 10;
        carry = sum / 10;
        result.push_back(digittochar(output_digit));
    }
    for (int i = s1.length(); i < s2.length(); i++)
    {
        int d2 = chartodigit(s2[i]);
        int sum = d2 + carry;
        int output_digit = sum % 10;
        carry = sum / 10;
        result.push_back(digittochar(output_digit));
    }
    if (carry)
    {
        result.push_back('1');
    }
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    string result = addnumber(s1, s2);
    cout << result << endl;
    return (0);
}