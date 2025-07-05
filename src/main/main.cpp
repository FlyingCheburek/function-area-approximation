#include <iostream>
#include "approximation-rules/riemanns_sum.hpp"
#include "approximation-rules/simpsons_rule.hpp"
#include "approximation-rules/trapezoidal_rule.hpp"

int main() {  
    try {
        std::cout << TrapezoidalRule::sum
        (
            std::make_pair(1.0, 5.0), 
            4,
            [](const double x) -> double { return 1.0/x; }   
        ) 
        << std::endl;
    } catch (std::exception err) {
        std::cerr << "Error: " << err.what() << "\n";
    }
    return 0; 
}