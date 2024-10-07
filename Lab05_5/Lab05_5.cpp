#include <iostream>
#include <cmath>

using namespace std;

int f(const int n, int& depth) {
    if (n == 0)
        return 0;
    else {
        depth += 1;
        return 1 + f(n & (n - 1), depth);
    } 
}

int main()
{
    int n;
    int depth = 0;
    cout << "n = "; cin >> n;
    cout << f(n, depth) << " " << depth;
}




