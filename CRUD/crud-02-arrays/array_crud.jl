function main() 
    run(`clear`)
    interface() #Interface inicial  
    choice() #Definicao dos comandos inciais: iniciar e sair
end

function choice()
    println("<<ENTER>> para iniciar o programa.")
    println("Qualquer outra tecla: fecha o programa.")
    button = readline()

    if button == ""
        run(`clear`)
        menu()
    else
        exit()
    end
end

function menu()
    #=
    Inicializacao de uma lista vazia
    que servira como parametro para 
    as funcoes subsequentes
    =#
    list = [] 

    while true
        menu_interface()
        op = parse(Int, readline())

        if op == 1
            show_value(list)
        elseif op == 2
            list = create_values(list)
        elseif op == 3
            list = update_by_index(list)
        elseif op == 4
            list = remove_value(list)
        elseif op == 5
            list = reset_all(list)
        elseif op == 6
            list = calculation(list) 
        elseif op == 0
            exit()
        else
            println("Valor incorreto. Por favor, digite novamente: ")
            op = parse(Int, readline())
        end
        next_step()
    end
end

function show_value(list)
    run(`clear`)
    if typeof(list) == Array{Any,1}
        print("Nenhum valor inserido. ")
        println("Valor resetado ou nao alterado.\n")
    else
        println(list, "\n")
    end
end

function create_values(list)
    run(`clear`)
    println("Quantos valores deseja adicionar? ")
    q = parse(Int, readline())

    if q <= 0
        println("Quantidade insuficente.\n")
    else
        println("Informe os valores a seguir: ")
        for i = 1:q
            value = parse(Int, readline())
            list = push!(list, value)
        end
    end
    return convert(Array{Int64}, list) #Converte o tipo de array de Any para Int64
end

function update_by_index(list)
    run(`clear`)
    if typeof(list) == Array{Any, 1}
        print("Nao foi possivel realizar a operacao: ")
        println(" nao ha nenhum valor inserido ainda.\n")
    else
        println("Informe um index a ser analisado: ")
        index = parse(Int, readline())

        while index <= 0 || index >= length(list) + 1
            println("Index desconhecido. Por favor, digite novamente: ")
            index = parse(Int, readline())
        end

        println("Novo valor do index: ")
        index_value = parse(Int, readline())

        list[index] = index_value
    end
    return list
end

function remove_value(list)
    run(`clear`)

    if typeof(list) == Array{Any, 1}
        print("Nao foi possivel remover o valor: ")
        println(" o vetor ja esta vazio.\n")
    else
        pop!(list)
        println("Valor removido com sucesso!\n")
        return list
    end
end

function reset_all(list)
    run(`clear`)

    if typeof(list) == Array{Any, 1}
        print("Nao foi possivel resetar os valores: ")
        println(" o vetor ja esta vazio.\n")
    else
        empty!(list)
        println("Valores resetados com sucesso!\n")
        return convert(Array{Any,1}, list)
    end
end

#=
Funcao destinada
para as operacoes aritmeticas
=#
function calculation(list)
    run(`clear`)

    arithmetic_interface()
    op = parse(Int, readline())

    if op == 1
        show_value(list)        
    elseif op == 2
        list = sum_all(list)
    elseif op == 3
        list = sub_all(list)
    elseif op == 4
        list = multi_all(list)
    elseif op == 5 
        list = div_all(list) 
    elseif op == 0
        exit()
    end
end

#=Calculo da soma=#
function sum_all(list)
    run(`clear`)

    println("Qual numero se deseja somar? ")
    num = parse(Int, readline())
    list = list *+ num

    return convert(Array{Int64}, list)
end

#=Calculo da subtracao=#
function sub_all(list)
    run(`clear`)

    println("Qual numero se deseja subtrair? ")
    num = parse(Int, readline())
    list = list .- num

    return convert(Array{Int64}, list)
end

#=Calculo da multiplicacao=#
function sub_all(list)
    run(`clear`)

    println("Qual numero se deseja subtrair? ")
    num = parse(Int, readline())
    list = list .- num

    return convert(Array{Int64}, list)
end

#=Calculo da multiplicacao=#
function multi_all(list)
    run(`clear`)

    println("Qual numero se deseja multiplicar? ")
    num = parse(Int, readline())
    list = list .* num

    return convert(Array{Int64}, list)
end

