#include <iostream>
#include <vector>
using std::vector;


long long get_fibonacci_huge_naive(long long n, long long m) {
    
    long long previous = 0%m, ans=0;
    long long current  = 1%m;

    while (1) {
        long long tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%m ;
        ans++;
        if(previous == 0 && current==1) break;
    }

    return ans;
}

long long nth_fib(long long n, long long m){
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    long long k = get_fibonacci_huge_naive(n,m);
    n=n%k;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%m;
    }

    return current;
}

long long get_fibonacci_partial_sum_naive(long long from, long long to) {
    long long sum = 0;

    sum= nth_fib(to+2,10) + 10 - nth_fib(from+1,10);

    return sum % 10;
}

int main() {
    long long from, to;
    std::cin >> from >> to;
    std::cout << get_fibonacci_partial_sum_naive(from, to) << '\n';
}

// Tutorial : https://towardsdatascience.com/course-1-algorithmic-toolbox-part-1-introduction-c29b8175430f