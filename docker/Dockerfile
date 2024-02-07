FROM quay.io/centos/centos:stream9

# Update the system
RUN dnf update -y

# Some essential tools
RUN dnf install -y sudo git zlib-devel
# Install build tools
RUN dnf install -y gcc make cmake autoconf automake libtool pkgconfig g++
RUN dnf install -y bison flex openssl-devel

#RUN dnf install -y libasan libubsan

# Set the working directory
#:WORKDIR /work

# Copy the source code to the container
#COPY . .

# Build the application
#RUN make

# Set the entry point
#ENTRYPOINT ["/work"]
