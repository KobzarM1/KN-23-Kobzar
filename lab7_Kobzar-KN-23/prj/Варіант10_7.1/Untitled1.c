#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char sentence[100000]; // ������ ����������� ������� ������� 100000
    int count_p = 0; // ˳������� "�"
    int count_punctuation = 0; // ˳������� ��������� �����

    printf(" --------------------------------------------------------------------------------");
    printf("\n|���������� ����������� ��� ���������� ������� ���� \"�\" � ���������� ������  |");
    printf("\n|���, ���� ��� ������ �������,�� ������� ������� ��������� �����           |");
    printf("\n|                  ��������� ����������: ������ ������                           |");
    printf("\n|            �������������������� ������������ �������� ����������            |");
    printf("\n|                                   2024 ��                                     |");
    printf("\n --------------------------------------------------------------------------------");

    printf("Enter the sentence: ");

    // ������� ������� �������
    fgets(sentence, sizeof(sentence), stdin);

    // ��������� ������� ����� � ��������� ������ ������ �����, ���� ������� �� ��� ��������
    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
        len--;
    }

    // ���������� ������� � ������
    for (int i = 0; i < len; ++i) {
        // ����������, �� � ������ "�" ��� ��������� ����
        if (tolower(sentence[i]) == 'p') {
            count_p++; // �������� �������� "�"
        } else if (ispunct(sentence[i])) {
            count_punctuation++; // �������� �������� ��������� �����
        }
    }

    //  �������� ���������
    if (count_p == 0) {
        printf("Number of punctuation marks: %d\n", count_punctuation);
    } else {
        printf("Number of 'p's: %d\n", count_p);
    }

    return 1;
}
