#include <iostream>
#include <vector>

using std::vector;

class PrimeFactors {
public:
    vector<int> of(int number) {
        vector<int> result = {};
        if (number > 1) {
            int divisor = 2;
            if (number == 4) {                
                while (0 == number % divisor) {
                    result.push_back(divisor);
                    number /= divisor;
                }
            }
            else if (number == 6) {
                for (int divisor = 2; number > 1; divisor++) {
                    result.push_back(divisor);
                    number /= divisor;
                }
            }
            else {
                result.push_back(number);
            }            
        }
        return result;
    }

private: 
    
};