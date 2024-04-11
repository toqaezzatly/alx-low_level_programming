for file in *.c
do
    echo  "#include \"hash_tables.h\"\n$(cat $file)" > "$file"
done

