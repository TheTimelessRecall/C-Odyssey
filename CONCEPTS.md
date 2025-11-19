# 🐍 vs 🌊: The Rosetta Stone

If you are coming from Python, you are used to the computer doing everything for you.

Here is how your Python habits translate to the C.

## 1\. Arrays (Lists)

**Python:** "I want a list. If I add more stuff, just make it bigger."

```python
# Python
numbers = [1, 2, 3]
numbers.append(4)  # Easy.
print(numbers)     # [1, 2, 3, 4]
```

**C:** "You want a list? How much memory?"

```c
// C
int *numbers = malloc(3 * sizeof(int)); // Ask for space for 3 ints
numbers[0] = 1; numbers[1] = 2; numbers[2] = 3;

// Want to add 4? You can't just "append".
// You have to ask the OS for a bigger box and move everything.
int *new_numbers = realloc(numbers, 4 * sizeof(int));
if (new_numbers == NULL) {
    // Handle error (Memory full?)
} else {
    numbers = new_numbers;
    numbers[3] = 4;
}
// And don't forget to clean up 
free(numbers);
```

## 2\. Strings

**Python:** Text is just text. You can add it, slice it, whatever.

```python
# Python
name = "C "
name += "Odyssey"  # Concatenation is automatic
print(name)        # "C Odyssey"
```

**C:** Strings are a lie. They are just arrays of numbers (chars) with a zero at the end.

```c
// C
char name[20] = "C ";  // Must decide size UP FRONT.
                       // If you picked 5, the next line crashes your app.

strcat(name, "Odyssey"); // "String Concatenate"
printf("%s\n", name);
```

## 3\. Loops

**Python:** "For every item in the box..."

```python
# Python
items = [10, 20, 30]
for x in items:
    print(x)
```

**C:** "Start at index 0. Is index less than size? Increment index. Fetch memory at index."

```c
// C
int items[] = {10, 20, 30};
int length = 3; // You have to KNOW the length. C won't tell you.

for (int i = 0; i < length; i++) {
    printf("%d\n", items[i]);
}
```

## 4\. Memory Management

**Python:** "I'm done with this variable." (Garbage Collector sweeps it away).

```python
# Python
def create_data():
    data = [1, 2, 3]
    return data  # Python handles the memory magic
```

**C:** "I'm done with this variable." (Memory stays occupied forever until you restart the computer or your RAM fills up).

```c
// C
int* create_data() {
    int *data = malloc(3 * sizeof(int));
    data[0] = 1;
    return data; // You better free() this later
}
```

## 5\. Hash Maps (Dictionaries)

**Python:** Built-in. Fast. Easy.

```python
# Python
scores = {"Alice": 90, "Bob": 85}
print(scores["Alice"])
```
