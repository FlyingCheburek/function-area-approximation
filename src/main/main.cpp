#include <iostream>
#include <cmath>
#include "approximation-rules/riemanns_sum.hpp"
#include "approximation-rules/simpsons_rule.hpp"
#include "approximation-rules/trapezoidal_rule.hpp"

const double PI = std::acos(-1.0);

int main() {  
    try {
        std::cout << TrapezoidalRule::sum
        (
            std::make_pair(0.0, 3.0), 
            5,
            [](const double x) -> double { return x*x+1; }  
        ) 
        << std::endl;
    } catch (std::exception err) {
        std::cerr << "Error: " << err.what() << "\n";
    }
    return 0; 
}