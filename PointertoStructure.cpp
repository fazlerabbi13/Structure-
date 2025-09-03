#include <iostream>
using namespace std;

struct Hello {
    int count;
    void showCount() {
        cout << count << endl;
    }
};

int main() {
    Hello hello = {224};
    
    // Creating pointer
    // Hello *sptr = &hello;
    
    // Accessing using arrow operator
    // sptr->showCount();
    return 0;
}