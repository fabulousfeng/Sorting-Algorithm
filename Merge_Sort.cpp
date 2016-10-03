//
//  main.cpp
//  Merge Sort
//
//  Created by Feng Zhou on 10/2/16.
//  Copyright © 2016 Feng. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> A,vector<int> B, vector<int> &C)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < A.size() && j < B.size()) {
        if (A[i] <= B[j]) {
            C[k] = A[i];
            k++;
            i++;
        }
        else{
            C[k] = B[j];
            k++;
            j++;
        }
    }
    while (i < A.size()) {
        C[k] = A[i];
        k++;
        i++;
    }
    while (j < B.size()) {
        C[k] = B[j];
        k++;
        j++;
    }
}
void merge_sort(vector<int> &v)
{
    vector<int> left,right;
    auto n = v.size();
    if(n < 2) return;
    auto mid = n/2;
    for (auto i = 0; i < mid; i++) {
        left.push_back(v[i]);
    }
    for (auto i = mid; i < n; i++) {
        right.push_back(v[i]);
    }
    merge_sort(left);
    merge_sort(right);
    merge(left,right,v);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> v = {3,4,51,12,31,5,4,6,7,13,12,52,51,12};
    merge_sort(v);
    for(int i = 0;i < v.size();i++)
        cout<<v[i]<<" ";
    cout << endl;
    return 0;
}
