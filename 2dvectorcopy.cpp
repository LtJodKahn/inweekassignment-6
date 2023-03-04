#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include "2dvector.h"
#include "2dvectorcop.h"


using namespace std;

vector<int_vector> get_2D_vectors(string file_name) {
    class vector<int_vector> in_vector;
    ifstream in_file;
    in_file.open(file_name);
    if(in_file){
    int from{0}, to{0}, id{0};
    while (in_file >> from >> to){
        int_vector i_vec = int_vector(from, to, id++);
        in_vector.push_back(i_vec);
    }
    }
    else{
        cout << "File does not exists" << endl;
    }

    in_file.close();

    return in_vector;
}