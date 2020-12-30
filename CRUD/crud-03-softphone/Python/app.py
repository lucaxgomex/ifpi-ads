from os import system
from os import path
import json


def main():
    first_menu()


#Tela inicial do programa
def first_menu():
    system("clear")

    try:
        try:
            button = input(interface())
            
            while button != "":
                button = input("Valor incompativel. Por favor, digite novamente: ")
            menu()

        except EOFError:
            print("\nDesligamento forcado do programa!")

    except KeyboardInterrupt:
        print("\nDesligamento forcado do programa!")


def menu():
    system("clear")
    smartphones = initialize("phones.db")
    selected_smartphone = 0

    try:
        op = int(input(menu_interface()))
        while op != 8:
            if op == 1:
                show_values(smartphones)
            elif op == 2:
                show_values(selected_smartphone)
            elif op == 3:
                p = add_new_phone()
                smartphones.append(p)
            elif op == 4:
                selected_smartphone = filter_smatphone(smartphones)
            elif op == 5:
                reset_values(smartphones)
            elif op == 6:
                smartphones = manipulation(selected_smartphone, smartphones)
            elif op == 7:
                beware()
            else:
                op = int(input("Valor incorreto informado. Por favor, digite novamente: "))
            input("\nAperte <<ENTER>> para continuar: ")

            system("clear")

            op = int(input(menu_interface()))
    except ValueError:
        print("\nValor de tipagem invalida! (O valor informado nao corresponde a um inteiro)")

    if smartphones == None:
        smartphones = []

    save_data("phones.db", smartphones)
            

#Interface inicial do programa
def interface():
   message = "███████╗ ██████╗ ███████╗████████╗██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗\n"
   message += "██╔════╝██╔═══██╗██╔════╝╚══██╔══╝██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝\n"
   message += "███████╗██║   ██║█████╗     ██║   ██████╔╝███████║██║   ██║██╔██╗ ██║█████╗\n"  
   message += "╚════██║██║   ██║██╔══╝     ██║   ██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝\n"  
   message += "███████║╚██████╔╝██║        ██║   ██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗\n"
   message += "╚══════╝ ╚═════╝ ╚═╝        ╚═╝   ╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝\n"
   message += "Cadastro de celulares\n" 
   message += "~programado por Lucas Gomes~\n\n"
   message += "Aperte <<ENTER>> para continuar\n"       

   return message


#Interface do menu
def menu_interface():
    message = "███╗   ███╗███████╗███╗   ██╗██╗   ██╗\n"
    message += "████╗ ████║██╔════╝████╗  ██║██║   ██║\n"
    message += "██╔████╔██║█████╗  ██╔██╗ ██║██║   ██║\n"
    message += "██║╚██╔╝██║██╔══╝  ██║╚██╗██║██║   ██║\n"
    message += "██║ ╚═╝ ██║███████╗██║ ╚████║╚██████╔╝\n"
    message += "╚═╝     ╚═╝╚══════╝╚═╝  ╚═══╝ ╚═════╝ \n"
    message += "Escolha uma das seguintes opcoes: \n"
    message += "    1 - Conferir todos os dados do sistemas;\n"
    message += "    2 - Conferir dados especificos;\n"
    message += "    3 - Inserir novos dados;\n"
    message += "    4 - Filtrar celular por propriedade;\n"
    message += "    5 - Resetar valores no banco de dados;\n"
    message += "    6 - Manipular dados;\n"
    message += "    7 - CUIDADO!\n"
    message += "    8 - Fechar programa;\n"
    message += "Informar opcao: "

    return message


#Inicializar banco de dados
def initialize(file):
    new_data = []

    if path.exists(file):
        opened_file = open(file, 'r') #Abertura do arquivo
        data = opened_file.readline() #Leitura dos dados
        opened_file.close()
        new_data = json.loads(data) #Pegar de string e transformar em objetos em Python

    return new_data


