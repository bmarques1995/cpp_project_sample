// cpp_project_sample.cpp: define o ponto de entrada para o aplicativo.
//

#include "cpp_project_sample.hpp"
#include <Sample/Sample.hpp>

using namespace std;

int main()
{
	cout << "Hello CMake. " << "Show this addition [4 + 5]: " << Sample::Sample::Add(4, 5) << endl;
	return 0;
}
