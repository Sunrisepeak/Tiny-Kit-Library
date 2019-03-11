#include<tkit>
#include<random>
using namespace std;
void number_generator(int a[],int begin, int end, int number)
{
	default_random_engine generator;
	uniform_int_distribution<int> r_number(begin, end);
	for(int i = 0; i < number; i++)
		a[i] = r_number(generator);
}