#Opcao 1 - mostrar dados
def show_values(smartphones):
    system("clear")
    print("CATALOGO: \n")

    try:
        if smartphones == 0 or len(smartphones) == 0:
            print("Valor nao cadastrado ou nao encontrado. Por favor, informe os valores corretamente")
        else:
            print(f"{len(smartphones)} celular(es) cadastrado(s): ")

            for i in smartphones:
                print("=" * 20)
                print(f"    Marca: {i['marca']}")
                print(f"    Nome: {i['nome']}")
                print(f"    Ano: {i['ano']}")
                print(f"    Valor: {i['valor']}")
                print(f"    Armazenamento (GB): {i['armazenamento']}")
                print(f"    Memoria (GB): {i['memoria']}")
                print(f"    Processador: {i['processador']}")
                print(f"    Tela (Polegadas): {i['tela']}")
                print(f"    ID: {i['ID']}")
    except TypeError:
        print("Houve um erro de digitacao!")
        print(f"Eis o erro: {type(smartphones)}")
        print(f"{smartphones}")


#Opcao 3 - armazenar novo valor
def add_new_phone():
    system("clear")
    #Chave com referencia aos valores contidos no vetor
    keys = ["marca", "nome", "ano", "valor", "armazenamento", "memoria", "processador", "tela", "ID"]
    elements = define_values()
    phone = {}

    for i in range(len(keys)):
        for j in range(len(elements)):
            if i == j:
                phone[keys[i]] = elements[j]
    return phone


#Criacao de um vetor contendo todos os dados informados
def define_values():
    print("ADICIONANDO VALORES: \n")
    v = []
    v.append(input("Marca: "))
    v.append(input("Nome: "))
    v.append(int(input("Ano: ")))
    v.append(input("Valor: "))
    v.append(int(input("Armazenamento (GB): ")))
    v.append(int(input("Memoria (GB): ")))
    v.append(input("Processador: "))
    v.append(float(input("Tamanho da tela (Polegadas): ")))
    v.append(input("ID: "))

    return v


#Opcao 4 - filtrar valores
def filter_smatphone(value):
    system("clear")

    if len(value) == 0:
        print("Nenhum valor a ser analisado. Por favor, adicione valores.")
    else:
        select_option = int(input(filter_interface()))

        while select_option <= 0 or select_option > 9 or type(select_option) != int:
            select_option = int(input("Valor nao reconhecido. Por favor, digite novamente: "))

        s = get_result(value)
        return s


def get_result(value):
    new_value = []
    element = input("Selecione o valor da propriedade: ")

    for phone in value:
        for key in phone:
            if element == str(phone[key]):
                new_value.append(phone)
    return new_value


#Interface para o bloco de filtragem de dados
def filter_interface():
    message = "███████╗██╗██╗  ████████╗██████╗   ██████╗\n"
    message += "██╔════╝██║██║  ╚══██╔══╝██╔══██╗██╔═══██╗\n"
    message += "█████╗  ██║██║     ██║   ██████╔╝██║   ██║\n"
    message += "██╔══╝  ██║██║     ██║   ██╔══██╗██║   ██║\n"
    message += "██║     ██║███████╗██║   ██║  ██║╚██████╔╝\n"
    message += "╚═╝     ╚═╝╚══════╝╚═╝   ╚═╝  ╚═╝ ╚═════╝ \n"
    message += "Selecione qual propriedade se deseja manipular do banco de dados: \n"
    message += "    1 - Marca;\n"
    message += "    2 - Nome;\n"
    message += "    3 - Ano;\n"
    message += "    4 - Valor;\n"
    message += "    5 - Armazenamento (GB);\n"
    message += "    6 - Memoria (GB);\n"
    message += "    7 - Processador;\n"
    message += "    8 - Tamanho da tela (Polegadas);\n"
    message += "    9 - ID;\n"
    message += "    (Obs: o ID retorno um unico celular cadastrado)\n"
    message += "Selecionar propriedade: "

    return message
                                                                     

#Opcao 5 - resetar todos os valores
def reset_values(value):
    system("clear")
    print("Todos os valores resetados com sucesso!")
    value.clear()


