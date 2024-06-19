»include<stdio.h>
#include<string.h>
void modifyfstruct emp*);
struct emp{
char name[20];
int age;
};
int main()
{
struct emp e = ("Sanjay", 35};
modify(&e);
prlntf("%s %d", e.name, e.age);
return 0;
}
void modify(struct emp *p)
{
p ->age=p->age+2;
