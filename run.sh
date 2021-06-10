echo Compiling

#g++ -std=c++11 ans.cpp && time ./a.out < in.txt

# If logs are really big use this
# time (make ans && ./ans < in.txt > log)

g++ -std=c++11 -O2  $1.cpp -o out && echo Running && ./out < in.txt

# Cleaning
rm out
