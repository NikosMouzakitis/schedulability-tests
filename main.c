#include <stdio.h>

					/*
*
*	@author: Mouzakitis Nikolaos, 2020
*	Non preemptive schedulability test.
*
*
					*/

struct task {
	int release;
	int cpu;
	int deadline;
};

struct task tasks[10];
int cnt;

int gcd ( int a, int b)
{
	if(b ==0)
		return a;
	return gcd(b, a%b);
}

int find_lcm(struct task *p)
{

	struct task tmp;
	int ret = p[0].deadline;	
	printf("      RELEASE    CPU       DEADLINE\n");
	for(int i = 0; i < cnt; i++)	
		printf("%9d %9d %9d\n",p[i].release, p[i].cpu, p[i].deadline);


}
void add_task(int r, int c, int d)
{
	tasks[cnt].release = r;
	tasks[cnt].cpu = c;
	tasks[cnt].deadline = d;
	cnt++;
}

int scheduler( struct task *t)
{
	
	find_lcm(t);	
	



	return (0);
}

void print_schedule(void)
{

}

int main(int argc, char *argv[])
{
	
	int ret;

	add_task(1,5,11);
	add_task(2,1,3);
	add_task(3,4,8);

	printf("Non pre-emptive schedulability test.\n");	

	ret = scheduler(&tasks[0]);

	if(ret)
		print_schedule();
	else
		printf("Not schedulable set of tasks.\n");

	return(0);
}
