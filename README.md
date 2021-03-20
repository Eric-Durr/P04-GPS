# Seguridad en Sistemas Informáticos - Práctica 4

> C/A code GPS generator in C++

    Author: Eric Dürr sierra - alu0101027005
            eric.durr.20@ull.edu.es

    Escuela Superior de Ingeniería y Tecnología (ESIT)- ULL

    20-MAR-2021

### **Exe compile**

```bash
$ make
```

### **Simulation running**

**Launches by default a 14 length substring of the full output for PRN1 (taos 2 and 6)**

```bash
$ ./ca_gps
```

### **TDD/BDD tests launch**

```bash
$ make test
```

**Tests can be shown in detail by launching the executable compiled as:**

```bash
$ ./ca_gps_test -s
```

## References

- [LFSR code assignment - Princeton University Computer Sience Department](https://www.cs.princeton.edu/courses/archive/fall11/cos126/assignments/lfsr.html)
- [LFSR code assigment solved in c++ - Git Hub yyildiz ](https://github.com/yyildiz/LFSR-Image-Encoder-Decoder/blob/master/LFSR.cpp)
- [C/A Code Generator - mathworks file exchange](https://es.mathworks.com/matlabcentral/fileexchange/14670-gps-c-a-code-generator)
- [C/A generator amateur aproach - Git Hub N1ckn1ght](https://github.com/N1ckn1ght/cagenerator/blob/main/Source.cpp)
- [C/A Code Generator - beechwood](https://www.beechwood.eu/ca-code-gps-generator/)

## License

[MIT](https://choosealicense.com/licenses/mit/)
