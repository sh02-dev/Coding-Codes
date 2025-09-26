#include <iostream>>
using namespace std;
int main()
{
    int i, j, k, n;
    cout << "enter number:";
    cin >> n;
    for (k = 1; k <= 3; k++)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {
                cout << "*" << " ";
            }
            cout << endl;
        }
    }
}
