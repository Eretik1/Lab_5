#include <iostream>
#include <vector>
#include <bitset>
#include <cmath>

/**
 * @brief принимает аргумент х и выводит 2^x
 * 
 * @param x аргумент
 */
void exponentiation(unsigned x){
if(x == 0){
    std::cout << 1 << std::endl;
}
else{
    std::vector<unsigned> v = {2};
    for(int i = 1; i < x; i++){
        int s = v.size();
        for(int ii = 0; ii < s; ii++){
            v[ii] = v[ii] * 2;
            }
        for(int ii = 0; ii < s; ii++){
            if(v[ii] > 9){
                if(ii + 1 >= v.size()){
                    v.push_back(0);
                }
                v[ii + 1] += v[ii] / 10;
                v[ii] %= 10;
            }
        }
    }
    for(int i = v.size() - 1; i >= 0; i--){
        std::cout << v[i];
    }
    std::cout << std::endl;
    }
}