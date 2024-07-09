//  exception handling - 19.2.24

/*
#include <iostream>
using namespace std;
int main()
{
// throw, catch,, if-else doesn't end the program gracefully
float i = 11;
float j, ans;
cout << "Enter a number" << endl;
cin >> j;

try
{
    ans = i / j;
    cout << ans << endl;

    if (j == 0)
        throw 420;

    else
        ans = i / j;
}
catch (int e)
{
    cerr << " Error! " << e << '\n';
    cout << "Wrong denominator entered" << endl;
}
}
*/

/*
//  program that gives 3 pin attempts
// made a program that gives 3 attempts to enter your pin
#include <iostream>
using namespace std;
int main()
{

    int PWD = 1001;
    int pin;

    for (int i = 0; i < 3; i++)
    {
        cin >> pin;

        try
        {
            if (pin != PWD)
                throw "wrong !!";

            else
                cout << "Right Pin !!";
            break;
        }

        catch (const char *e) // const char* is for char. int e is for integers
        {

            cerr << e << endl;
        }
    }
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int n;

    const int pass = 4231;
    cout << "Enter your pin: ";
    cin >> n;

    if (cin.fail()) // this is to check if we are entering the correct data type
    {
        cerr << "Error. Invalid data type written" << endl;
        return 1;
    }

    try
    {
        if (n == pass)
            cout << "right answer";

        else
        throw "Bokoka";
    }
    catch (const char* e)
    {
        cerr << e << '\n';
    }
}
*/

#include <iostream>
using namespace std;
int main()
{
    string word;

    const string pass = "bahubali";
    cout << "Enter your password: ";
    cin >> word;

    if (cin.fail()) // this is to check if we are entering the correct data type
    {
        cerr << "Error. Invalid data type written" << endl;
    }

    try
    {
        if (word == pass)
            cout << "Jai Mahishmati";

         else
            throw "enti maava";
    }
    catch (const char *e)
    {
        cerr << e << '\n';
    }
}