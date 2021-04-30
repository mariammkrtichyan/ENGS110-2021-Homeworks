#include <iostream>>

void swap(int& num1, int& num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
int main()
{ 
    int x = 0;
    //refrence!!
    int& z = x;
    std::cout<<"befor x ="<<x<< "z="<< z << std::endl;
    std::cout<<"adress of x ="<< &x << " addrece of z="<< z <<std::endl;
    z=67;
    std::cout<<"after x="<<x<< "z="<< z <<std::endl; 
}
    /* int y = 0;
    std::count << "Enter first value"<< std::endl;
    std::cin>>x;
    if (std::cin.fail()){
        std::cout<<"First is not a number"<<std::endl;
        return EXIT_FAILURE;
    } 
    std::count << "Enter second  value"<< std::endl;
    std::cin>>x;
    if (std::cin.fail()){
        std::cout<<"Second  is not a number"<<std::endl;
        return EXIT_FAILURE;
    }   
    std::cout<<"Befor swap x="<<x<<"y="<<y<<std::endl;
    swap(x,y);
    std::cout<<"Adter swap x="<<x<<"y="<<y<<std::endl;
*/ 
    return EXIT_SUCCESS
