# 71A - Way Too Long Words

The problem asks us to abbreviate every word whose length is greater than **10** characters.

The abbreviation is formed by:

- Keeping the **first** character.
- Replacing the middle characters with the **number of omitted characters**.
- Keeping the **last** character.

For example:

- `localization` → `l10n`
- `word` → `word`

## Approach

- Find the length of the string.
- If the length is greater than `10`:
  - Print the first character.
  - Print `length - 2` (the number of omitted characters).
  - Print the last character.
- Otherwise, print the word as it is.

## Complexity

- **Time Complexity:** `O(n)` (where `n` is the length of the word)
- **Space Complexity:** `O(1)`
