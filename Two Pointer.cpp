#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define en '\n'
#define ll long long int
#define trace(x) cout << #x << ": " << x << endl
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define mp(x,y) make_pair(x,y)
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define tst int t;cin>>t;while(t--)
#define sortv(v) sort(v.begin(),v.end())
#define r_sort(v) sort(v.rbegin(),v.rend())
#define rvs(v) reverse(v.begin(),v.end())
#define F first
#define S second
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pii pair<int,int>
#define fori(i,a,b) for(int i=a;i<=b;i++)
#define forj(j,a,b) for(int j=a;j<=b;j++)
#define coutv(v) for(auto it:v)cout<<it<<" ";cout<<endl
#define cinv(v) for(auto &it:v)cin>>it
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define unique1(v) int sz=unique(v.begin(),v.end())-v.begin()
#define for_string for(int i=0;i<s.size();i++)
#define maxi(v)  int mx=*max_element(v.begin(),v.end())
/// Ctrl+H  replace
/// Ctrl+/  comment line
/// Ctrl+M  jump to matching brackets
///difference array
/*
5 5
1 2 3 4 5
1 3 2
2 3 4
1 4 1
3 4 3
2 4 5
ans: 4 14 18 13 5

*/

//void solve()
//{
//    int x , q; cin >> x >> q;
//    vector <int> v(x),d(x);
//    cinv(v);
//    d[0] = v[0];
//    for(int i = 1; i < x;i++)
//    {
//        d[i] = v[i] - v[i - 1];
//    }
//    while(q--)
//    {
//        int l, r, x; cin >> l >> r >> x;
//        d[l - 1] += x;
//        d[r] -= x;
//    }
//    //coutv(d);
//    v[0] = d[0];
//    for(int i = 1; i < x; i++)
//    {
//        v[i] = v[i - 1] + d[i];
//    }
//    coutv(v);
//
//}
//
//int main()
//{
//    optimize();
//   // tst
//    {
//        solve();
//    }
//}

///
/*
6 4
1 2 2
2 4 5
2 5 2
4 6 5
ans: 1 2 2 2 2 1
*/
///bruteforce
//void solve()
//{
//    int x, q; cin >> x >> q;
//    vector<set<int>>v(x);
//    while(q--)
//    {
//        int l,r,y; cin >> l >> r >> y;
//        for(int i = l-1; i < r; i++)
//        {
//            v[i].insert(y);
//        }
//    }
//    for(auto &u:v)
//    {
//        cout << u.size() << en;
//    }
//}
//
//int main()
//{
//    optimize();
//    //tst
//    {
//        solve();
//    }
//}

///optimized soln

//const int mx = 1e6+ 9;
//vector<int>ar[mx], rm[mx];
//
//void solve()
//{
//    int x, q; cin >> x >> q;
//    while(q--)
//    {
//        int l,r, y; cin >> l >> r >> y;
//        ar[l - 1].push_back(y);
//        rm[r].push_back(y);
//    }
//    map<int,int> mp;
//    vector<int>pr;
//    for (int i = 0;i < x;i++)
//    {
//        for (auto &x:ar[i])
//        {
//             //pr.push_back(x);
//             mp[x]++;
//        }
//        for (auto &x:rm[i])
//        {
//            //pr.erase(find(pr.begin(),pr.end(),x));
//            mp[x]--;
//            if(mp[x] == 0) mp.erase(x);
//        }
//        //coutv(pr);
//        cout << mp.size() << " ";
//    }
//    cout << en;
//}
//
//int main()
//{
//    optimize();
//    //tst
//    {
//        solve();
//    }
//}


/// https://codeforces.com/contest/295/problem/A
const int mx = 1e5 + 9;
//ll op[mx],l[mx],r[mx],ad[mx];
//ll v[mx], d[mx];
//void solve()
//{
//    ll n, m, k; cin >> n >> m >> k;
////    vector <ll> v(n),d(n);
////    vector <int> l(m),r(m),ad(m),op(m,0);
////    cinv(v);
//    for(int i = 0; i < n; i++) cin >> v[i];
//    d[0] = v[0];
//    for(int i = 1; i < n; i++)
//    {
//        d[i] = v[i] - v[i - 1];
//    }
//    for(int i = 0;i < m;i++)
//    {
//        cin >> l[i] >> r[i] >> ad[i];
//    }
//    for(int i = 0; i < k;i++)
//    {
//        ll a,b; cin>> a >> b;
//        op[a - 1]++;
//        op[b]--;
//    }
//    for(int i = 1; i < m; i++)
//    {
//        op[i] += op[i - 1];
//    }
////    coutv(op);
//    for(auto i = 0; i < m; i++)
//    {
//        d[l[i] - 1] += 1LL*(op[i] * ad[i]);
//        d[r[i]] -= 1LL*((op[i] * ad[i]));
//        //cout << d[l[i] - 1] << " " << d[r[i]] << en;
//    }
////    for(int i = 0; i < n; i++) cout << d[i] << " ";
////    cout << en;
//    for(int i = 1; i < n; i++)
//    {
//        d[i] = d[i - 1] + d[i];
//    }
//    for(int i = 0; i < n; i++) cout << d[i] << " ";
//    cout << en;
//}
//
//int main()
//{
//    optimize();
//    //tst
//    {
//        solve();
//    }
//}

