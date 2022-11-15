#include <iostream>
using namespace std;

int main() {
    float a, b, x, y;
    cin >> a >> b >> x >> y;
    float risultato;

    if ((x < 0 && y > 0))
    {
        risultato = a*x - b*y;
    }
    else if ((x >= 0 && y <= 0))
    {
        risultato = a*(x*x) - b*y;
    }
    else
    {
        risultato = a*x - b*(y*y);
    }

    cout << risultato;
    return 0;
}
