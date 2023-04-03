#include<stdio.h>
struct complex{
    int img,real;
};
struct complex accept(); //function declaration
void display(struct complex);
struct complex add(struct complex, struct complex);
struct complex sub(struct complex, struct complex);
struct complex mul(struct complex, struct complex);

void main()
{
    struct complex c1,c2,c3;
    c1=accept();
    c2=accept();
    c3=add(c1,c2);
    display(c1);
    display(c2);
    printf("\n Addition of two numbers: \n");
    display(c3);
    c3=sub(c1,c2);
    display(c3);
    c3=mul(c1,c2);
    display(c3);
    

}

struct complex accept() //function definition
{
    struct complex s1;
    printf("\n Enter real and imaginary parts of complex number :");
    scanf("%d %d",&s1.real,&s1.img);
    return s1;    
}
void display(struct complex s1){
     printf("\n The complex number is :");
    printf("\n %d + %di",s1.real,s1.img);
}

struct complex add(struct complex s1, struct complex s2)
{
    struct complex temp;
    temp.real=s1.real+s2.real;
    temp.img=s1.img+s2.img;
    return temp;
}
struct complex sub(struct complex s1, struct complex s2)
{
    struct complex temp;
    temp.real=s1.real-s2.real;
    temp.img=s1.img-s2.img;
    return temp;
}
struct complex mul(struct complex s1, struct complex s2)
{
    struct complex temp;
    temp.real=(s1.real*s2.real)-(s1.img*s2.img);
    temp.img=(s1.real*s2.img)+(s2.real*s1.img);
    return temp;
}