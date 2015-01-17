int show_pointer_of_var(void);

typedef struct {
  int year;/* 学年 */
  char name[64];/* 名前 */
} student;


int main(void)
{

  student tanaka;
  student *p;

  p = &tanaka;


  (*p).year = 22;
  strcpy((*p).name, "KAZ");

  printf("%d\n", tanaka.year);
  printf("%s\n", tanaka.name);

  p->year = 23;
  printf("%d\n", tanaka.year);
 }

int show_pointer_of_var(void)
{
  int i1;
  return &i1;
}
