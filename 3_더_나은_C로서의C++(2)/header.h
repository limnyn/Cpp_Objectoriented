
#ifdef _MYMAIN
#define EXTERN
#else
#define EXTERN extern
#endif

EXTERN int count;
struct Point {
	int x;
	int y;
};