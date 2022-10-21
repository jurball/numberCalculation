#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const short sizes = 25;

    while(true)
    {
        char *mass = new char[sizes];
        int a = 0, c = 0;
        short b = 0, y = 0, x = 0;

        cout << "-----------------INPUT-----------------\n" << "Input number: ";
        cin >> mass;

        if(mass[0] == 'e')
            return 0;

        for(int i = 0; i < sizes; i++)
        {
            if(mass[i] == '0' || mass[i] == '1')
                y++;

            if(y == sizes)
            {
                cout << "ERROR: cannot enter binary code greater than 24";
                return 0;
            }
        }

        y--;
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


        delete[] mass;
        mass = nullptr;
        cout << "-----------------OUTPUT----------------\n" << "Result: " << c << "\n\n";
    }
}
