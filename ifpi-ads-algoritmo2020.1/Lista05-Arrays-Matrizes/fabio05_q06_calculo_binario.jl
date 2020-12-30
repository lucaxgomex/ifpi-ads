function main()
    results()
end

function results()
    binary = get_binary()
    verification(binary)
end

function get_binary()
    print("Informe o numero binario: ")
    bin = readline()

    return bin
end

function verification(binary)
    while true
        if length(binary) <= 0 || length(binary) > 8 && only_one_zero(binary)
            print("Valor incorreto.")
            binary = readline()
        else
            break
        end
    end
    create_array(binary)
end

function only_one_zero(binary)
    for i = 1:length(binary)
        if binary[i] == '1' || binary[i] == '0'
            return true
        else
            return false
        end
    end
end

function create_array(binary)
    array = Int[]

    for i = 1:length(binary)
        array = push!(array, parse(Int, binary[i]))
    end

    decimal(array)
    octal(array)
end

function decimal(binary)
    last_index = length(binary)
    pos = 0
    dec = 0

    while pos < length(binary) && last_index > 0
        if binary[last_index] == 1
            dec += (2 ^ pos)
        end
        pos += 1
        last_index -= 1
    end

    println("\nResultado em decimal: ", dec)
end

function octal(binary)
    binary = pushfirst!(binary, 0)
    i = 1
    j = 2
    bound = 3
    mult = 100   
    oc = Int64[]
    result = 0

    while bound <= length(binary)
        oc = binary[i:bound]
        result += (get_octal(oc) * mult)
        mult /= 10
        i += 3
        bound *= j
        j += 1
    end
    println("Resultado em octal: ", result)
end

function get_octal(octal_value)
    dec = 0
    pos = 0
    i = 1
    while pos < length(octal_value) && i <= length(octal_value)
        if octal_value[i] == 1
            dec += (2 ^ pos)
        end
        pos += 1
        i += 1
    end
    return dec
end

main()