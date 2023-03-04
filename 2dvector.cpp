#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include "2dvector.h"

using namespace std;



int main(){
    ifstream in_file;
    in_file.open("vectors_1.txt");
    if(in_file){
    class vector<int_vector> in_vector;
    int from{0}, to{0}, id{0};
    while (in_file >> from >> to){
        struct int_vector i_vec = int_vector(from, to, id++);
        in_vector.push_back(i_vec);
    }
    sort(in_vector.begin(), in_vector.end(), [](const int_vector & left, const int_vector & right){ return left.id > right.id;});
    for (auto v : in_vector){
        cout << v.id << ": (" << v.from << ", " << v.to << ") " << endl;
    in_file.close();
    }
    }
    else{
        cout << "File does not exists" << endl;
    }
}

