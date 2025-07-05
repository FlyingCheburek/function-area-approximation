#include <stdexcept>
#include <utility>
#include <functional>
#ifndef SIMPSONS_RULE_HPP
#define SIMPSONS_RULE_HPP
namespace SimpsonsRule {
    double sum(const std::pair<double, double> interval, const int64_t n, std::function<double(const double)> func);
}
#endif