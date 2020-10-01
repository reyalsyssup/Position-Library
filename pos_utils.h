#ifndef POS_UTILS
#define POS_UTILS
#include <vector>

namespace plib {
    class Vector2 {
        public:
            // static funcs
            static double getLength(Vector2 point1, Vector2 point2);
            static double getXDist(Vector2 point1, Vector2 point2);
            static double getYDist(Vector2 point1, Vector2 point2);
            static std::vector<Vector2> getLinePoints(Vector2 point1, Vector2 point2);
            // rest of the thing
            double x = 0;
            double y = 0;
            Vector2 operator + (Vector2 vector);
            Vector2 operator - (Vector2 vector);
            bool operator == (Vector2 vector);
            bool operator != (Vector2 vector);
            Vector2 operator += (Vector2 vector);
            Vector2 operator -= (Vector2 vector);
            Vector2(double x, double y);
    };
    class Vector3 {
        public:
            double x = 0;
            double y = 0;
            double z = 0;
            Vector3 operator + (Vector3 vector);
            Vector3 operator - (Vector3 vector);
            bool operator == (Vector3 vector);
            bool operator != (Vector3 vector);
            Vector3 operator += (Vector3 vector);
            Vector3 operator -= (Vector3 vector);
            Vector3(double x, double y, double z);
    };
};

#endif