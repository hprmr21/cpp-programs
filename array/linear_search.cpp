#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {2,5,6,3,8,3,12,8,98,55,33,0};

    int l = arr.size();

    int num;

    cout << "Enter the number you need to search: ";
    cin >> num;

    for(int i = 0; i < l; i++) {

        if(arr[i] == num) {

            cout << "Found at index: " << i;

            return 0;
        }
    }

    cout << "Element not found";

    return 0;
}