#include <iostream>

using namespace std;

int BitManipulation(int n)
{
    unsigned int count = 0;
    while (n)
    {
        n &= (n - 1);
        count++;
    }
    return count;
}
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    int bit = BitManipulation(num);
    cout << bit << endl;
}