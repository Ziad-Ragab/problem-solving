// #include <iostream>
// #include <string>
// using namespace std;

// string ReadPassword(string Message)
// {
//     string text;
//     cout << Message << endl;
//     cin >> text;
//     return text;
// }

// void EncryptText(string text)
// {
//     int j;
//     string EncryptedText = "";
//     string DecryptedText = "";
//     for (int i = 0; i < text.length(); i++)
//     {
//         EncryptedText = EncryptedText + char(text[i] + 2);
//     }
//     cout << "Text Before Encryption: " << text << endl;
//     cout << "Text After Encryption: " << EncryptedText << endl;
//     for (int j = 0; j < EncryptedText.length(); j++)
//     {
//         DecryptedText = DecryptedText + char(EncryptedText[j] - 2);
//     }
//     cout << "Text After Decryption: " << DecryptedText << endl;
// }

// int main()
// {
//     EncryptText(ReadPassword("Enter the text"));

//     return 0;
// }



















#include <iostream>
#include <string>
using namespace std;

string ReadText()
{
    string Text;
    cout << "Please enter Text?\n";
    getline(cin, Text);
    return Text;
}

string EncryptText(string Text, short EncryptionKey)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i] = char(Text[i] + EncryptionKey);
    }
    return Text;
}

string DecryptText(string Text, short EncryptionKey)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i] = char(Text[i] - EncryptionKey);
    }
    return Text;
}

int main()
{
    const short EncryptionKey = 2;
    string TextAfterEncryption, TextAfterDecryption;
    string Text = ReadText();
    TextAfterEncryption = EncryptText(Text, EncryptionKey);
    TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);
    cout << "\nText Before Encryption : " << Text << endl;
    cout << "Text After Encryption  : " << TextAfterEncryption << endl;
    cout << "Text After Decryption  : " << TextAfterDecryption << endl;
    return 0;
}
