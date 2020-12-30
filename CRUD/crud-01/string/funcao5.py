def main():
    array = get_array()
    fin = open("words.txt")

    show_words(fin, array)


def get_array():
    a = []
    q = input("Informa as letras que sao proibidas: ")
    for i in q:
        a.append(i)
    return a


def show_words(fin, array):
    for word in fin:
        if (has_no_letter(word, array)):
            print(word)


def has_no_letter(word, array):
    for i in word:
        for j in array:
            if (i == j):
                return True


if __name__ == "__main__":
    main()