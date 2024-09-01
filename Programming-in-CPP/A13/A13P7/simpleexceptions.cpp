/*
CH-230-A
a13 p7.[cpp]
Amine Chahi
m.chahi@jacobs-university.de
*/
#include <iostream>
#include <cstring>

using namespace std;

/* OwnException class */
class OwnException : public exception
{
private:
    char msg[81];

public:
    OwnException(const char *m) { strncpy(msg, m, 80); }
    const char *what() const noexcept{ return "Own Exception\n"; };
};

/* Function to catch exception by throwing required values */
void functionx(int a)
{
    if (a == 1)
    {
                                                //throwing 'a' when 1 is passed
        throw char('a');
    }
    else if (a == 2)
    {
                                            //throwing 12 when 2 is passed
        throw int(12);
    }
    else if (a == 3)
    {
                                        //throwing true when 3 is passed
        throw bool(true);
    }
    else
    {
    /*throwing ”Default case exception” for default*/
        OwnException b("Default case exception");
        throw b;
    }
}
int main()
{            /*passing 4 values to see each exception*/
    for (int i = 1; i < 5; i++)
        try
        {
            functionx(i);
        }
        /*catching when char is thrown*/
        catch (char a)
        {
            cerr << "Caught in main: " << a << endl;
        }
        /*catching when int is thrown*/
        catch (int a)
        {
            cerr << "Caught in main: " << a << endl;
        }
        /*catching when bool is thrown*/
        catch (bool a)
        {
            /*changing 1 or 0 to true or false by boolalpha*/
            cerr << "Caught in main: " << boolalpha << a << endl;
        }

         catch (OwnException &b)
        {
            cerr << "Caught in main: " << b.what() << endl;
        }
    return 0;
}
