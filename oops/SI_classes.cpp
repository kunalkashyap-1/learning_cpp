#include <bits/stdc++.h>
using namespace std;

class Simple_Interest
{
private:
    int p, r, t, si;

public:
    void getdata()
    {
        cout << " Enter the Principle: " << endl;
        cin >> p;
        cout << " Enter the Rate of Interest: " << endl;
        cin >> r;
        cout << " Enter the Time period: " << endl;
        cin >> t;
    }
    int calc()
    {
        si = (p * r * t) / 100;
        return(si);
    }
};

int main()
{
    Simple_Interest s1;
    s1.getdata();
    cout << " The Simple interest is:- "<<s1.calc();
    return (0);
}