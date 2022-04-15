#include <iostream>

// Lesson E Task 1
template <class T>
class Pair1 {
    T a;
    T b;
public:
    Pair1(const T& _a, const T& _b) : a(_a), b(_b) { }
    virtual ~Pair1() { }
    
    T first() const {
        return a;
    }
    
    T second() const {
        return b;
    }
};

//Task 2.

template <class T1, class T2>
class Pair {
protected:
    T1 a;
    T2 b;
public:
    Pair(const T1& _a, const T2& _b) : a(_a), b(_b) { }
    virtual ~Pair() { }
    
    virtual T1 first() const {
        return a;
    }
    
    virtual T2 second() const {
        return b;
    }
};

//Task 3.
template <class T3>
class StringValuePair : public Pair<std::string, T3> {
    std::string a;
    T3 b;
public:
    StringValuePair(std::string _a, T3 _b) : Pair<std::string, T3>(_a, _b), a(_a), b(_b) { }
    virtual ~StringValuePair() { }
};

int main() {
    Pair1<int> p1(6, 9);
    std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair1<double> p2(3.4, 7.8);
    std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

    Pair<int, double> p3(6, 7.8);
    std::cout << "Pair: " << p3.first() << ' ' << p3.second() << '\n';

    const Pair<double, int> p4(3.4, 5);
    std::cout << "Pair: " << p4.first() << ' ' << p4.second() << '\n';
 
    StringValuePair<int> svp("Amazing", 7);
    std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
    
    return 0;
}
