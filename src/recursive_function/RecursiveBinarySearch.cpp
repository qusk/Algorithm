#include <iostream>
#include <vector>

using namespace std;


int BSearchRecursive(vector<int> arr, int first, int last, int target) 
{
    if (first > last ) return -1;

    int mid = (first + last) / 2;

    if(arr[mid] == target) return mid;
    else if(arr[mid] < target) return BSearchRecursive(arr, mid + 1, last, target);
    else return BSearchRecursive(arr, first, mid - 1, target);
}

int main() 
{
    vector<int> arr = {1, 3, 5, 7, 9};
    int index;

    index = BSearchRecursive(arr, 0, arr.size() - 1, 7);
    if (index == -1) cout << "탐색 실패" << endl;
    else cout << "탐색 성공: " << index << endl;

    index = BSearchRecursive(arr, 0, arr.size() - 1, 4);
    if (index == -1) cout << "탐색 실패" << endl;
    else cout << "탐색 성공: " << index << endl;

    return 0;
}