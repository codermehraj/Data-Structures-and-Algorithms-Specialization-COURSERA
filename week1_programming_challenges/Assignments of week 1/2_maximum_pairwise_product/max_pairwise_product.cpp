#include <iostream>
#include <vector>
#include <algorithm>

long long MaxPairwiseProduct(const std::vector<long long>& numbers) {
    int a=-1,b=-1;
    long long max_product = 0;
    int n = numbers.size();
    for(int i=0;i<n;i++){
        if(a==-1 || numbers[a]<numbers[i]) a=i;
    }
    for(int i=0;i<n;i++){
        if(a==i) continue;
        if(b==-1 || numbers[b]<numbers[i]) b=i;
    }
    //std::cout<<a<<" "<<b<<std::endl;
    max_product=numbers[a]*numbers[b];
    return max_product;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<long long> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}
