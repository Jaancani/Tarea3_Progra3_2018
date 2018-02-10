cmake_minimum_required(VERSION 3.8)
project(Tarea3_Progra3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Cuenta.cpp Cuenta.h Factura.cpp Factura.h Fecha.cpp Fecha.h Paquete.cpp Paquete.h PaqueteDosDias.cpp PaqueteDosDias.h PaqueteNocturno.cpp PaqueteNocturno.h)
add_executable(Tarea3_Progra3 ${SOURCE_FILES})