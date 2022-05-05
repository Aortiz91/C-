#include <vector>
#include <iostream>
using namespace std;

int multiplyFactor(vector<int> inputArray)
{
    int first = inputArray[0];
    int last = inputArray[0];
    int biggest, i, mult;
   
    for (i = 0; i < inputArray.size() - 1; i++) {
        if (i == 0)
        {
            biggest = inputArray[0] * inputArray[1];
        }
        else
        {
            mult = (inputArray[i] * inputArray[i + 1]);
            if (mult > biggest)
            {
                biggest = mult;
            }
        }
    }
    cout << biggest << endl;
    return biggest;
};

int main()
{
    vector<int> inputArray {1, 2, 3, -40, 5, 6, 7, 8, 9, 10};
    return multiplyFactor(inputArray);
};