#include "bigint.hpp"

bigint::bigint(int n)
{
    if (n == 0) {
        digits = "0";
        return;
    }
    while (n > 0) { // 15
        digits =char(n % 10 + '0') + digits; // '5' + "" -> "5" -> '1' + "5" -> "15"
        n /= 10;
    }
}

bigint bigint::operator+(const bigint& other) const
{
    std::string result = "";
    int carry = 0, i = digits.length() - 1, j = other.digits.length() - 1;
    
    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        if (i >= 0) sum += digits[i--] - '0';
        if (j >= 0) sum += other.digits[j--] - '0';
        result = char(sum % 10 + '0') + result;
        carry = sum / 10;
    }
    return bigint(result);
}

bigint& bigint::operator+=(const bigint& other)
{
    *this = *this + other;
    return *this;
}

bigint& bigint::operator++()
{
    *this += bigint(1);
    return *this;
}

bigint bigint::operator++(int)
{
    bigint temp(*this);
    ++(*this);
    return temp;
}

bigint bigint::operator<<(const bigint& shift) const
{
    int s = shift.toInt();
    if (s <= 0 || digits == "0")
        return *this;
    std::string result = digits;
    for (int i = 0; i < s; i++)
        result += "0";
    return bigint(result);
}

bigint bigint::operator>>(const bigint& shift) const
{
    int s = shift.toInt();
    if (s <= 0) 
        return *this;
    if (s >= (int)digits.length()) 
        return bigint(0);
    std::string result = digits.substr(0, digits.length() - s);
    return result.empty() ? bigint(0) : bigint(result);
}

bigint& bigint::operator<<=(const bigint& shift)
{
    *this = *this << shift;
    return *this;
}

bigint& bigint::operator>>=(const bigint& shift)
{
    *this = *this >> shift;
    return *this;
}

bool bigint::operator<(const bigint& other) const
{
    if (digits.length() != other.digits.length())
        return digits.length() < other.digits.length();
    return digits < other.digits;
}

int bigint::toInt() const
{
    int result = 0;
    for (size_t i = 0; i < digits.length(); i++)
        result = result * 10 + (digits[i] - '0');
    return result;
}