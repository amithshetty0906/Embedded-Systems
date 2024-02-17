typedef struct Student
{
    char name[50];
    int ranking;
    int quotas;
}student;

typedef struct admission
{
    student applied[50];
    int c_size[3], t_size[3];
    int insert_;
}admit;

admit initialise();
admit inserting(admit,student);
admit sorting(admit);
void admitted(admit);
char* quotas(int);
