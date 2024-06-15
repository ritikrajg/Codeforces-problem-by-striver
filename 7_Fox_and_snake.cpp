#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int k = 1;
    for (int i = 1; i <= n; i++)
    {

        if (i % 2 != 0)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << "#";
            }
        }
        else if (i % 2 == 0 && k % 4 == 0)
        {
            cout << "#";
            for (int j = 1; j < m; j++)
            {
                cout << ".";
            }
        }
        else
        {
            for (int j = 1; j < m; j++)
            {
                cout << ".";
            }
            cout << "#";
        }
        k++;
        cout << endl;
    }
    return 0;
}