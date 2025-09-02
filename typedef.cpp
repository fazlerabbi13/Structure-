#include <iostream>
using namespace std;

typedef struct Structure {
    int x, y;
    
// Alias is specified here
} Hello;

int main() {
    
    // Using alias
    Hello s = { 0, 1 };
    cout << s.x << " " << s.y << endl;
    return 0;
}