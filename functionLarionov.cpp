#include <iostream>
#include "functionLarionov.h"

void Sort(int64_t size, int64_t* keys, const char* arr)
{
    bool swapped{};

    for(size_t i = 0; i < size; ++i)
    {
        swapped = false;

        for(size_t j = 0; j < size - i - 1; ++j)
        {
            if(arr[j] > arr[j + 1])
            {
                std::swap(keys[j], keys[j + 1]);
                
                swapped = true;
            }
        }
        if(!swapped)
        {
            break;
        }
    }
}

int64_t FindSum(int64_t* keys, int64_t size)
{
    int64_t result{};

    for(size_t i = 0; i < size; ++i)
    {
        result += keys[i];
    }

    return result;
}

int64_t FindMax(int64_t* keys, int64_t size)
{
    int64_t max{keys[0]};

    for(size_t i = 0; i < size; ++i)
    {
        if(max < keys[i])
        {
            max = keys[i];
        }
    }

    return max;
}

int64_t FindMin(int64_t* keys, int64_t size)
{
    int64_t min{keys[0]};

    for(size_t i = 0; i < size; ++i)
    {
        if(min > keys[i])
        {
            min = keys[i];
        }
    }

   return min;
}