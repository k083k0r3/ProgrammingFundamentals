#include <iostream>
#include <string>

using namespace std;

int strsize(char * str);

typedef struct task
{
    char* arr[10];
}task;

int main()
{
    task t1;
    
    for (size_t i = 0; i < 10; i++)
    {
        cout << "Please Enter words: ";
        cin >> t1.arr[i];
    }

    // char* word;

    // size_t max = 0;
    // for (size_t i =0; i < 10; ++i)
    // {
    //     if (strsize(cat.arr[i]) > max)
    //     {
    //         word = cat.arr[i];
    //         max = strsize(cat.arr[i]);
    //     }
    // }
    
    // cout << word;
}



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
//     cout << count;
//     return count;
// }