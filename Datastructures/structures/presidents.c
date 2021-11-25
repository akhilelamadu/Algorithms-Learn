#include <iostream>
struct date
{
int dd;
char *month;
int yy;
};

struct president
{
    char *name;
    struct date officedate;


}p[4]={
    {"GW",{30,"April",1789}},
    {"TJ",{4,"March",1801}},
    {"AL",{4,"March",1861}},
    {"TR",{14,"September",1901}
}};
 int main()
 {
     printf("before shuffling\n");
     for (int i = 0; i < 4; i++)
     {
         printf("president %s took office on %d th %s %d \n",p[i].name,p[i].officedate.dd,p[i].officedate.month,p[i].officedate.yy);
     }
     printf("After shuffling\n");
    struct president temp;
    temp=p[1];
    p[1]=p[2];
    p[2]=temp;
    for (int i = 0; i < 4; i++)
     {
         printf("president %s took office on %d th %s %d \n",p[i].name,p[i].officedate.dd,p[i].officedate.month,p[i].officedate.yy);
     }
     return 0;
 }