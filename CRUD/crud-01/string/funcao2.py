def main():
  select_letter = input("Selecione uma letra: ")
  fin = open("words.txt")

  quantity(fin, select_letter)


def quantity(fin, select_letter):
  counter = 0
  for letter in fin:
    if (has_no_letter(letter, select_letter)):
      counter += 1 
  print(f"Quantidade de letras que nao possuem {select_letter}: {counter}")


def has_no_letter(letter, select_letter):
  for character in letter:
    if (character == select_letter):
      return False
  return True


if __name__ == "__main__":
  main()