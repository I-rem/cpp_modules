#include "Serializer.hpp"
#include "Data.hpp"

int main() {
    Data* data = new Data(42, "MyData");

    uintptr_t serializedPtr = Serializer::serialize(data);

    Data* deserializedPtr = Serializer::deserialize(serializedPtr);

    if (data == deserializedPtr)
    {
        std::cout << "Serialization and deserialization successful!" << std::endl;
        std::cout << "Data name: " << data->getName() << "\nData value: " << data->getValue() << std::endl;
    }
    else
        std::cerr << "Error: Pointers do not match!" << std::endl;
    delete data;
    return 0;
}

