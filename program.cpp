#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num > 0)
        {
            j++;
        }
    }
    cout << j + "s";
    return 0;
}