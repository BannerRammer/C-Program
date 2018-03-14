/* Hey guys, this is the first ever program that I made which was made in c++. This
 is also the second time coding in c++ so that's why the code is small. Anyways, thanks */

#include <iostream>

using namespace std;

int main() {
    int Choice;
    
    cout <<"What's Your name?\n" << endl;
    cout <<"Choices of names:\n" << endl;
    cout <<"1. Lorenzo\n" << endl;
    cout <<"2. Mum\n" << endl;
    
    cout << "NAME:\n" << endl;
    scanf("%d", &Choice);
    
    if (Choice == 1) {
        printf ("Excellent name, no bellyflop today!\n");
    }
    if (Choice == 2) {
        printf ("BellyFLOP TIME!\n");
    }
    return 0;
}
