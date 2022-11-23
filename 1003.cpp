#include <iostream>

using namespace std;
int main() {
    int citys, roads, nowcity, tocity;
    cin >> citys >> roads >> nowcity >> tocity;
    int teams[citys];
    int i;
    for (i = 0; i < citys; i++) {
        cin >> teams[i];
    }
    int broad[roads][3];
    for (i = 0; i < roads; i++) {
        cin >> broad[i][0] >> broad[i][1] >> broad[i][2];
    }
}