///2D prefix sum////////////////////////////////////

/*
1
5 4
1 5 6 11 8
1 7 11 9 4
4 6 1 3 2
7 5 4 2 3
*/

//void solve()
//{
//    int x, y; cin >> x >> y;
//    vector <vector<int>> ar(x + 1 ,vector<int>(y + 1, 0)),pref(x + 1 ,vector<int>(y + 1, 0));
//    for(int i = 1; i <= x; i++)
//    {
//        for(int j = 1; j <= y; j++) cin >> ar[i][j];
//    }
//    for (int i = 1; i <= x; ++i) {
//        for (int j = 1; j <= y; ++j) {
//            pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + ar[i][j];
//        }
//    }
//    for(auto &u:pref)
//    {
//        for(auto &s:u) cout << s << " ";
//        cout << en;
//    }
//    int q; cin >> q;
//    while (q--) {
//        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
//        long long ans = pref[x2][y2] - pref[x2][y1 - 1] - pref[x1 - 1][y2] + pref[x1 - 1][y1 - 1];
//        cout << ans << endl;
//    }
//
//
//}
//
//int main()
//{
//    optimize();
//    tst
//    {
//        solve();
//    }
//}


///https://cses.fi/problemset/task/1652

//void solve()
//{
//    int x, y; cin >> x >> y;
//    vector <vector<int>> ar(x + 1 ,vector<int>(x + 1, 0)),pref(x + 1 ,vector<int>(x + 1, 0));
//    for(int i = 1; i <= x; i++)
//    {
//        for(int j = 1; j <= x; j++)
//        {
//            char ch; cin>> ch;
//            if(ch == '.') ar[i][j] = 0;
//            else ar[i][j] = 1;
//        }
//    }
//    for (int i = 1; i <= x; ++i) {
//        for (int j = 1; j <= x; ++j) {
//            pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + ar[i][j];
//        }
//    }
//    while (y--) {
//        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
//        long long ans = pref[x2][y2] - pref[x2][y1 - 1] - pref[x1 - 1][y2] + pref[x1 - 1][y1 - 1];
//        cout << ans << endl;
//    }
//}
//int main()
//{
//    optimize();
//    //tst
//    {
//        solve();
//    }
//}

///2D static range update

//const int N = 1e3 + 9;
//long long d[N][N], a[N][N];
//
//int main() {
//    int n, m, q; cin >> n >> m >> q;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            cin >> a[i][j];
//        }
//    }
//    while (q--) {
//        int x1, y1, x2, y2, x; cin >> x1 >> y1 >> x2 >> y2 >> x;
//        d[x1][y1] += x;
//        d[x2 + 1][y1] -= x;
//        d[x1][y2 + 1] -= x;
//        d[x2 + 1][y2 + 1] += x;
//    }
//
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            d[i][j] += d[i - 1][j] + d[i][j - 1] - d[i - 1][j - 1];
//        }
//    }
//
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            a[i][j] += d[i][j];
//        }
//    }
//
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            cout << a[i][j] << " ";
//        }
//        cout << endl;
//    }
//}

///..............two pointer...............................
///..............two pointer...............................
///..............two pointer...............................
///..............two pointer...............................
///..............two pointer...............................
/// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A]

//
//int main() {
//    int n, m; cin >> n >> m;
//    vector<int> a(n), b(m);
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//    }
//    for (int i = 0; i < m; ++i) {
//        cin >> b[i];
//    }
//
//    vector<int> ans;
//    int i = 0, j = 0;
//    while (i < n and j < m) {
//        if (a[i] < b[j]) {
//            ans.push_back(a[i]);
//            i++;
//        } else {
//            ans.push_back(b[j]);
//            j++;
//        }
//    }
//    while (i < n) {
//        ans.push_back(a[i]);
//        i++;
//    }
//    while (j < m) {
//        ans.push_back(b[j]);
//        j++;
//    }
//
//    for (int x : ans) {
//        cout << x << " ";
//    }
//    cout << endl;
//}

