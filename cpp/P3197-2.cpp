#include <iostream>

// 快速幂算法的递归实现
long long fastPower(long long base, long long exponent, long long mod) {
    // 基本情况：当指数为0时，结果为1（任何数的0次方都是1）
    if (exponent == 0) return 1;
    
    // 如果指数为1，直接返回底数（任何数的1次方都是它自己）
    if (exponent == 1) return base % mod;
    
    // 递归情况：将问题规模减半
    long long halfPower = fastPower(base, exponent / 2, mod);
    long long halfPowerMod = (halfPower * halfPower) % mod; // 计算(base^(exponent/2))^2 % mod
    
    // 如果指数是奇数，需要额外乘以base
    if (exponent % 2 == 1) {
        return (halfPowerMod * base) % mod;
    } else {
        return halfPowerMod;
    }
}

int main() {
    long long base, exponent, mod;
    std::cout << "Enter base, exponent, and modulus: ";
    std::cin >> base >> exponent >> mod;
    
    long long result = fastPower(base, exponent, mod);
    std::cout << "Result: " << result << std::endl;
    return 0;
}

