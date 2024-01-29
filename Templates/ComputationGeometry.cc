#include <cstdio>
#include <cmath>

typedef double ld;

struct Point{
    ld x, y, ang;
    Point operator + (const Point &oth) const { return { x+oth.x, y+oth.y }; }
    Point operator - (const Point &oth) const { return { x-oth.x, y-oth.y }; }
    Point operator * (const ld &p) const { return { x*p, y*p }; }
    Point operator / (const ld &p) const { return { x/p, y/p }; }
    bool operator == (const Point &oth) const { return x == oth.x && y == oth.y; }
};

ld dot(const Point &a, const Point &b){
    return a.x * b.x + a.y * b.y;
}
ld det(const Point &a, const Point &b){
    return a.x * b.y - a.y * b.x;
}
ld dis(const Point &a){
    return sqrt(a.x*a.x + a.y*a.y);
}
ld dis(const Point &a, const Point &b){
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}