#include <iostream>
#include "file.hpp"

void foo()
{
	std::cout<<"foo"<<std::endl;
}

int main(int argc, char **argv)
{
	std::cout<<"............"<<std::endl;
<<<<<<< ours
	foo();
=======
	bar();
	
>>>>>>> theirs
return 0;
}