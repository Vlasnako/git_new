
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("chcp 1251>nul");
    cout << "Number of Friday the thirteenths in XX century" << endl;
    int arr[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };//months
    int days = 13, n_fri = 1, n_yrs = 0;
    for (int i = 4; i < 12; i++)
    {
        if (days % 7 == 0)
        {
            n_fri++;

        }

        days = days + arr[i];
    }
    for (n_yrs = 0; n_yrs < 99; n_yrs++)
    {

        if (n_yrs % 4 == 0)// leap year check
        {
            for (int i = 0; i < 12; i++)
            {
                if (days % 7 == 0)//Friday check
                {
                    n_fri++;
                }
                days = days + arr[i] + 1;
            }
        }
        else
        {
            for (int i = 0; i < 12; i++)
            {
                if (days % 7 == 0)
                {
                    n_fri++;
                }


                days = days + arr[i];
            }
        }

    }
    cout << "total number of days: " << n_fri;
}


