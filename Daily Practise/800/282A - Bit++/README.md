# 282A - Bit++

## Observation / Intuition

Each statement either **increments** or **decrements** the value of `X` by exactly `1`.

The position of the operator (`++` or `--`) does not matter because both `X++` and `++X` increase `X` by `1`, while `X--` and `--X` decrease `X` by `1`.

The middle character of every statement uniquely determines the operation:

- `'+'` → Increment `X`
- `'-'` → Decrement `X`

## Approach

- Initialize `X` to `0`.
- Read each statement.
- Check the middle character:
  - If it is `'+'`, increment `X`.
  - Otherwise, decrement `X`.
- After processing all statements, print the final value of `X`.

## Why This Works

Every statement changes the value of `X` by exactly one. Since the only possible operations are increment and decrement, processing each statement once and updating `X` accordingly gives the correct final value.

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
