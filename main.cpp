#include<bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <iostream>   // std::cout
#include <fstream>
#define CIN ios::sync_with_stdio(false) ,cin.tie(0);

using namespace std;


int main()
{
    /*hiiiiii from the branch */
    /*hiiiiii from the branch */

    cout << "hi from master";

    CIN;
    ifstream file("input_file.txt");
    string test;
    ofstream outfile;
    outfile.open("outputFile.txt");
    getline(file, test);
    int test_cases = atoi( test.c_str() );
    int i = 0 ;
    while(getline(file, test )) /// file name
    {
        i++;
        string num = test;



        outfile << "Case #" << i << ": " << num<< endl;
        if( i == test_cases) break;
    }

    outfile.close();
    file.close();
    return 0;
}
