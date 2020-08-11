echo Compiling

#g++ -std=c++11 ans.cpp && time ./a.out < in.txt

# If logs are really big use this
# time (make ans && ./ans < in.txt 2> log)

time (make ans && ./ans < in.txt 2 )


