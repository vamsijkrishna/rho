expected <- eval(parse(text="TRUE"));        
test(id=0, code={        
argv <- eval(parse(text="list(structure(list(character = character(0), numeric = numeric(0), numeric = numeric(0), complex = complex(0), integer = integer(0), logical = logical(0), character = character(0)), .Names = c(\"character\", \"numeric\", \"numeric\", \"complex\", \"integer\", \"logical\", \"character\")), \"any\")"));        
.Internal(`is.vector`(argv[[1]], argv[[2]]));        
}, o=expected);        

