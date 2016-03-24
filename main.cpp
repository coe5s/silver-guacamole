#include 		<iostream>

#ifdef _WIN32
	#define 	OS	"Windows"
#elif __APPLE__
	#define		OS	"Apple"
#elif __linux__
	#define		OS	"Linux"
#endif

int			    main(void)
{
	std::cout << OS << std::endl;
}
