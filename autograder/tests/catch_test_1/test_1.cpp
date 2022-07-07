//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include <iostream>
#include <deque>
#include <vector>
#include <utility>
#include "P1.h"
using namespace std;

static void test_1_1() {
    int n = 0;
    cin >> n;
    deque<pair<int, int>> dq(n);
    for (auto& p: dq)
        cin >> p.first >> p.second;

    deque<pair<int, int>> result = cluster_range<deque>(begin(dq), end(dq));
    for (auto [a, b] : result)
        cout << a << " " << b << endl; //  {2, 7} {8, 12} {13, 17}
    cout << endl;
}

static void test_1_2() {
    int n = 0;
    cin >> n;
    vector<pair<int, int>> vc(n);
    for (auto& p: vc)
        cin >> p.first >> p.second;

    vector<pair<int, int>> result = cluster_range<vector>(begin(vc), end(vc));
    for (auto [a, b] : result)
        cout << a << " " << b << endl; //  {2, 7} {8, 12} {13, 17}
    cout << endl;
}

TEST_CASE("Question #1.1") {
    execute_test("test_1.in", test_1_1);
}

TEST_CASE("Question #1.2") {
    execute_test("test_1.in", test_1_2);
}