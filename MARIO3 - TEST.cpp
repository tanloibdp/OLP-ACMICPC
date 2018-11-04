#include <iostream>
#define md 1000000000
using namespace std;

int a[1002], n;
long long f[1002], t[1002];

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    f[0] = 1;
    for(int i = 1; i <= n + 1; i++){
        if(a[i] == 0){
            if(a[i - 1] != 2) f[i] += f[i - 1];
            f[i] %= md;
            if(a[i - 2] != 2 && i >= 2) f[i] += f[i - 2];
            f[i] %= md;
            if(a[i - 3] == 0 && i >= 3) f[i] += f[i - 3];
            f[i] %= md;
        }
        if(a[i] == 1){
            if(a[i - 1] != 2) f[i] += f[i - 1];
            f[i] %= md;
        }
    }
    cout << f[n + 1];
}
