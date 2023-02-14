# getting all cpp files and compiling it
for file in *.cpp
do
    g++ -o ${file%.*} $file && echo "Compiled $file successfully" 
    ./${file%.*} > outputs/${file%.*}.txt
    rm ${file%.*}
done