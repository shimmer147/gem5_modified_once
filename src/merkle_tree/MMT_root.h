#include <cstdint>

class MMT_Root {
public:
    // Constructor to initialize the values
    MMT_Root(uint64_t key_high, uint64_t key_low, uint8_t state,
             uint64_t global_unique_address, uint8_t reserved)
            : key_high(key_high),
              key_low(key_low),
              state(state),
              global_unique_address(global_unique_address),
              reserved(reserved) {}

    // Set functions
    void setKey(uint64_t key_high, uint64_t key_low) {
        this->key_high = key_high;
        this->key_low = key_low;
    }

    void setState(uint8_t state1) {
        this->state = state1;
    }

    void setGlobalUniqueAddress(uint64_t global_unique_address) {
        this->global_unique_address = global_unique_address;
    }

    void setReserved(uint8_t reserved1) {
        this->reserved = reserved1;
    }

    // Get functions
    void getKey(uint64_t &key_high, uint64_t &key_low) const {
        key_high = this->key_high;
        key_low = this->key_low;
    }

    uint8_t getState() const {
        return this->state;
    }

    uint64_t getGlobalUniqueAddress() const {
        return global_unique_address;
    }

    uint8_t getReserved() const {
        return this->reserved;
    }


private:
    // 128-bit key
    uint64_t key_high;
    uint64_t key_low;

    // 2-bit state
    uint8_t state : 2;

    // 58-bit global-unique address
    uint64_t global_unique_address : 58;

    // 4-bit reserved
    uint8_t reserved : 4;
};


