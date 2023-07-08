import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;


class threeSum {
    public List<List<Integer>> threeSum(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap();
        List<List<Integer>> lists = new ArrayList<>();
        for (int i : nums ) {
            if (map.containsKey(i)) {
                int val = map.get(i);
                map.put(i, val + 1);
            } else {
                map.put(i, 1);
            }
        }
        for (int j = 0; j < nums.length; j ++) {
            for (int k = 0; k < nums.length; k ++) {
                if (k != j) {
                    int sum = nums[k] + nums[j];
                    if (map.containsKey(-sum)) {
                        Integer[] array = new Integer[]{nums[k], nums[j], -sum};
                        Arrays.sort(array);
                        if (nums[k] == -sum && nums[j] == -sum) {
                            if (map.get(-sum) > 2) {
                                if (!checkIfAnswerExists(Arrays.asList(array), lists)) lists.add(Arrays.asList(array));
                            }
                        } else if (nums[k] == -sum || nums[j] == -sum) {
                            if (map.get(-sum) > 1) {
                                if (!checkIfAnswerExists(Arrays.asList(array), lists)) lists.add(Arrays.asList(array));
                            }
                        } else {
                            if (!checkIfAnswerExists(Arrays.asList(array), lists)) lists.add(Arrays.asList(array));
                        }
                    }
                }
            }
        }
        return lists;
    }

    private Boolean checkIfAnswerExists(List<Integer> posList, List<List<Integer>> lists) {
        for (List<Integer> list : lists) {
            if (list.equals(posList)) {
                return true;
            }
        }
        return false;
    }

}