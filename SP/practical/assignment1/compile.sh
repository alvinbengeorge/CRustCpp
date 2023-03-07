for i in *.cpp
do
    g++ -o ${i%.*} ${i%.*}.cpp && echo "Compiled ${i%.*}.cpp successfully";
    ./${i%.*} > output/${i%.*}.txt;
    rm ${i%.*};
done