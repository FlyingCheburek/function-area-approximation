#include "simpsons_rule.hpp"

double SimpsonsRule::sum(const std::pair<double, double> interval, const int64_t n, std::function<double(const double)> func) {
    if (n <= 0)  
        throw std::invalid_argument("The number of rectangles (n) should be positive.");
    if (n % 2 != 0)   
        throw std::invalid_argument("The number of rectangles (n) should be even according to Simpson's rule definition.");
    if (interval.first >= interval.second) 
        throw std::invalid_argument("The given interval [begin, end] should be: begin < end");
    double sum = func(interval.first) + func(interval.second); 
    for (double step = (interval.second - interval.first) / n, mul = 4.0, x = interval.first + step; x < interval.second; x += step) {
        sum += mul * func(x);
        mul = mul == 4.0 ? 2.0 : 4.0;
    }
    return sum * ((interval.second - interval.first) / (3.0 * n)); 
}