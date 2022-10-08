#include <iostream>
using namespace std;
int max2(int, int);

int main() {
    int a, b;
    cout << "nter 2 grades" << endl;
    cin >> a >> b ;
    cout << "Biggest grade = "<< max2(a,b)<<endl;
    return 0;
}

// x=a , y=b;

int max2(int x, int y)
{
    if(x>y) return x;
       else return y;
}
