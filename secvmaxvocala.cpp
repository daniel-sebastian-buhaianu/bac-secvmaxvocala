#include <iostream>
#include <cstring>
#define NMAX 101
using namespace std;
int main()
{
    int n, lg;
    char s[NMAX], v, *p, *q;
    cout << "v = "; cin >> v;
    cout << "n = "; cin >> n;
    cin.get(); // sar peste newline
    cin.get(s, n+1);
    p = strchr(s, v);
    q = strchr(p+1, v);
    if (!p || !q)
        cout << "nu exista";
    else
    {
        while (q)
        {
            lg = (int)(q-p)+1;
            q = strchr(q+1, v);
        }
        cout << lg;
    }
    return 0;
}
