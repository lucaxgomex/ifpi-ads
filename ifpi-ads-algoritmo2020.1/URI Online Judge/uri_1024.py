def main():
  n = int(input())
  i = 1

  while (i <= n):
    name = input()
    i += 1
    ascii_position = get_name_chr(name)
    print(ascii_position)


def get_name_chr(name):
  first_step = ''
  for letter in name:
    if (ord(letter) >= 65 and ord(letter) <= 90 or ord(letter) >= 97 and ord(letter) <= 122):
      position = ord(letter) + 3
      first_step += chr(position)
    else:
      first_step += letter
  inverted = inverted_text(first_step)
  return inverted


def inverted_text(first_step):
  second_step = ''
  index = -1
  while (index >= len(first_step) * -1):
    second_step += first_step[index]
    index -= 1

  trunc_text = half_of_text(second_step)
  return trunc_text


def half_of_text(second_step):
  size_string = len(second_step)
  half = size_string // 2

  new_inverted = second_step[half:]
  
  third_step = ''

  for letter in new_inverted:
    old_letter = ord(letter) - 1
    new_letter = chr(old_letter)
    third_step += new_letter

  return second_step[:half] + third_step


main()