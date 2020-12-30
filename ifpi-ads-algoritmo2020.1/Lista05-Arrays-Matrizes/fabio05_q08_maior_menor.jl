function main()
    show_results()
end

function show_results()
    number = define_number()
    create_array(number) #Inicializacao do vetor com elementos dados pelo usuario
end

function define_number()
    print("Informe a quantidade de elementos no vetor: ")
    n = parse(Int, readline())

    return n
end

function create_array(number)
    a = convert(Array{Int64}, [])
    for i = 1:number
        print("Informe os elementos do array: ")
        elements = parse(Int, readline())
        a = push!(a, elements)
    end    
    #=
    As funcoes responsaveis pela definicao do maior e do menor valor
    sao chamadas na propria funcao create_array()
    para evitar criacao de variaveis na funcao show_results()
    =#
    large_value(a)
    small_value(a)
end

#=
E valido destacar que em Julia
o index e inicializado em 1 ate o tamanho do vetor
=#
function large_value(array)
    large = 1
    pos = 0
    for i = 1:length(array)
        if array[i] >= large
            large = array[i] #Recebimento do maior valor
            pos = i #Recebimento da posicao do menor valor
        end
    end
    println("\nMaior valor: ", large)
    println("Posicao do maior valor: ", pos)
end

function small_value(array)
    small = 1
    pos = 0
    for i = 1:length(array)
        if array[i] <= small
            small = array[i]
            pos = i
        end
    end
    println("\nMenor valor: ", small)
    println("Posicao do menor valor: ", pos)
end

main()