function main()
    results()
end

function results()
    number = get_number()
    first_matrix = initial_matrix(number)
    create_matrix(first_matrix, number)
end

function get_number()
    print("Informe a ordem da matriz: ")
    n = parse(Int, readline())

    return n
end

#Sera criada uma matrix inicial para que o valor de seus indeces sejam alterados
function initial_matrix(n)
    a = []
    elements = [] #Elementos da matriz 
    i = 1

    while i <= n
        #Os elementos individuais serao indexados em forma de vetores
        elements = [i]
        a = push!(a, elements)
        i += 1
    end
    return a
end

function create_matrix(m, n)
    new_matrix = []

    for i = 1:n
        for j = 1:n
            print("Informe o valor da nova matriz: ")
            elements = parse(Int, readline())

            append_elements(new_matrix, elements)
        end
        println("\n # # # \n")
        m[i] = new_matrix
        new_matrix = []
    end
    sum_each_line(m)
end

function append_elements(new_matrix, elements)
    new_matrix = push!(new_matrix, elements)    
end

function sum_each_line(m)
    add = 0
    sum_line = []

    for i = 1:length(m)
        for j = 1:length(m[i])
            add += m[i][j]
        end
        sum_line = append!(sum_line, add)
        add = 0
    end
    println("Nova matriz: ", m)
    println("Submatriz: ", sum_line)
    comparing_values(sum_line)
end

function comparing_values(line)
    large_value(line)
    small_value(line)
end

function large_value(line)
    large = 1
    for i = 1:length(line)
        if line[i] >= large
            large = line[i]
        end
    end
    println("\nMaior valor do somatorio das linhas: ", large)
end

function small_value(line)
    small = line[1]
    for i = 1:length(line)
        if line[i] <= small
            small = line[i]
        end
    end
    println("Menor valor do somatorio das linhas: ", small)
end

main()