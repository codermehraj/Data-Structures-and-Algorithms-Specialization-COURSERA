#include <iostream>

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

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%m;
    }

    return current;
}

int main() {
    long long n, m , k;
    std::cin >> n >> m;
    k = get_fibonacci_huge_naive(n,m);
    std::cout<<nth_fib(n%k,m)<<std::endl;
    return 0;
}
