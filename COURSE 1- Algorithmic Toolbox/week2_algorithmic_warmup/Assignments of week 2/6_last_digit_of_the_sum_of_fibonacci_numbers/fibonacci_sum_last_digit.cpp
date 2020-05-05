#include <iostream>

int fibonacci_sum_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;
    long long tmp_previous;
    for (long long i = 0; i < n - 1; ++i) {
        tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%10;
        sum = (sum+current)%10;
        std::cout<<sum<<std::endl;
    }

    return sum;
}

long long get_fibonacci_last_digit_naive(long long n) {
    if(n<3) return n;
    
    long long  previous = 1;
    long long current  = 2;
    long long tmp_previous;

    for (long long i = 0; i < n - 2; ++i) {
        tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current + 1)%10;
    }

    return current % 10;
}


int main() {
    long long n = 0;
    std::cin >> n;
    std::cout<<get_fibonacci_last_digit_naive(n%60)<<std::endl;
    // last problem's type m=60
    // as we mod by 10 to get the last digit
    // the pisino length of 10 is 60
    // So we need n%60 th sum
    // to calculate sum(n) = sum (n-1) + sum (n-2) + 1
    //fibonacci_sum_naive(n);
    //for(long long i=0;i<=n;i++)
    //std::cout <<i<<" "<< fibonacci_sum_naive(i)<<std::endl;
}
