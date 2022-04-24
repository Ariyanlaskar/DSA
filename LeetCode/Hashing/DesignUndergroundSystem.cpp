#include <bits/stdc++.h>
using namespace std;
map<pair<string, string>, vector<int>> tm;
map<int, pair<int, string>> records;
UndergroundSystem()
{
}

void checkIn(int id, string stationName, int t)
{
    records[id] = {t, stationName};
}

void checkOut(int id, string stationName, int t)
{
    int sTime = records[id].first;
    string sName = records[id].second;
    tm[{sName, stationName}].push_back(t - sTime);
}

double getAverageTime(string startStation, string endStation)
{
    double ans = 0;
    int size = tm[{startStation, endStation}].size();
    for (auto i : tm[{startStation, endStation}])
    {
        ans += i;
    }
    return ans / size;
}
// ["UndergroundSystem","checkIn","checkIn","checkIn","checkOut","checkOut","checkOut","getAverageTime","getAverageTime","checkIn","getAverageTime","checkOut","getAverageTime"]
// [[],[45,"Leyton",3],[32,"Paradise",8],[27,"Leyton",10],[45,"Waterloo",15],[27,"Waterloo",20],[32,"Cambridge",22],["Paradise","Cambridge"],["Leyton","Waterloo"],[10,"Leyton",24],["Leyton","Waterloo"],[10,"Waterloo",38],["Leyton","Waterloo"]]

// Output
// [null,null,null,null,null,null,null,14.00000,11.00000,null,11.00000,null,12.00000]
