// FILE: bag.cpp
#include <iostream>
#include <cassert>
#include "bag1.h"

using namespace std;
using namespace main_savitch_3;

void runBlackBoxTest() {
    // Test Case 1: Insert and Count
    bag myBag;
    myBag.insert(5);
    assert(myBag.size() == 1);
    assert(myBag.count(5) == 1);

    // Test Case 2: Erase and Erase_One
    myBag.insert(3);
    myBag.insert(5);
    assert(myBag.size() == 3);
    assert(myBag.erase(5) == 2);
    assert(myBag.size() == 1);
    assert(myBag.erase_one(5) == true);
    assert(myBag.size() == 0);
    assert(myBag.erase_one(7) == false);

    // Test Case 3: Operator Plus
    bag bag1, bag2, result;
    bag1.insert(1);
    bag1.insert(2);
    bag2.insert(2);
    bag2.insert(3);
    result = bag1 + bag2;

    assert(result.size() == 3);
    assert(result.count(1) == 1);
    assert(result.count(2) == 2);
    assert(result.count(3) == 1);
}

int main() {
    runBlackBoxTest();
    cout << "Black Box Test Passed!" << endl;
    return 0;
}
