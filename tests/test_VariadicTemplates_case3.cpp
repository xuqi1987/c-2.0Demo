//
// Created by 徐琪 on 2022/3/7.
//

#include <iostream>
using namespace std;

// 例3:
template <typename _ForwardIter, typename _Compare>
_ForwardIter __max_element(_ForwardIter _fitst, _ForwardIter _last, _Compare _comp)
{
    if (_fitst == _last) return _fitst;
    _ForwardIter _result = _fitst;
    while (++_fitst != _last)
        if (_comp(_result,_fitst))
            _result = _fitst;
    return _result;
}

struct _Iter_less_iter {
    template<typename _iter1, typename _iter2>
    bool operator()(_iter1 _it1, _iter2 _it2) const
    {
        return (*_it1 < *_it2);
    }
};

_Iter_less_iter _iter_less_iter()
{
    return _Iter_less_iter();
}

template<typename _ForwardIter>
_ForwardIter _max_element(_ForwardIter _first,_ForwardIter _last)
{
    return __max_element(_first,_last, _iter_less_iter());
}

template<typename T>
T _max(initializer_list<T> l)
{
    return *_max_element(l.begin(),l.end());
}


int main()
{
    cout << _max({57,47,87,34,56}) << endl;
    return 0;
}