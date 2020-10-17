#include <iostream>
#include <cstdlib>

int main()
{
    std::cout << "1\t2\t3\t4\t5\t6\t7\t8\t9\t10"
              << std::endl;

    std::cout << "";
    std::cout << std::endl;

    for (int column_index = 1; column_index <= 10; column_index++)
    {
        std::cout << column_index << "| ";
        for (int inner_index = 1; inner_index <= 10; inner_index++)
        {
            std::cout << inner_index * column_index << '\t';
        }
        std::cout << std::endl;
    }

    return 0;
}

//@jim4067
//when the inner for loop finished prrinting one row i.e from 0-9, It goes to the endl statement
//after that