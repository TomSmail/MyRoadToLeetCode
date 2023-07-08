public class LongestCommonPrefix {

    class Solution {
        public String longestCommonPrefix(String[] strs) {
            String prefix = strs[0];
            for (String str : strs) {
                String curr = "";
                boolean set = false;
                for (int i = 0; i < str.length(); i ++) {
                    if (str.charAt(i) == prefix.charAt(i)) {
                        curr = curr.concat(String.valueOf(prefix.charAt(i)));
                    } else {
                        prefix = curr;
                        set = true;
                        break;
                    }
                }
                if (!set) {
                    prefix = curr;
                }
            }
            return prefix;
        }
    }

}
