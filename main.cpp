#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long a, b, c, d, e, f;
    if (!(cin >> a >> b >> c >> d >> e >> f)) return 0;

    long long curr_time = f * b * a + e * a + d;
    long long M = min({a, b, c});
    
    long long ans = -1;
    for (long long x = 0; x < M; ++x) {
        long long target_time = x * b * a + x * a + x;
        if (target_time >= curr_time) {
            ans = target_time - curr_time;
            break;
        }
    }
    
    if (ans == -1) {
        long long day_seconds = c * b * a;
        ans = day_seconds - curr_time;
    }
    
    cout << ans << endl;
    return 0;
}
