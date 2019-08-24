// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main()
{
    int i = 15;
    
    switch (i) {
        case 0 ... 20:
            printf("randomShit");
            break;
            
        default:
            break;
    }
}
