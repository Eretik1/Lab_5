#include <iostream>
#include <cmath>
#include <bitset>

int returnPrivate(int n, int d){
    int p = 0, s = ((n & (1 << 31)) != (d & (1 << 31))) ? -1 : 1;
    n = (n >= 0) ? n : -d;
    d = (d >= 0) ? d : -d;
    d = ~d + 1;
    while(n + d >= 0){
        p++;
        n = n + d;
    }
    p = p * s;
    return p;
}