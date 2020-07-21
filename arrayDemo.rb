#arrays in ruby are heterogeneous
a = [1, 1.0, 'abc', "def", 12, 'hello', "world", 23]

puts 'Size of a',a.size()
puts 'length of a',a.length

puts 'is empty?',a.empty?

puts a
puts a
a.each{|x| puts x}

a[0] = 2
puts a

puts 'start from index 1 till 4 elements: ',a[1,4]
puts 'ranging from index 1 till index 4', a[1..4]


#push operation in array
a << 2.0
puts 'pushing',a


#pop operation in array
a.pop
puts 'popping',a


#delete elements
a.delete('def')
puts 'Deleting element',a
a.delete_at(4)
puts 'Deleting element at index',a


e = [2, 9, -9, 2.1, -4.1, 5]
puts 'Sorting in ascending',e.sort
puts 'Sorting in descending',e.sort.reverse


#direct input array
b = Array.new(5, 'acb')
puts b

c = Array(1..9)
puts c
puts c.at(5)#here 5 is index


#and or of arrays
puts 'OR----------', b|c
puts 'AND----------', b&c


#equal or not
puts 'if b and c are equal or not', b.equal?(c)


#appending arrays
b.concat(c)
puts 'Concat b to c', b

d = b + c
puts d
puts 'element 5 is present in c' if c.include?(5)#here 5 is element
puts d.first(3)#prints first three index of d
puts d.last(3)#prints lsst three index of d
puts d.reverse()
puts d.index(5)#prints index of element 5


#2D array
cells = [
          [0,1,2,3],
          ['a','b','c','d']
        ]

puts '2D array:'
cells.each do |row|
  row.each do |col|
    print col.to_s,' '
  end
  puts
end

puts '2D array:'
cells.each do|row|
  puts row.join(' ')
end


#user input array
box = []
puts 'Enter row and col:'
g = gets.to_i
h = gets.to_i

g.times do|row|#this loop creates 'g' empty rows
  box[row]=[]
  h.times do#this loop creates 'h' columns
    puts 'Enter element:'
    f = gets.to_i
    box[row]<<f
  end
end

for row in box
  puts row.inspect
end