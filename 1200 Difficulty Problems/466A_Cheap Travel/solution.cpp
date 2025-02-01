#include <iostream>

using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    
    int cost = 0;
    int completed = 0;
    int curCost;
    
    while (completed < n) {
        if (n - completed >= m) {
            curCost = min(a, (b / m));
        }
        else {
            curCost = min(a, b);
            
            if (cost == 0) {
                int singleCost = n * a;
                int minCost = min(singleCost, b);
                cost += minCost;
                
                if (minCost == singleCost) {
                    completed += n;
                } else {
                    completed += m;
                }
            }
            else {
                cost += curCost;
                
                if (curCost == a) {
                    completed++;
                } else {
                    completed += m;
                }
            }
        }

        if (curCost == a && n - completed >= m) {
            cost += a;
            completed++;
        }
        else if (curCost == (b / m) && n - completed >= m) {
            cost += b;
            completed += m;
        }
    }
    
    cout << cost << endl;
}
