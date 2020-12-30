from os import system
from time import sleep

import exercicio1 as ex1
import exercicio2 as ex2
import exercicio3 as ex3
import exercicio4 as ex4
import exercicio5 as ex5
import exercicio6 as ex6


def main():
    system("clear")
    interface()
    
    try:
        op = int(input("Qual a questão desejada? "))
        menu(op)
    except ValueError:
        sleep(1.5)
        print("\nDesligando o sistema.")


def menu(op):
    while (True):
        try:
            if (op == 1):
                system("clear")
                ex1.main()
                break
            elif (op == 2):
                system("clear")
                ex2.main()
                break
            elif (op == 3):
                system("clear")
                ex3.main()
                break
            elif (op == 4):
                system("clear")
                ex4.main()
                break
            elif (op == 5):
                system("clear")
                ex5.main()
                break
            elif (op == 6):
                system("clear")
                ex6.main()
                break
            else:
                op = int(input("Insira um valor novamente: "))
        except ValueError:
            sleep(1.5)
            print("\nDesligando o sistema.")
            break

def interface():
    print("* * * * * Word-Play * * * * *\n")
    print("Selecionador de questões programado por Lucas Gomes\n")
    print("* * * * * * * * * *\n")
    print("Selecione a seguir:")
    print("     1 - Primeira questão;")
    print("     2 - Segunda questão;")
    print("     3 - Terceira questão;")
    print("     4 - Quarta questão;")
    print("     5 - Quinta questão;")
    print("     6 - Sexta questão;")
    print("     Nenhuma das anteriores - Desligamento do sistema;\n")


main()