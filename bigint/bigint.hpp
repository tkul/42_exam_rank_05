#ifndef BIGINT_HPP
#define BIGINT_HPP

#include <iostream>

class bigint
{
private:
    std::string digits;
    
public:
    bigint() : digits("0") {}
    bigint(int n);
    bigint(const std::string& str) : digits(str) {} 
    bigint(const bigint& other) : digits(other.digits) {}
    ~bigint() {}
    
    bigint& operator=(const bigint& other) {
        digits = other.digits;
        return *this;
    }
    
    bigint operator+(const bigint& other)const;
    bigint& operator+=(const bigint& other);
    bigint& operator++();
    bigint operator++(int);
    
    bigint operator<<(const bigint& shift) const;
    bigint operator>>(const bigint& shift) const;
    bigint& operator<<=(const bigint& shift);
    bigint& operator>>=(const bigint& shift);
    
    bool operator<(const bigint& other) const;
    bool operator<=(const bigint& other) const { return *this < other || *this == other; }
    bool operator>(const bigint& other) const { return !(*this <= other); }
    bool operator>=(const bigint& other) const { return !(*this < other); }
    bool operator==(const bigint& other) const { return digits == other.digits; }
    bool operator!=(const bigint& other) const { return !(*this == other); }
    
    friend std::ostream& operator<<(std::ostream& os, const bigint& num) {
        os << num.digits;
        return os;
    }
    
    int toInt() const;
};

#endif


