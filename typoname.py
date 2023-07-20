def generate_variations(word):
    n = len(word)
    for i in range(2**n):
        result = ''
        for j in range(n):
            if (i >> j) & 1:
                result += word[j].upper()
            else:
                result += word[j].lower()
        yield result

text = "cok"

for variation in generate_variations(text):
    print(f"text === '{variation}'")
