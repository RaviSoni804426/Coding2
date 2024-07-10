def left_shift_string(input_string, shift_count):
    return input_string[shift_count:] + input_string[:shift_count]

input_string = "hello world"

shifted_string = left_shift_string(input_string, 3)
print(shifted_string)  