#=Calculo da divisao=#
function div_all(list)
    run(`clear`)

    println("Qual numero se deseja dividir? ")
    num = parse(Int, readline())
    list = list ./ num

    return convert(Array{Int64}, list)
end

#=
Interface do menu e da selecao de opcoes
=#
function interface()
    message = " █████╗  ██████╗  ██████╗   █████╗  ██╗   ██╗ ███████╗\n"
    message *= "██╔══██╗ ██╔══██╗ ██╔══██╗ ██╔══██╗ ╚██╗ ██╔╝ ██╔════╝\n"
    message *= "███████║ ██████╔╝ ██████╔╝ ███████║  ╚████╔╝  ███████╗\n"
    message *= "██╔══██║ ██╔══██╗ ██╔══██╗ ██╔══██║   ╚██╔╝   ╚════██║\n"
    message *= "██║  ██║ ██║  ██║ ██║  ██║ ██║  ██║    ██║    ███████║\n"
    message *= "╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝ ╚═╝  ╚═╝    ╚═╝    ╚══════╝\n"
    message *= "███████╗  ██████╗ ██████╗  ██╗ ██████╗  ████████╗\n"
    message *= "██╔════╝ ██╔════╝ ██╔══██╗ ██║ ██╔══██╗ ╚══██╔══╝\n"
    message *= "███████╗ ██║      ██████╔╝ ██║ ██████╔╝    ██║\n"
    message *= "╚════██║ ██║      ██╔══██╗ ██║ ██╔═══╝     ██║\n"
    message *= "███████║ ╚██████╗ ██║  ██║ ██║ ██║         ██║\n"
    message *= "╚══════╝  ╚═════╝ ╚═╝  ╚═╝ ╚═╝ ╚═╝         ╚═╝\n"
    message *= "~ programado por Lucas Gomes ~\n"

    println(message)
end

#=
Interface inicial do programa
=#
function menu_interface()
    show_menu = "███╗   ███╗███████╗███╗   ██╗██╗   ██╗\n"
    show_menu *= "████╗ ████║██╔════╝████╗  ██║██║   ██║\n"
    show_menu *= "██╔████╔██║█████╗  ██╔██╗ ██║██║   ██║\n"
    show_menu *= "██║╚██╔╝██║██╔══╝  ██║╚██╗██║██║   ██║\n"
    show_menu *= "██║ ╚═╝ ██║███████╗██║ ╚████║╚██████╔╝\n"
    show_menu *= "╚═╝     ╚═╝╚══════╝╚═╝  ╚═══╝ ╚═════╝\n"
    show_menu *= "1 - Mostrar valor atual;\n"
    show_menu *= "2 - Inserir novos valores;\n"
    show_menu *= "3 - Atualizar posicao pelo index;\n"
    show_menu *= "4 - Remover valor;\n"
    show_menu *= "5 - Resetar\n"
    show_menu *= "6 - Operacoes aritmeticas\n"
    show_menu *= "0 - Fechar programa;\n"

    println(show_menu)
end

function arithmetic_interface()
    ari= " █████╗ ██████╗ ██╗████████╗██╗  ██╗███╗   ███╗███████╗████████╗██╗ ██████╗\n"     
    ari *= "██╔══██╗██╔══██╗██║╚══██╔══╝██║  ██║████╗ ████║██╔════╝╚══██╔══╝██║██╔════╝\n"     
    ari *= "███████║██████╔╝██║   ██║   ███████║██╔████╔██║█████╗     ██║   ██║██║\n"          
    ari *= "██╔══██║██╔══██╗██║   ██║   ██╔══██║██║╚██╔╝██║██╔══╝     ██║   ██║██║\n"          
    ari *= "██║  ██║██║  ██║██║   ██║   ██║  ██║██║ ╚═╝ ██║███████╗   ██║   ██║╚██████╗\n"     
    ari *= "╚═╝  ╚═╝╚═╝  ╚═╝╚═╝   ╚═╝   ╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝   ╚═╝   ╚═╝ ╚═════╝\n"
    ari *= "1 - Mostrar valor atual;\n"
    ari *= "2 - Somar;\n"
    ari *= "3 - Subtrair;\n"
    ari *= "4 - Multiplicar;\n"
    ari *= "5 - Dividir;\n"
    ari *= "6 - Calcular media;\n"
    ari *= "0 - Fechar programa;\n"

    println(ari)              
end                                                                  

function next_step()
    println("Aperte <<ENTER>> para continuar: ")
    readline()
    run(`clear`)
end

main()