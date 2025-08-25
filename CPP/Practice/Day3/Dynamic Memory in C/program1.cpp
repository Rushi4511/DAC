#include <iostream>
using namespace std;

int main()
{
    int *ptr = (int *)calloc(3, size_t());

    if (ptr != NULL)
    {
        ptr[0] = 100;
        ptr[1] = 200;
        ptr[2] = 300;

        ptr = (int *)realloc(ptr, 5 * size_t());

        if (ptr != NULL)
        {
            ptr[0] = 100;
            ptr[1] = 200;

            for (int i = 0; i < 5; i++)
            {
                cout << ptr[i] << ",";
            }

            free(ptr);
            ptr = NULL;
        }
    }

    return 0;
}

int main3()
{

    int **ptr = (int **)calloc(4, size_t());

    if (ptr != NULL)
    {

        for (int i = 0; i < 4; i++)
        {
            ptr[i] = (int *)calloc(3, size_t());
        }

        for (int row = 0; row < 3; row++)
        {
            for (int col = 0; col < 3; col++)
            {
                cout << "[" << row << "]" << "[" << col << "]";
                cin >> ptr[row][col];
            }
        }

        for (int row = 0; row < 3; row++)
        {
            for (int col = 0; col < 3; col++)
            {
                cout << ptr[row][col];
            }
        }

        for (int i = 0; i < 4; i++)
        {
            free(ptr[i]);
            ptr[i] = NULL;
        }

        free(ptr);
        ptr = NULL;
    }

    return 0;
};

int main2()
{

    int *ptr;

    ptr = (int *)malloc(3 * size_t());

    if (ptr != NULL)
    {
        ptr[0] = 100;
        ptr[1] = 200;
        ptr[2] = 300;

        for (int i = 0; i < 3; i++)
        {
            cout << "Value of Pointer :" << ptr[i] << endl;
        }

        free(ptr);
        ptr = NULL;
    }

    return 0;
};

int main1()
{

    int *ptr;

    ptr = (int *)malloc(size_t());

    if (ptr != NULL)
    {
        *ptr = 200;
        cout << "Value of Pointer :" << *ptr << endl;
        free(ptr);
        ptr = NULL;
    }

    return 0;
}