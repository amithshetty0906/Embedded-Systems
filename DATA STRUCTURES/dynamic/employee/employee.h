
#define FOUND 1
#define NOT_FOUND 0
#define FULL 0
#define SUCCESS 1

struct _employee_
{
    int emp_id;
    char emp_name[10];
    float emp_salary;
};
typedef struct _employee_ Employee;

struct _array_
{
    Employee* emp;
    int c_size,t_size;
};
typedef struct _array_ Array;

Array* initialise_data(int size);
int insert_info(Array*,Employee );
void display(Array*);
Employee search(Array*,char*);

