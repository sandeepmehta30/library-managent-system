#include<iostream>
class emp
{
public:
int eno;
char name[20],des[20];
void get()
{
std::cout<<"Enter the employee number:";
std::cin>>eno;
std::cout<<"Enter the employee name:";
std::cin>>name;
std::cout<<"Enter the designation:";
std::cin>>des;
}
};
class salary:public emp
{
	
	float bp,hra,da,pf,np;
public:
void get1()
{
    std::cout<<"Enter the basic pay:";
    std::cin>>bp;
    std::cout<<"Enter the HR allowance:";
    std::cin>>hra;
    std::cout<<"Enter the DA:";
    std::cin>>da;
    std::cout<<"Enter the PF:";
    std::cin>>pf;
}
void calculate()
{
np=bp+hra+da-pf;
}
void display()
{
    std::cout<<eno<<"\t"<<name<<"\t"<<des<<"\t"<<bp<<"\t"<<hra<<"\t"<<da
<<"\t"<<pf<<"\t"<<np<<"\n";
}
};
int main()
{
	int i,n;
char ch;
salary s[10];
//clrscr();
    std::cout<<"\tSINGLE INHERITANCE\n\n";
    std::cout<<"Enter the number of employee:";
    std::cin>>n;
for(i=0;i<n;i++)
{
s[i].get();
s[i].get1();
s[i].calculate();
}
std::cout<<"\n E.no \t E.name\t Des \t BP\t HRA\t DA\t PF\t NP \n";
for(i=0;i<n;i++)
{
s[i].display();
}
    return 0;
}