# 69A - Young Physicist

## Observation / Intuition

For a body to remain in equilibrium, the **resultant force** acting on it must be zero.

Each force is represented as a 3 variables `x, y, z`. Instead of storing all the vectors, we only need to keep track of the total force along each axis.

## Approach

- Initialize three variables to store the cumulative force along the `x`, `y`, and `z` axes.
- Iterate through all the vectors.
- Add each vector's components to their respective axis totals.
- After processing all the vectors:
  - If the sums of all three axes are `0`, print `YES`.
  - Otherwise, print `NO`.

## Why This Works

The resultant force is obtained by adding all the vectors component-wise.

If the total force along each axis is zero:

- Σx = 0
- Σy = 0
- Σz = 0

then the resultant vector is `(0, 0, 0)`, which means the body is in equilibrium. Otherwise, there is a net force acting on the body, so the answer is `NO`.

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
