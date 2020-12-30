def main():
    show_words(fin=open("words.txt"))


def show_words(fin):
    for word in fin:
        if (is_abecedarian(word)):
            print(word)


def is_abecedarian(words):
    index1 = 0
    index2 = 1
    while (index1 < len(words) and (index2 < len(words) - 1)):
        first = ord(words[index1])
        second = ord(words[index2])

        if (first != second - 1):
            return False
            break
        else:
            index1 += 1
            index2 += 1
    return True


if __name__ == "__main__":
    main()