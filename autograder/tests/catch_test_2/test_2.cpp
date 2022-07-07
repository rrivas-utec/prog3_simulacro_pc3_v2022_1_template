//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <list>
#include "P2.h"
using namespace std;

static void test_2_1() {
    int n = 0, r = 0;
    cin >> n;
    vector<int> vc(n);
    copy_n(istream_iterator<int>(cin), n, begin(vc));
    cin >> r;
    auto result = count_distinct(begin(vc), end(vc), r);
    copy(begin(result), end(result), ostream_iterator<int>(cout, " "));
    cout << endl;
}

static void test_2_2() {
    int n = 0, r = 0;
    cin >> n;
    list<int> vc(n);
    copy_n(istream_iterator<int>(cin), n, begin(vc));
    cin >> r;
    list<int> result = count_distinct<list>(begin(vc), end(vc), r);
    copy(begin(result), end(result), ostream_iterator<int>(cout, " "));
    cout << endl;
}

TEST_CASE("Question #2.1") {
    execute_test("test_2.in", test_2_1);
}

TEST_CASE("Question #2.2") {
    execute_test("test_2.in", test_2_2);
}