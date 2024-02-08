typedef struct _employee_
{
    int emp_id;
    char emp_name[10];
    float emp_salary;
}employee;

typedef struct emp_arr
{
    employee *arr;
    int c_size,t_size;
}emp;

emp *initialise(int);

int insert_emp_data(emp*,employee);
