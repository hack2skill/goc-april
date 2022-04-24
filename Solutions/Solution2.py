class Solution:
    def countVowelStrings(self, n: int) -> int:
        if n == 0:
            return 0
        counts = [1] * 5
        while n > 1:
            n -= 1
            for i in range(1, len(counts)):
                counts[i] += counts[i - 1]

        return sum(counts)