///https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A
//using ll = long long;
///bruteforce

//void solve()
//{
//    ll x , y; cin >> x >> y;
//    vector <int> v(x);
//    cinv(v);
//    int ans = 0;
//    //ll sum = 0;
//    for(int i = 0; i < x; i++)
//    {
//        ll sum = 0;
//        for(int j = i; j < x; j++)
//        {
//            sum += v[j];
//            if(sum <= y) ans = max(ans , j - i + 1);
//        }
//    }
//    cout << ans << en;
//
//
//}
//
//int main()
//{
//    optimize();
//    //tst
//    {
//        solve();
//    }
//}

///optimized soln
//void solve()
//{
//    ll x , y; cin >> x >> y;
//    vector <int> v(x);
//    cinv(v);
//    ll sum = 0;
//    int r = 0;
//    int ans = 0;
//    for(int i = 0; i < x; i++)
//    {
//        while(r < x && sum + v[r] <= y)
//        {
//            sum += v[r];
//            r++;
//        }
//        ans = max(ans, r - i);
//        sum -= v[i];
//    }
//    cout << ans << en;
//}
//
//int main()
//{
//    optimize();
//    {
//        solve();
//    }
//}

///https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/C

//void solve()
//{
//    ll x , y; cin >> x >> y;
//    vector <int> v(x);
//    cinv(v);
//    ll sum = 0;
//    int r = 0;
//    int ans = 0;
//    ll cnt = 0;
//    for(int i = 0; i < x; i++)
//    {
//        while(r < x && sum + v[r] <= y)
//        {
//            sum += v[r];
//            r++;
//        }
//        cnt += r - i;
//        //ans = max(ans, r - i);
//        sum -= v[i];
//    }
//    cout << cnt << en;
//    //cout << ans << en;
//}//
//
//int main()
//{
//    optimize();
//    {
//        solve();
//    }
//}

///https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/D
//
//void solve()
//{
//    ll x , y; cin >> x >> y;
//    vector <int> v(x);
//    cinv(v);
//    ll sum = 0;
//    int r = 0;
//    int ans = 0;
//    ll cnt = 0;
//    for(int i = 0; i < x; i++)
//    {
//        while(r < x && sum + v[r] < y)
//        {
//            sum += v[r];
//            r++;
//        }
//        cnt += x - r;
//        ans = max(ans, r - i);
//        sum -= v[i];
//    }
//    cout << cnt << en
//}//
//
//int main()
//{
//    optimize();
//    {
//        solve();
//    }
//}


/// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F
//
//void solve()
//{
//    ll x , y; cin >> x >> y;
//    vector <ll> v(x);
//    cinv(v);
//    ll r = 0;
//    ll cnt = 0;
//    ll mn, mx;
//    multiset<ll> s;
//    for(ll i = 0; i < x; i++)
//    {
//        while(r < x)
//        {
//            s.insert(v[r]);
//            mn = *(s.begin());
//            mx = *(--s.end());
//
//            if(mx - mn > y)
//            {
//                //cout << "max " << mx << " min: " << mn << en;
//                s.erase(s.find(v[r]));
//                break;
//            }
//            r++;
//        }
//        //for(auto &u: s) cout << u << " ";
//        //cout << en;
//        s.erase(s.find(v[i]));
//       // cout << "when value " << v[i] << " : " << r - i << en;
//        cnt += r - i;
//
//    }
//    cout << cnt << en;
//
//}
//
//int main()
//{
//    optimize();
//    //tst
//    {
//        solve();
//    }
//}


///sliding window
//
//void solve()
//{
//    int x, y; cin >> x >> y;
//    vector <int> v(x);
//    cinv(v);
//    ll sum = 0,ans = 0;
//    for (int i = 0 ; i < x; i++)
//    {
//        sum += v[i];
//        if(i >= y - 1)
//        {
//            cout << sum << " ";
//            ans = max(ans, sum);
//            sum -= v[i - y + 1];
//        }
//    }
//    cout << ans << en;
//}
//
//int main()
//{
//    optimize();
//   //tst
//    {
//        solve();
//    }
//}
///6 6 6 8 9
///maximum of all subarrays of length y
//void solve()
//{
//    int x, y; cin >> x >> y;
//    vector <int> v(x);
//    cinv(v);
//    multiset<int> s;
//    for (int i = 0; i < x; i++)
//    {
//        s.insert(v[i]);
//        if(i >= y - 1)
//        {
//            cout << *(--s.end()) << " ";
//            s.erase(s.find(v[i - y + 1]));
//        }
//    }
//
//}
//
//int main()
//{
//    optimize();
//   // tst
//    {
//        solve();
//    }
//}


