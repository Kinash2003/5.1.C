// 5.1.C.cpp 
#include <iostream>
#include "Bad_exception.h"
#include <Windows.h> 
#include "LongLong_Public.h"
#include "LongLong_Private.h"


using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    LongLong_Public A1, B1, C1;
   

    try
    {
        cout << " Введіть A1: " << endl;
        cin >> A1;
        cout << " Введіть B1: " << endl;
        cin >> B1;

        cout << " A1 + B1: " << endl;
        cout << A1 + B1 << endl;

        cout << " A1 * B1: " << endl;
        cout << A1 * B1 << endl;

        cout << " A > B " << endl;
        if (A1 > B1) cout << " Yes " << endl; else cout << " No " << endl;

        cout << " A < B " << endl;
        if (A1 < B1) cout << " Yes " << endl; else cout << " No " << endl;

        cout << " A == B " << endl;
        if (A1 == B1) cout << " Yes " << endl; else cout << " No " << endl;


        

        cout << " A1++ " << endl; cout << A1++ << endl;
        cout << " A1-- " << endl; cout << A1-- << endl;
        cout << " ++A1 " << endl; cout << ++A1 << endl;
        cout << " --A1 " << endl; cout << --A1 << endl;
    }
    catch (invalid_argument e)
    {
        cout << e.what() << endl;
    }
    catch (bad_exception e)
    {
        cout << e.what() << endl;
    }
    catch (Bad_exception& e)
    {
        cout << e.what() << endl;
    }
    catch (const char* e)
    {
        cerr << e << endl;
    }
    LongLong_Private A2, B2, C2;
    
    try
    {
        cout << " Введіть A2: " << endl;
        cin >> A2;
        cout << " Введіть B2: " << endl;
        cin >> B2;

        cout << " A2 + B2: " << endl;
        cout << A2 + B2 << endl;

        cout << " A2 * B2: " << endl;
        cout << A2 * B2 << endl;

        cout << " A > B " << endl;
        if (A2 > B2) cout << " Yes " << endl; else cout << " No " << endl;

        cout << " A < B " << endl;
        if (A2 < B2) cout << " Yes " << endl; else cout << " No " << endl;

        cout << " A == B " << endl;
        if (A2 == B2) cout << " Yes " << endl; else cout << " No " << endl;




        cout << " A2++ " << endl; cout << A2++ << endl;
        cout << " A2-- " << endl; cout << A2-- << endl;
        cout << " ++A2 " << endl; cout << ++A2 << endl;
        cout << " --A2 " << endl; cout << --A2 << endl;
    }
    catch (invalid_argument e)
    {
        cout << e.what() << endl;
    }
    catch (bad_exception e)
    {
        cout << e.what() << endl;
    }
    catch (Bad_exception& e)
    {
        cout << e.what() << endl;
    }
    catch (const char* e)
    {
        cerr << e << endl;
    }
    return 0;
}