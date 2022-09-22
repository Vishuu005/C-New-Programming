// Pointer Program to swap 2 numbers without using 3rd variable

********************************************************************
#include <iostream>
                                                                   using namespace std;
int main()
{
    int a = 20, b = 10,∗p1 = &a,∗p2 = &b;
    cout << "Before swap: ∗p1=" <<∗p1 << " ∗p2=" <<∗p2 << endl;
    ∗p1 =∗p1 +∗p2;
    ∗p2 =∗p1 -∗p2;
    ∗p1 =∗p1 -∗p2;
    cout << "After swap: ∗p1=" <<∗p1 << " ∗p2=" <<∗p2 << endl;
    return 0;
}

***************************************************************************Output :

    Before swap : ∗p1 = 20 ∗p2 = 10 After swap : ∗p1 = 10 ∗p2 = 20