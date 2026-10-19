g++ main.cpp menu_functions.cpp menu_items.cpp -o example

if [ $? -eq 0 ]; then
    echo "Compilation successful."
else
    echo "Compilation failed."
fi
./example