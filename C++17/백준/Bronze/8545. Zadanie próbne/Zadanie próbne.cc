#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i = s.size() - 1; i >= 0; i--) 
        cout << s[i];
}