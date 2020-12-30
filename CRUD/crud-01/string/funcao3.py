def main():
    array = get_array()
    fin = open("words.txt") #Abertura do arquivo

    show_words(fin, array)


#Todas as letras proibidas serao armazenadas em um vetor
def get_array():
    a = []
    q = input("Informa as letras que sao proibidas: ")
    for i in q:
        a.append(i) #Vetor que reune todas as letras
    return a


#Funcao para selecionar todas as letras que nao apresentam as palavras proibidas
def show_words(fin, array):
    for word in fin:
        if (has_no_letter(word, array)): #caso o retorno seja True
            print(word)


def has_no_letter(word, array):
    for i in word:
        for j in array:
            if i == j:
                return False
                """
                Caso as letras proibidas estejam contidas na palavras,
                o valor de retorno sera falso

                O valor de retorno verdadeiro ira funcionar 
                como um filtro que seleciona somente as palavras
                que nao apresentam as letras proibidas
                """
    return True


if __name__ == "__main__":
    main()