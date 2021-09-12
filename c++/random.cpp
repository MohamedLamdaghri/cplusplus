#include <iostream>
#include <map>
#include <random>
#include <iomanip>

using namespace std;

int main () 
{
    random_device rd;
    default_random_engine eng(rd());
    uniform_int_distribution<> u_d(1, 6);

    int mean = u_d(eng);

    cout << "Randomly-chosen mean: " << mean << endl;

    normal_distribution<> normal_dist(mean, 2);

    map<int, int> hist, hist_ud;

    for (int n = 0; n < 10000; ++n) 
    {
        ++hist[round(normal_dist(eng))];
        ++hist_ud[round(u_d(eng))];
    }
    
    cout <<"Normal distribution around " << mean << endl;
    
    for (const auto& p : hist) {
        cout << fixed << setprecision(1) << setw(2) <<p.first<<' '<<string(p.second/200, '*')<<endl;
    }
    
    cout <<"\nUniform distribution [1,6]:\n" ;

    for (const auto& m : hist_ud) 
    {
        cout << m.first << ' ' << string(m.second/200, '*') << endl;
    }

    return 0;
}