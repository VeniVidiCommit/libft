#!/bin/bash

if cmp -s "memset" "ft_memset"
then
   echo "The files match"
else
   echo "The files are different"
fi

#Make file qui compile un executable de chaque test et compare avec le output predefinis
