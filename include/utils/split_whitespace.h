/**
 * Grup üyeleri:
 * - Eren Çoban - G221210090
 * - Onur Eğrikılıç - G221210066
 * - Ozan Malcı - B211210039
 * - Semih Öztürk - G221210003
 * - Yiğit Talha Adagülü - G221210093
 */
#ifndef SPLIT_WHITESPACE_H
#define SPLIT_WHITESPACE_H

#include <stdio.h>
#include <stdlib.h>

#define TOKEN_DELIMITERS  " \t\r\n\a"
#define TOKEN_BUFFER_SIZE 32

/**
 * @brief String'i boşluklara göre ayırır ve döndürür.
 * @param line Ayırılacak string.
 * @return Boşluklara göre ayrılmış string dizisi.
 *
 * @warning Bu fonksiyon, bellek yönetimi için malloc ve realloc fonksiyonlarını
 * kullanır. Bu nedenle, kullanılan belleği serbest bırakmak için free
 * fonksiyonunu kullanmayı unutmayın.
 */
char** split_whitespace(char* line);

#endif // SPLIT_WHITESPACE_H