///number of unique elements in all subarrrays of lenth k
//
//void solve()
//{
//    int x, y; cin >> x >> y;
//    vector <int> v(x);
//    cinv(v);
//    multiset<int> s;
//    for (int i = 0; i < x; i++)
//    {
//        s.insert(v[i]);
//        if(i >= y - 1)
//        {
//           set<int>st(s.begin(),s.end());
//           cout << st.size() << en;
//            s.erase(s.find(v[i - y + 1]));
//        }
//    }
//
//}
//
//int main()
//{
//    optimize();
//   // tst
//    {
//        solve();
//    }
//}

///multiplying two dif data types

//void solve()
//{
//    int x; cin >> x;
//    double y; cin >> y;
//    auto ans = x * y;
//    cout << (typeid(ans).name()) << en;
//}
//
//int main()
//{
//    optimize();
//    //tst
//    {
//        solve();
//    }
//}
//

/// pow function mistake

//void solve()
//{
//    int x; cin >> x;
//    double y; cin >> y;
//    cout << round(pow(x,y)) << en; /// insted of using pow(x,y)
//}
//int main()
//{
//    optimize(); solve();
//}


///map mistake.................

//int main() {
//  map<int, int> mp;
//  // add 1 to 5 to the map
//  for (int i = 1; i <= 5; i++) {
//    mp[i]++;
//  }
//  int cnt = 0;
//  // check how many numbers from 1 to 10 exist in the map
//  for (int i = 1; i <= 10; i++) {
/////      //if (mp[i]) ++cnt; mistake..............
//       if (mp.find(i) != mp.end()) {
//      ++cnt;
//    }
//  }
//  // now print the size of the map
//  cout << (int)mp.size() << '\n';
//  return 0;
//}


///sum on natural num using set

//int main() {
//  int n = 100;
//  set<int> se;
//  for (int i = 1; i <= n; i++) {
//    se.insert(i);
//  }
//  // compute the sum of 1 to n
//  long long sum = 0;
//  for (int i = 1; i <= n; i++) {
//    // get the iterator containing the smallest element >= i
//    // it will point to i here
//    ///....auto it = lower_bound(se.begin(), se.end(), i);///mistake/..O(n) complexity
//    auto it = se.lower_bound(i);///......O(log(n)) complexity
//    cout << *it << " ";
//    sum += *it; // *it = i
//  }
//  cout << sum << '\n';
//  return 0;
//}

///string append mistake
//int main() {
//  int n = 1000000;
//  string s = "";
//  for (int i = 0; i < n; i++) {
//    s = s + 'a'; ///........mistake it will turns the code into O(n^2) complexity
//    s += 'a'; // append a to the string
//  }
//  cout << s << '\n';
//  return 0;
//}

///One of the best ways to compute square roots is the following:
//
//int main() {
//    long long x = (long long)5 - 1;
//    long long k = sqrtl(x);
//    while (k * k < x) ++k;
//    while (k * k > x) --k;
//    cout << k << '\n';
//  return 0;
//}

///
//
//int32_t main() {
//  ios_base::sync_with_stdio(0);
//  cin.tie(0);
//  int n = 6e8; // for small n it doesn't make much difference
//  int mod = 1e9 + 7;
//  // const int mod = 1e9 + 7; // try this
//  int ans = 0;
//  auto st = clock();
//  for (int i = 1; i <= n; i++) {
//    ans += i;
//    ans %= mod;
//    // if (ans >= mod) ans -= mod; // try this
//  }
//  cout << ans << '\n';
//  cout << fixed << setprecision(10) << "Time: " << 1.0 * (clock() - st) / CLOCKS_PER_SEC << '\n';
//  return 0;
//}

///


/*void solve()
{
    int x;
    cin >> x;
    for (int i = 0; i < x; i++) cout << i << en;
    trace(x);

}

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("inputf.in", "r", stdin);
//     freopen("outputf.in", "w", stdout);
// #endif
    optimize();
    tst
    {
        solve();
    }
}*/

