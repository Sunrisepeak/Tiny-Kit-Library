#include<iostream>
#include<tkit>
#include<random>
void number_generator(int a[],int begin, int end, int number)
{
	std::default_random_engine generator;
	std::uniform_int_distribution<int> r_number(begin, end);
	for(int i = 0; i < number; i++)
		a[i] = r_number(generator);
}
