#include <iostream>


using namespace std;
// Getting input from user
int getNum()
{
    int num;
    cout << "Please Enter a Number: ";
    cin >> num;
    return num;
}

int main ()
{

    int digit = getNum();
    // determining and acting on even number inputs
    if (digit % 2 == 0)
    {
        int product;
        for (int i=1; i<=20; i++)
        {
            product = digit * i;
            cout << digit << " * " << i << " = " << "\t" << product << endl;
        }
    }
    // determining and acting on odd number inputs
    else
    {
        int count = 1;
        int runningCount = 0;
        while (count <= 30)
        {
            runningCount++;
            // excluding numbers divisible by input
            if (runningCount % digit != 0)
            {
                cout << "(" << count << ")" << runningCount <<  endl;
                count++;
            }
        }
    }
}