#Opcao 6 - manipulacao de cada valor
def manipulation(each_smartphone, all_smartphones):
    system("clear")

    op = int(input(manipulation_interface()))
    try:
        if op == 1:
            return_value = remove(each_smartphone, all_smartphones)
            return return_value
        elif op == 2:
            return_value = edit(each_smartphone, all_smartphones)
            return return_value
        else:
            return all_smartphones
    except ValueError:
        return all_smartphones


#Interface da opcao de manipular os dados selecionados
def manipulation_interface():
    message = "███╗   ███╗ █████╗ ███╗   ██╗██╗██████╗ ██╗   ██╗██╗      █████╗ ███╗   ██╗██████╗  ██████╗\n"
    message += "████╗ ████║██╔══██╗████╗  ██║██║██╔══██╗██║   ██║██║     ██╔══██╗████╗  ██║██╔══██╗██╔═══██╗\n"
    message += "██╔████╔██║███████║██╔██╗ ██║██║██████╔╝██║   ██║██║     ███████║██╔██╗ ██║██║  ██║██║   ██║\n"
    message += "██║╚██╔╝██║██╔══██║██║╚██╗██║██║██╔═══╝ ██║   ██║██║     ██╔══██║██║╚██╗██║██║  ██║██║   ██║\n"
    message += "██║ ╚═╝ ██║██║  ██║██║ ╚████║██║██║     ╚██████╔╝███████╗██║  ██║██║ ╚████║██████╔╝╚██████╔╝\n"
    message += "╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝╚═╝      ╚═════╝ ╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═════╝  ╚═════╝ \n"
    message += "                   ██████╗  █████╗ ██████╗  ██████╗ ███████╗\n"                           
    message += "                   ██╔══██╗██╔══██╗██╔══██╗██╔═══██╗██╔════╝\n"                           
    message += "                   ██║  ██║███████║██║  ██║██║   ██║███████╗\n"                          
    message += "                   ██║  ██║██╔══██║██║  ██║██║   ██║╚════██║\n"                           
    message += "                   ██████╔╝██║  ██║██████╔╝╚██████╔╝███████║\n"                           
    message += "                   ╚═════╝ ╚═╝  ╚═╝╚═════╝  ╚═════╝ ╚══════╝\n"
    message += "Estao disponiveis as seguintes opcoes: \n"
    message += "    1 - Remover;\n"
    message += "    2 - Editar no banco de dados;\n"
    message += "Informar opcao: "

    return message                           
    

#Funcao para remover determinado celular
def remove(each_smartphone, all_smartphones):
    if each_smartphone == 0 or len(each_smartphone) <= 0: 
        return all_smartphones
    else:
        for i in each_smartphone:
            if i in all_smartphones:
                all_smartphones.remove(i)
        return all_smartphones


#Funcao para editar algum valor 
def edit(each_smartphone, all_smartphones):

    if each_smartphone == 0 or len(each_smartphone) <= 0:
        return all_smartphones
    else:
        system("clear")

        op = int(input(filter_interface()))

        if op == 1:
            key = "marca"

        elif op == 2:
            key = "nome"

        elif op == 3:
            key = "ano"

        elif op == 4:
            key = "valor"

        elif op == 5:
            key = "armazenamento"

        elif op == 6:
            key = "memoria"

        elif op == 7:
            key = "processador"

        elif op == 8:
            key = "tela"

        elif op == 9:
            key = "ID"

        v = edit_value(each_smartphone, all_smartphones, key)
        return v


def edit_value(each_smartphone, all_smartphones, key):
    new_value = input("Informe o novo valor modificado: ")
    index = 0

    for i in range(len(all_smartphones)):
        if each_smartphone == all_smartphones[i]:
            index = i
            break

    all_smartphones[index][key] = new_value

    return all_smartphones


def beware():
    system("clear")

    print("= = = = = = = = = = AVISO! = = = = = = = = = =")
    print("\n")

    file = open("beware")
    lines = file.readlines()

    for line in lines:
        print(line.strip())


#Modificar todos objetos para formato string
def save_data(file_name, objects):
    data = json.dumps(objects)
    opened_file = open(file_name, 'w')
    opened_file.write(data)
    opened_file.close()


main()