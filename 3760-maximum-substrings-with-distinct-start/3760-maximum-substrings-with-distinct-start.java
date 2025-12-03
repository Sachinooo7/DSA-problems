class Solution {
    public int maxDistinct(String s) {
          int[] arr = new int[26];
                  int count = 0;

                          for (char ch : s.toCharArray()) {
                                      int idx = ch - 'a';

                                                  if (arr[idx] == 0) {
                                                                  arr[idx] = 1;
                                                                                  count++;
                                                                                              }
                                                                                                      }

                                                                                                              return count;
    }
}