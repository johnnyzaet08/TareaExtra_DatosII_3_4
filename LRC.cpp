//
// Created by ignacio on 9/6/21.
//

#include <iostream>

uint8_t LRC(uint8_t *data, uint8_t len){
    uint8_t  lrc = 0;

    while (len--){
        lrc = lrc + *data++;
    }

    lrc = (0xFF - lrc) + 0x01;
    return lrc;
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    uint8_t data[] = {0xCA, 0xAB, 0xBC, 0xE3};
    uint8_t data2[] = {0xA1};
    uint16_t  lrc;

    lrc = LRC(data, sizeof(data)/ sizeof(uint8_t));

    std::cout<< std::hex <<lrc;
    printf("LRC is: %04X\n", unsigned(lrc));

    return 0;
}