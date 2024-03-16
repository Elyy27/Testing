#include <iostream>
using namespace std;
float bankRate (int t, bool x) 
{

    if (t > 0 && t < 3) {
        return 1.9;
    }
    else if (t >= 3 && t < 6) {
    return 2.2;
    }
    else if (t >= 6 && t < 12) {
        return 3.2;
    }
    else if (t >= 12 && t < 24) {
        if (x == true) return 4.8;
        else return 4.2;
    }
    else if (t >= 24 && t <= 36) {
        if (x == true) return 5;
        else return 4.2;
    }
    else if (t > 36 && t <= 60) {
        if (x == true) return 0;
        else return 4.2;
    }
    else return 0;
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

