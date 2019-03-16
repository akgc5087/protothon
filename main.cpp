/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<iostream>
#include<conio.h>

int main()
{
    int a;
    float b,c,d,f;
    
    std::cout << "enter 1 for addision or two for subraction" << std::endl;
    std::cin >> a;
    switch(a)
    {
        case 1 :  {std::cout << "enter two numbers" << std::endl;
        std::cin>>b;
        std::cin>>c;
        d=b+c;
        std::cout <<d<< std::endl; 
        }
        break;
    
        case 2 :  {std::cout << "enter two numbers" << std::endl;

             std::cin>>b;
             std::cin>>c;
             f=b-c;
             std::cout <<f<< std::endl;
        }
        break;
    }
   

    return 0;
}
