expected <- eval(parse(text="structure(list(names = c(\"1\", \"3\", \"5\", \"7\", \"9\", \"11\", \"13\", \"15\", \"17\", \"19\", \"21\", \"23\")), .Names = \"names\")"));       
test(id=0, code={       
argv <- eval(parse(text="list(structure(c(5.79821692617331, 1.82341879820553, 2.78390295547843, 5.76851897647876, 1.96728131351224, 1.64012180629841, 0.76150764829566, 8.78324957466388, 0.711713280005232, 0.0432245134694077, 0.484038236738706, 2.2604286525194), .Names = c(\"1\", \"3\", \"5\", \"7\", \"9\", \"11\", \"13\", \"15\", \"17\", \"19\", \"21\", \"23\")))"));       
do.call(`attributes`, argv);       
}, o=expected);       

