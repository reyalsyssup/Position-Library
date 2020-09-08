#ifndef POS_UTILS
#define POS_UTILS

namespace putl {
    class Vector2 {
        public:
            int x = 0;
            int y = 0;
            Vector2 operator + (Vector2 vector);
            Vector2 operator - (Vector2 vector);
            bool operator == (Vector2 vector);
            bool operator != (Vector2 vector);
            Vector2 operator += (Vector2 vector);
            Vector2 operator -= (Vector2 vector);
    }
    class Vector3 {
        public:
            int x = 0;
            int y = 0;
            int z = 0;
            Vector3 operator + (Vector3 vector);
            Vector3 operator - (Vector3 vector);
            bool operator == (Vector3 vector);
            bool operator != (Vector3 vector);
            Vector3 operator += (Vector3 vector);
            Vector3 operator -= (Vector3 vector);
    }
}

#endif