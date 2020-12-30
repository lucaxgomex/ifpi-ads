def main():
    number = int(input("Informe um numero: \n"))
    array_number = array(number)

    values(array_number)

    substitution(array_number)
    
    s = show_substitution(array_number)

    get_media(s)


def array(number):
    a = []
    for i in range(number):
        values = int(input("Informe os values: "))
        a.append(values)
    return a


def values(array_number):
    par = 0
    impar = 0
    negativo = 0
    positivo = 0

    for i in array_number:
        if (i % 2 == 0):
            par += 1
        elif (i % 2 != 0):
            impar += 1

    for j in array_number:
        if (j < 0):
            negativo += 1
        elif (j >= 0):
            positivo += 1

    print("\n----------")
    print("VALORES DO VETOR:")
    print(f"Valores Pares: {par}")
    print(f"Valores Impares: {impar}")
    print(f"Valores Negativos: {negativo}")
    print(f"Valores Positivos: {positivo}")
    print("----------\n")
    return array_number
            


def substitution(array_number):
    print(f"Antigo vetor: {array_number}")

    i = 0
    while (i < len(array_number)):
        if (array_number[i] >= 0):
            array_number[i] = array_number[i] ** 2
        elif (array_number[i] < 0):
            array_number[i] = array_number[i] // 2
        i += 1
    print(f"Novo vetor: {array_number}")
    return array_number


def show_substitution(array_number):
    i = 0
    while (i < len(array_number)):
        if (array_number[i] >= 0):
            array_number[i] = array_number[i] ** 2
        elif (array_number[i] < 0):
            array_number[i] = array_number[i] // 2
        i += 1
    return array_number


def get_media(s):
    sum = 0
    for i in s:
        sum += i
    print("\n----------")
    print("MEDIA DOS VALORES DO NOVO VETOR:")
    print(f"Media = {round(sum / len(s), 2)}")
    print("----------")


main()