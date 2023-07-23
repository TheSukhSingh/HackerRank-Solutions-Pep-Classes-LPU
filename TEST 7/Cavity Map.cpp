#include <iostream>
#include <ctime>
#include <fstream>
#include <cmath>
#include <cstring>
#include <cassert>
#include <cstdio>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <complex>
#include <utility>
#include <cctype>
#include <list>
#include <deque>

using namespace std;

#define FORALL(i,a,b) for(int i=(a);i<=(b);++i)
#define FOR(i,n) for(int i=0;i<(n);++i)
#define FORB(i,a,b) for(int i=(a);i>=(b);--i)

typedef long long ll;
typedef long double ld;
typedef complex<ld> vec;

typedef pair<int,int> pii;
typedef map<int,int> mii;

#define pb push_back
#define mp make_pair

#define MV 4
#define MAXN 102
char A[MAXN][MAXN];
char B[MAXN][MAXN];
int dr[] = {-1,0,1,0};
int dc[] = {0,-1,0,1};
int N;
bool is_cavity(int i, int j)  {
    if (i==0 || i==N-1) return false;
    if (j==0 || j==N-1) return false;
    FOR(mv,MV) {
        int i2 = i + dr[mv];
        int j2 = j + dc[mv];
        if (A[i2][j2] >= A[i][j]) return false;
    }
    return true;
}

int main() {
    cin >> N;
    FOR(i,N) scanf("%s",&A[i][0]);
    FOR(i,N) FOR(j,N)
        if (is_cavity(i,j)) B[i][j] = 'X';
        else B[i][j] = A[i][j];
    FOR(i,N) cout << B[i] << endl;
}