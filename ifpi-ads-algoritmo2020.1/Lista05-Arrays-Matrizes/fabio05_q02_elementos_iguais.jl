function main()
    show_results()
end

function show_results()
    get_array = define_array()
    
    equal_elements(get_array)
end

#=Funcao para definir o array principal=#
function define_array()
    size = get_number()
    a = convert(Array{Int64}, [])
    
    for i = 1:size
        print("Informe os elementos do vetor: ")
        elements = parse(Int, readline())
        
        a = push!(a, elements) #Inserir novos elementos ao array principal
    end
    return a
end

function get_number()
    print("Informe a quantidade de elementos: ")
    n = parse(Int, readline())
    return n
end

function equal_elements(array)
    counter = 0 #Contador de quantos elementos iguais existem no array
    
    for i = 1:length(array) 
        item = array[1] #Elementos a ser analisado 
        new_array = remove(array, item) #Subarray do array principal
        
        println(item)
        println(new_array)

        for j = 1:length(new_array)
            if item == new_array[j]
                counter += 1
            end
        end
        array = push!(array, item)
        println(array)
    end
    println("Total de numeros iguais: ", counter)
end

#=
Remover um item do array principal,
criando assim um subarray
=#
function remove(array, item)
    #deleteat!(array, array .== item) #Remove um elemento especifico do array principal
    filter!(e->e != item, array)
end

main()
