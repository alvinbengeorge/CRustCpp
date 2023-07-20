for i in *.cpp
do
    echo "Compiling $i"
    g++ $i -o ${i%.cpp}.out
done

for i in *.out
do 
    clear
    echo "Executing $i"
    ./$i
    sleep 10
done

rm -r *.out