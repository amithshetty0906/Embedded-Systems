#define ARRAY_FULL 0
#define SUCCESS 1
#define FOUND 1
#define NOT_FOUND 0

struct array_dynamic{
    int *arr;
    int c_size,t_size;
};
typedef struct array_dynamic array_dyn;

struct max_min{
    int max,min;
};
typedef struct max_min MaxMin;


array_dyn*initialize_dynamic_array(int size);
int insert_data_dyn(array_dyn*,int data);
int search(array_dyn*,int element);
