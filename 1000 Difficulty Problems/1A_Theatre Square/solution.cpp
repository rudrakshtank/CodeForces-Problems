#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long flag = (n + a - 1) / a;
    long long flagw = (m + a - 1) / a;

    long long total_flag = flag * flagw;
    cout << total_flag << endl;
}
