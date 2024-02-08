
//#define MAX_SIZE 20
#define FULL 0
#define SUCCESS 1
#define NOT_FOUND 0
#define FOUND 1

struct _array_
{
    int *array;
    int c_size,t_size;
};
typedef struct _array_ Array;

Array* initialize_data(int size);
int insert_data(Array*,int);
int search(Array*,int);
