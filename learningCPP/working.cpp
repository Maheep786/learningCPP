// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main()
{
    int i = 15;
    
    switch (i) {
        case 0 ... 20:
            printf("randomShit \n test - 1 \n");
            break;
            
        default:
            break;
    }
}
