#include "vec.h"

int main() 
{// 9 10 99 5  67

	vector<int> nums{ 9,10, 99,5, 67 };
	
	look_vector_w_index(nums);
	look_vector_w_index_ref(nums);
	look_vector_w_index_const(nums);

	return 0;
}