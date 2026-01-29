#include "head.h"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin >> a >> b;
    cout << add(a,b) << '\n'
         << sub(a,b) << '\n'
         << mult(a,b) << '\n'
         << divide(a,b) << '\n';
}