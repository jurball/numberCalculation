#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const short sizes = 4;

    while(true)
    {
        char *mass = new char[sizes];
        short x = 0, a = 0, y = -1, b = 0, c = 0;

        cout << "-----------------INPUT-----------------\n" << "Input number: ";
        cin >> mass;

        if(mass[0] == '.ex')
            return 0;

        for(int i = 0; i < sizes; i++)
        {
            if(mass[i] == '0' || mass[i] == '1')
                y++;
        }

        x = y + 1;

        do
        {
            if(mass[b] == '1')
            {
                a = 1 * pow(2, y);
                c = a + c;
            }
            y--;
            b++;
        } while(b < x);

        cout << "-----------------OUTPUT----------------\n" << "Result: " << c << "\n\n";
    }
}
