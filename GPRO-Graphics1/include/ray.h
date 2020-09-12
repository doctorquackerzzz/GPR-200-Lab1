#ifndef RAY_H
#define RAY_H
/*
    include-ray.h
    ray class for more complex vector math.

    Modified by: Nico Omenetto
    Modified because: to functionalize the ray class into the program
*/
/*
Ray Tracing in One Weekend. raytracing.github.io/books/RayTracingInOneWeekend.html
Accessed 9 09. 2020.

*/
#include "gpro/gpro-math/gproVector.h"

//Intent: creation of the ray class
//reason: to initialize the class to incorporate into the program.
class ray {
public:
    ray() {}
    ray(const point3& origin, const vec3& direction)
        : orig(origin), dir(direction)
    {}

    point3 origin() const { return orig; }
    vec3 direction() const { return dir; }

    point3 at(float t) const {

        return orig + dir * t;
    }

public:
    point3 orig;
    vec3 dir;
};

#endif