#include <iostream>
#include <string>

using namespace std;

int strsize(char * str);
void splitWords(char * str);
int strsize1(char * str);


int count = 0;
int main()
{

    char * str;
    cout << "Enter a sentence: ";
    cin >> str;
    
    
    strsize1(str);
    //splitWords(str);





 }
    
    

// void splitWords(char * str)
// {
    
//     size_t size = strsize(str);
//     for (size_t i = 0; i < size; ++i)
//     {
//         if (str[i] == '-')
//         {
//             cout << endl;
//             count = 0;
//         }
//         else
//         {
//             count++;
//             cout << str[i];                
//         }
//     }
// }

// int strsize(char * str)
// {
//     size_t count = 1;
//     size_t rc = 0;
//     while (str[rc] != '\0')
//     {
//         rc++;
//         if (str[rc] != '\0')
//         {
//             count++;
//         }
//     }
//     return count;
// }

int strsize1(char * str)
{
    //size_t count = 1;
    size_t rc = 0;
    while (str[rc] != '-')
    {
        rc++;
        if (str[rc] != '-')
        {
            rc = rc + 2;
        }
    }
    cout << rc;
    return rc;
}