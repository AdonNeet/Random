/*
 *		Author	: AdonNeet
 *		Date	: 2023-07-07 06:59:40.000-05:00
*/
 
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#include <bits/stdc++.h>  

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


int main()
{
    fast_cin();
    int a, b; cin >> a >> b;
    cout << (a+b)%2;
}