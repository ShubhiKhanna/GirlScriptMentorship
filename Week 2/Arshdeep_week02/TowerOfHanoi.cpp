#include <iostream>

using namespace std;

void TOI(int n, char from, char to, char mid)
{
    if (n == 1)
    {
        cout << " Move disk 1 from " << from << " to " << to << endl;
        return;
    }
    TOI(n - 1, from, mid, to);
    cout << " move disk " << n << " from " << from << " to " << to << endl;
    TOI(n - 1, mid, to, from);
}

int main()
{
    cout << "Enter n:";
    int n;
    cin >> n;
    TOI(n, 'A', 'B', 'C');
    return 0;
}