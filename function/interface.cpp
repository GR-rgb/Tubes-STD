#include <iostream>
#include <string>
#include "../header/kamus.h"

using namespace std;

void pilihLevel()
{
    string text = R"(
+=== PILIH TINGKAT KESULITAN ===+
| [1] BAYI   (Start 100 Energy) |
| [2] REMAJA (Start  50 Energy) |
| [3] SEPUH  (Start  30 Energy) |
| [0] MALAS MENANGGAPI          |
+===============================+
Pilihanmu: )";

    printf("%s", text.c_str());
}
void exitGame()
{
    string text = R"(
Yah gagal nolep
)";
    printf("%s", text.c_str());
}
void gameOver()
{
    string text = R"(
+===============================+
|           GAME OVER           |
|           NICE TRY            |
+===============================+
)";
    printf("%s", text.c_str());
}
void finish()
{
    string text = R"(
+===============================+
|    SAMPAI DI TUJUAN (F)!      |
+===============================+
)";
    printf("%s", text.c_str());
}
void running(adrUser player)
{
    string status = R"(
+===============================+
|          STATUS GAME          |
+===============================+
)";
    adrEdge p = player->lokasi->firstEdge;
    string text;
    while (p != nullptr)
    {
        text += "  Pergi ke ";
        text += p->vertexID;
        text += " | Energy cost [";
        text += to_string(p->cost);
        text += "]\n";
        p = p->next;
    }
    
    printf(
    "%s"
    "Posisi\t: %c\n"
    "Energi\t: %d\n"
    "+-------------------------------+\n"
    "Pilihan Jalan\n%s"
    "+-------------------------------+\n"
    "Give Up masukan X\n"
    "Masukan tujuan anda (ex. A):",
    status.c_str(),
    player->lokasi->id,
    player->energi,
    text.c_str()
    );
}
void errorInput()
{
    string text = R"(
+===============================+
|       INPUT TIDAK SESUAI      |
+===============================+
)";
    printf("%s", text.c_str());
}
void start()
{
    string text = R"(
+===============================+
|           GAME START          |
+===============================+
       ! Objektif game ! 
       sampai di titik F
)";
    printf("%s", text.c_str());
}
void kurangEnergy()
{
string text = R"(
+===============================+
|         ENERGY KURANG         |
+===============================+
)";
    printf("%s", text.c_str());
}