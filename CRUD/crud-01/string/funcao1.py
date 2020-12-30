def main():
    fin = open("words.txt")

    l = define_limit()

    show_large_words(fin, l)


def define_limit():
    limit = int(input("Tamanho da palavra a ser analisada: "))

    while True:
        if (limit <= 2):
            limit = int(input("Digite novamente: "))
        else:
            return limit
            break


def show_large_words(fin, l): #Objeto de arquivo tratado como parametro
    for word in fin:
        if(size(word, l)): #Caso a lenght de cada palavra for maior que 20
            print(word.strip())


def size(word, l): #Objeto de arquivo tratado como parametro
    if (len(word) - 1 == l):
        return True

if __name__ == "__main__":
    main()