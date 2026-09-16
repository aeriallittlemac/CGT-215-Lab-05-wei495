# CGT 215 – Lab 05: Substitution Cipher Encoder

A simple C++ console program that encodes user-input text using a
fixed monoalphabetic substitution cipher.

## What It Does

The program prompts the user to enter a line of text, then prints an
"encoded" version where each letter is replaced according to a
predefined substitution alphabet. Non-alphabetic characters (spaces,
digits, punctuation) are passed through unchanged, and letter case is
preserved.

## How the Cipher Works

A fixed vector maps each position in the standard alphabet (A–Z, index
0–25) to a substitute letter:

```
A → V     J → J     S → S
B → F     K → P     T → G
C → X     L → H     U → U
D → B     M → D     V → Y
E → L     N → K     W → Q
F → I     O → N     X → M
G → T     P → O     Y → A
H → Z     Q → W     Z → C
I → R
```

- The 26-element vector `v` holds these substitutes in alphabetical
  order of the *original* letter (`v[0]` is the substitute for 'A',
  `v[1]` for 'B', etc.).
- For an uppercase input letter, `encoder()` looks up `v[c - 65]`
  directly.
- For a lowercase input letter, it converts the character to
  uppercase, performs the same lookup, then converts the result back
  to lowercase so the output matches the case of the input.
- Any character that isn't a letter (spaces, punctuation, numbers) is
  returned unchanged.

## Usage

1. Build and run the program.
2. When prompted, type the text you want to encode and press Enter.
3. The program prints the encoded message to the console.

### Example

```
Input text to cupher: Hello World
Encoded Message: Zlhhn Qnaha
```

## Files

| File | Description |
|------|--------------|
| `CGT-215-Lab-05-wei495.cpp` | Main source file: defines the substitution vector, the `encoder()` function, and `main()`, which reads a line of input and prints its encoded form. |

## Requirements

- A C++ compiler supporting C++11 or later (uses `<vector>`, `<string>`, `<iostream>`).
- No external dependencies.

## Notes / Possible Improvements

- The cipher is **not** a Caesar shift — it's a fixed substitution
  table, so decoding requires the inverse mapping (not implemented
  here).
- Input is read with `getline`, so full sentences with spaces and
  punctuation are supported.
- A `decoder()` function could be added by building the inverse of
  vector `v` to allow round-trip encode/decode.
