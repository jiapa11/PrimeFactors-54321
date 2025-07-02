#include <iostream>
#include <vector>

using std::vector;

class PrimeFactors {
public:
    vector<int> of(int number) {
        vector<int> result = {};
        if (2 == number) {
            result.push_back(2);
        }
        if (3 == number) {
            result.push_back(3);
        }
        return result;
    }

private: 
    
};