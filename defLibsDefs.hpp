#define _CRT_SECURE_NO_WARNINGS
#include <assert.h>

#include <algorithm>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <functional>

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define defNlibs

typedef long long ll;
typedef unsigned long long ull;

const long long INF = 1e18;
const long long MD7 = 7 + 1e9;

void FILE_IO(char* inFile = "", char* outFile = ""){
    if (inFile != "")
        freopen(inFile, "R", stdin);
    if (outFile != "")
        freopen(outFile, "W", stdout);
}

using namespace std;