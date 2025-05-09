#include <iostream>

using namespace std;

void MoveHanoi(int n, char from, char by, char to);

int main() 
{
    MoveHanoi(3, 'A', 'B', 'C');
    return 0;
}

void MoveHanoi(int n, char from, char by, char to) 
{
    if(n == 1) {cout << "원반 1을" << from << "에서" << to << "로 이동" << endl; }
    else {
        MoveHanoi(n - 1, from, to, by);
        cout << "원반 " << n << "을" << from << "에서" << to << "로 이동" << endl;
        MoveHanoi(n - 1, by, from, to);
    } 
}

