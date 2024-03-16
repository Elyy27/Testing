#include <iostream>
using namespace std;
float bankRate (int t, bool x) 
{
    float r;
    
        if (t > 0 && t < 3) {
            r = 1.9;
        }
        else if (t >= 3 && t < 6) {
            r = 2.2;
        }
        else if (t >= 6 && t < 12) {
            r = 3.2;
        }
        else if (t >= 12 && t < 24) {
            if (x == true) r = 4.8;
            else r = 4.2;
        }
        else if (t >= 24 && t <= 36) {
            if (x == true) r = 5;
            else r = 4.2;
        }
        else if (t > 36 && t <= 60) {
            if (x == true) r = 0;
            else r = 4.2;
        }
        else r = 0;
    return r;
}



int main()
{
    int t;
    bool x;
    cin >> t >> x;
    if (bankRate(t,x) != 0) cout << "r=" << bankRate(t,x) << "%";
    else cout << "Invalid input";

    return 0;
}

