class Solution {
	int findLow(const vector<int>& nums, int target) {
		int low = 0, high = nums.size() - 1, mid = 0, lowPos = -1;

		while (low <= high) {
			mid = low + (high - low) / 2;

			if (target < nums[mid]) {
				high = mid - 1;
			}
			else if (target > nums[mid]) {
				low = mid + 1;
			}
			else {
				lowPos = mid;
				high = mid - 1;
			}
		}

		return lowPos;
	}

	int findHigh(const vector<int>& nums, int target, int l) {
		int low = l, high = nums.size() - 1, mid = 0, highPos = -1;

		while (low <= high) {
			mid = low + (high - low) / 2;
			if (target < nums[mid]) {
				high = mid - 1;
			}
			else if (target > nums[mid]) {
				low = mid + 1;
			}
			else {
				highPos = mid;
				low = mid + 1;
			}
		}

		return highPos;
	}
public:
	vector<int> searchRange(vector<int>& nums, int target)
	{
		int low = findLow(nums, target);
		int high = -1;
		if (low >= 0)
			high = findHigh(nums, target, low);
		return vector<int>({ low, high });
	}
};
