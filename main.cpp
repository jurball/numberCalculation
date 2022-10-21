#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool flags = true;

    while(flags)
    {
        int b = 0, c = 0;

        int y = 0;
        int a = 0;
        int x = 0;
        char mass[16] = {'e'};

        cout << "-----------------INPUT-----------------" << endl;
        cout << "Input number(2): ";

        cin >> mass;
        if(mass[0] == 'e')
            return 0;

        cout << "Index: ";
        cin >> y;

        x = y + 1;

        do
        {
            if(mass[a] == '1')
            {
                c = 1 * pow(2, y);
                b = c + b;
                mass[a] = '0';
            }
            if(mass[a] == '0')
            {
                c = 0 * pow(2, y);
                b = c + b;
                mass[a] = '0';
            }
            a++;
            y--;
        } while(a < x);

        cout << "-----------------OUTPUT----------------" << endl;
        cout << "Result: " << b << endl << endl;
    }

    return 0;
}
