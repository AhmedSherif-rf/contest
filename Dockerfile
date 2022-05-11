FROM frolvlad/alpine-gxx
COPY . /usr/src/app

# Specify the working directory
WORKDIR /usr/src/app

# Use GCC to compile the Test.cpp source file
RUN g++ -o contest contest.cpp

# Run the program output from the previous step
CMD ["./contest"]
