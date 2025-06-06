#include <iostream>
#include <queue>
using namespace std;
int main() {
    unsigned long long a, b, c = 0;
    cin >> a >> b;

    queue<unsigned long long> q;
    for (int i = 1; i <= a; i++)
        q.push(i);

    cout << '<';
    while (!q.empty())
    {
        if ((c % b) + 1 == b) {
            cout << q.front();
            if (q.size() != 1)
                cout << ", ";
            q.pop();
        }
        else {
            int x = q.front();
            q.pop();
            q.push(x);
        }
        c++;
    }
    cout << '>';
}