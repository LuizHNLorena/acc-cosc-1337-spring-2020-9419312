#include "vec.h"

int main() 
{// 9 10 99 5  67

	vector<int> nums{ 9,10, 99,5, 67 };
	
	//loop_vector_w_index(nums);
	//loop_vector_w_index_ref(nums);
	loop_vector_w_index_const(nums);

	vector<int> num1;
	num1.push_back(9);

	vector<int> num2(5, 10);
	cout << num2.at(2)<< "\n";
	num2.max_size();
	


	return 0;
}