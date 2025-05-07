#include <iostream>

using namespace std;

void RecursiveFunction(int n) 
{
    if(n <= 0) return;
    cout << "Recursive call! " << n << endl;
    RecursiveFunction(n - 1);
}

int main() 
{
    RecursiveFunction(5);
    return 0;
}   

