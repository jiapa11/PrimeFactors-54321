#include <iostream>
#include <vector>

using std::vector;

class PrimeFactors {
public:
    vector<int> of(int number) {
        vector<int> result = {};
        if (number > 1) {
            for (int divisor = 2; number > 1; divisor++) {
                while (0 == number % divisor) {
                    result.push_back(divisor);
                    number /= divisor;
                }
            }
        }
        return result;
    }

private:

};