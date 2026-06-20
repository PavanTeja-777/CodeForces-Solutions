# 4A - Watermelon

The problem asks whether a watermelon can be divided into two parts such that both parts have an even weight.

## Observation

If both parts are even, then their sum must also be even.

For example:

- 4 = 2 + 2 ✅
- 8 = 4 + 4 ✅
- 12 = 6 + 6 ✅

So, the watermelon weight must be an even number.

## Special Case

The weight `2` is even, but it cannot be divided into two positive even parts:

- 2 = 1 + 1 ❌

Since both parts must be even and positive, `2` is not a valid answer.

## Conclusion

A watermelon can be divided as required if and only if:

- `w > 2`
- `w` is even

## Complexity

- Time Complexity: `O(1)`
- Space Complexity: `O(1)`
