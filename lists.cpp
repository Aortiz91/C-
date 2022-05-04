#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
 * Add_element - Adds an element to the end of a list using Vectors for dynamic allocation
 * @param: list - the list to add the element to
 * @return: void
 */
void add_element(vector<string> &list)
{
    string fruit;
    char add;
    cout << "Enter a fruit: ";
    cin >> fruit;
    list.push_back(fruit);
    cout << "Do you want to add another fruit? (y/n): ";
    cin >> add;
    if (add == 'y')
    {
        add_element(list);
    }
    else
    {
        //Print the list
        cout << endl;
        cout << "List of fruits: " << endl;
        for (int i = 0; i < list.size(); i++)
        {
            cout << list[i] << endl;
        }
        return;
    }
}

int main ()
{
    vector<string> fruits {};
    
    // Add element to the list 
    add_element(fruits);

    return (0);
}