/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: serikamasan@zoho.com
 *
 * Created on 8 марта 2017 г., 17:22
 */

#include <cstdlib>
#include <iostream>
#include <sstream>

using namespace std;

/*
 */
 
int main(int argc, char** argv) {

    int a=0, b=0, c=0, d=0, f=0;
    int x0=0, y0=0;
    int f0=0,f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,f8=0,f9=0;
    int tabl[10][10] = {
        {0,1,2,3,4,5,6,7,8,9},
        {1,2,3,4,5,6,7,8,9,1},
        {2,3,4,5,6,7,8,9,1,2},
        {3,4,5,6,7,8,9,1,2,3},
        {4,5,6,7,8,9,1,2,3,4},
        {5,6,7,8,9,1,2,3,4,5},
        {6,7,8,9,1,2,3,4,5,6},
        {7,8,9,1,2,3,4,5,6,7},
        {8,9,1,2,3,4,5,6,7,8},
        {9,1,2,3,4,5,6,7,8,9}
    };
    int num[4] = {0,8,9,0};
    int resu[10] = {0,0,0,0,0,0,0,0,0,0};
    
    a = num[0];
    b = num[1];
    c = num[2];
    d = num[3];
    
    for(;a<10;a++){
        b = 0;
    for(;b<10;b++){
        c = 0;
    for(;c<10;c++){
        d = 0;
    for(;d<10;d++)
            {
        //cout << a << b << c << d << endl;
        x0 = tabl[a][b];
        y0 = tabl[c][d];
        f = tabl[x0][y0];
        resu[f]++;
    }
    }
    }
    }
    for(int j=0;j<10;j++){
        cout << '\t' << j;
    }
    cout << endl;
    for(int j=0;j<10;j++){
        cout << '\t' << resu[j];
    }
    cout << endl;
    
    
    
    
    
    
    
    
    
    
    
    /*
    //------------------------ дальше для тестов
    int x = 8;
    int y;
    y = x % 10;
    cout << y << endl << "size " << sizeof(x) << endl;
    x = x / 10;
    cout << x << endl;
    
    
    

int i = 10065;      // создаем переменную i и присваиваем значение
string nums;        // создаем перемен. строку nums
stringstream ss;    // создаем поточную строковую переменную?
ss << i;            // i (число) в поток
ss >> nums;         // из потока в строковую переменную
int* numbers = new int[nums.length()];
for(int j = 0; j < nums.length(); j++) {
    stringstream s;
    s << nums.c_str()[j];
    s >> numbers[j];
    cout << numbers[j] << "-";
}
    //------------------------ конец тестов
*/
    
    
    return 0;
}