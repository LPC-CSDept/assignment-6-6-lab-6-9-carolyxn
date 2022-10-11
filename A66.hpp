//

#include <iomanip>
#include <iostream>
using namespace std;

// complete the function maxmin( )

int maxmin(int num1, int num2, int num3, int &max, int &min)
{
    int nums[3]; 
    nums[0] = num1, nums[1] = num2, nums[2] = num3;

    max = num1; // set max to num1, as a starting value
    min = num1; // set min to num1, as a starting value 
    for (int i = 1; i < 3; i++)
    {
        if (nums[i] > max)
            max = nums[i]; // test to see if it is greater than max, if so, assign that number to max
        if (nums[i] < min)
            min = nums[i]; // test to see if it is less than min, if so, assign that number to min
    }
}