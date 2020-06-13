//
// Created by omerugi on 08/06/2020.
//

#ifndef CPP_EX4_RANGE_HPP
#define CPP_EX4_RANGE_HPP

#include <iostream>
using namespace std;
namespace itertools{
    class range {
        int from;
        int to;
    public:
        range(int a,int b):from(a),to(b){};

        class iterator{
            int i;
        public:
            explicit iterator(int i):i(i){};
            iterator& operator ++(int next){
                return next+1;};
            iterator& operator ++(){ return this->i+1;};
            iterator& operator *(){ return this->i;};
        };

        iterator begin(){ return iterator(from);};
        iterator end(){ return iterator(to);}

    };
}


#endif //CPP_EX4_RANGE_HPP
