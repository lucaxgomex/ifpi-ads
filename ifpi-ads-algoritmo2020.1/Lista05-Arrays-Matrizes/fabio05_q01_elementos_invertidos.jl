function main()
    q = itens_quant()
    
    p1 = arrayA(q)
    
    p2 = arrayB(p1)
    
    show_values(p1, p2)
end

function show_values(A, B)
    println("\nVetor A: ", A)
    println("Vetor B: ", B)
end

function itens_quant()
    print("Informe a quantidade de elementos: ")
    n = parse(Int, readline())
    print("\n")
    
    return n
end

function arrayA(n)
    a = convert(Array{Int64}, [])
    
    for i = 1:n
        print("Informe os elementos do vetor: ")
        values = parse(Int, readline())
        
        a = push!(a, values)
    end
    return a
end

function arrayB(arrayA)
    b = convert(Array{Int64}, [])
    last_index = length(arrayA)
    
    while last_index > 0
        b = push!(b, arrayA[last_index])
        last_index -= 1
    end
    
    return b
end

main()
