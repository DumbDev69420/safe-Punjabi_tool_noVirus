
#include "ImGui/ImGui.h"
#include "ImGui/imgui_impl_dx9.h"
#include "ImGui/imgui_impl_win32.h"

#include "menu.h"
#include "globals.h"


#include <fstream>
#include <Lmcons.h>
#include <string>
#include <iostream>
#include "../../../../borderless-imgui-window-main/borderless-imgui-window-main/icl.h"


int TickFirst;
int TickLast;

int TickFirst42;
int TickLast42;

int TickFirst1;
int TickLast1;

int TickFirst9;
int TickLast9;

int TickFirst5;
int TickLast5;

int TickFirst4;
int TickLast4;

int TickFirst41;
int TickLast41;

int i22;

int TickFirst2;
int TickLast2;

int TickFirs1t2;
int TickLas1t2;

DWORD TickBest = 2;

int TickFirst22;
int TickLast22;
int TickFirst24;
int TickLast24;
int preCount;

int TickFirst25;
int TickLast25;

int Count232;

class initWindow {
public:
    const char* window_title = "Asphalt8 Cheeto"; //DEV Version";
    ImVec2 window_size{ 550, 750 };
    
    DWORD window_flags = ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoBringToFrontOnFocus;
} iw;


unsigned int Dsd;

unsigned int Camera2 = 0x48;
//0xBC8
std::vector<unsigned int>ClassOfCarOffsets = { 0x10, 0x10, 0x568, 0x8, 0x10, 0x70, 0x0 };
std::vector<unsigned int>OffsetsOfOffset12 = { 0x10, 0x10, 0x568 };
std::vector<unsigned int>CameraObject = { 0x60, 0x100, Camera2 , 0x220,0x50 };
std::vector<unsigned int>Offsets22 = { 0x60, 0x100, 0x48, 0x558, 0x18, 0x50 };
std::vector<unsigned int>CredsOfs = { 0x8, 0x28, 0x148, 0x28, 0x18, 0x78, 0x618 };
std::vector<unsigned int>C1redsOfs = { 0x8, 0x28, 0x148, 0x28, 0x18, 0x78, 0x0 };
std::vector<unsigned int>EntityList = { 0x20, 0x78, 0x20,Dsd , 0x490, 0x0 };
std::vector<unsigned int>EntityList20 = { 0x20, 0x78, 0x20 , 0x8 , 0x490, 0x0 };
std::vector<unsigned int>OffMenu = { 0x10, 0x8, 0x70, 0x30, 0x1a8, 0x0 };//0x10, 0x8, 0x220, 0x58, 0x10, 0x1a8, 0x560 };
std::vector<unsigned int>JoeBidden = { 0x34, 0x30, 0x20, 0x18 };
//"Asphalt8_x64.exe" + 01DB4CF0

float a3, a4, a5 = 0.1f;
float a6 = 1.0f;
ImVec4 Gucci{ a3,a4,a5, a6 };

uintptr_t DOwd;
uintptr_t DOwd1;
uintptr_t DOwd2;
uintptr_t DOwd3;
uintptr_t DOwd4;
uintptr_t DOwd5;
uintptr_t Point22;
uintptr_t LastAddr;
uintptr_t lastAddra1;
uintptr_t lastAddra12;
uintptr_t CredsBase;
uintptr_t PointerToCurrentLevel;
uintptr_t LocalPlayerCar;
uintptr_t CarObject,CarObjectx, CarObjecty, CarObjectz;
uintptr_t AddrsOfCam;
uintptr_t LevelCar;
uintptr_t moduleBase;
uintptr_t moduleBase2;
uintptr_t ModuleBaseSpotify = 0;
uintptr_t CurrentEntityfollow = 0;


HANDLE Cs = NULL;
HANDLE hProcess = 0;
HANDLE hSpotify = 0;


LPCWSTR Box;
LPCWSTR ses23232;
//auto draw = ImGui::GetBackgroundDrawList();

uintptr_t CreditAddress;
uintptr_t MenuTextAddress;
uintptr_t CurrentCamera;
uintptr_t CreditAddress2;
uintptr_t LocalPlayer;
uintptr_t LocalPlayer2;
uintptr_t LocalPlayer1;
uintptr_t NitroAddress;
uintptr_t SpotifySongAddress;
uintptr_t Nitro1Address;
uintptr_t Positionaddrx;
uintptr_t Positionaddry;
uintptr_t Positionaddrz;
uintptr_t VelcPositionaddrx;
uintptr_t VelcPositionaddry;
uintptr_t VelcPositionaddrz;
uintptr_t RotationPositionaddrx;
uintptr_t RotationPositionaddry;
uintptr_t RotationPositionaddrz;
uintptr_t tempPoint;
uintptr_t lastPoint;
uintptr_t tmp22;
uintptr_t L12ocalPlayerCar;
uintptr_t SpotifyTextAddress;
uintptr_t firstAddr;

HWND WindowCap;

DWORD procID;
DWORD SProcID;
DWORD DNWWER, DNWWER1;
DWORD procID2;

int BorrowedVal;
int Tabs;
int Tab;
int PunjabiNoVirus = 120;

bool Start_Cheat = false;
bool InitData = false;
bool InitTick = false;
bool MenuHidden = false;
bool vMode = false;
bool Spawnini = false;
bool InfiniteNitro = false;
bool JumpCar = false;
bool InstantStop = false;
bool FovChanger = false;
bool InfiniteNitro1 = false;
bool MenuChecks = false;
bool SlowFall = false;
bool FastFall = false;
bool InitNitro = false;
bool GhostMode = false;
bool GhostInit = false;
bool MainMenu = false;
bool GhostDet = false;
bool InitNitro1 = false;
bool IsInAir = false;
bool Spotifyini = false;
bool LoopTp = false;
bool LoopTpToNig = false;
bool AutoRefreshEntities = false;
bool Passright = false;
bool Lightskin,iniLi = false;
bool DebugMode = false;
bool DebugModeU2 = true;   
bool NoTpBack = false;
bool NoTpBackini = false;
bool FuncTp = false;
bool FuncTpIni = false;
bool AutoStart = false;
bool AutoWin = false;
bool MenuSd = false;
bool ffs = false;
bool OnlyName = false;
bool ActivityError = true;
bool Standart1337Mode, un1337 = false;
bool SpotifyMode = false;
bool EmptyCharacter = false;
bool ShowConsole = false;
bool AlwaysShowName = false;
bool RainbowMode = true;
bool Biggers = false;
bool CopyOthers = false;
bool LoopTpEvery = false;
bool Flipini = false;
bool FovIni = false;
bool FlyHac2k = false;


float x16, y16, z16;
float x14, y14, z14;
float x24, y24, z24;
float x241, y241, z241;
float Spawnpointx, SpawnPointz , Spawnpointy , rotx, roty, rotz;
float t1x;
float t1z;
float EntityTime = 0.05;
float xßl, zßl, yßl;
float t2x;
float t2z;
float radius;
float FpsCount;
float x21, y21, z21;
float x161, y161, z161;
float x1621, y1621, z1621;
float Fov, Fov1 = 0.5f;

float x27, y27, z27;
float x217, y217, z217;
float vx217, vy217, vz217;
float b2y, t2y;
float x1y, y1y, z1y, x2y, y2y, z2y, x3y, y3y, z3y;
float Temp1 = 1400.0f;
float Reach = 10.0f;
float Reach2 = -10.0f;
//CurrentCamera

const int Balls = 0x8;
int StandartCarVal;

std::string s1232;
std::string lol124;
std::string s2334;
std::string s234 = "Active: ";
std::string SongFirst;
std::string tdeg;
std::string tdeg2;

const char* CurrentSong;

DWORD OldProtection;

struct Entity
{

    float x16, y16, z16;
    float x14, y14, z14;
    float x24, y24, z24;
    float x241, y241, z241;
    float x21, y21, z21;
    float x161, y161, z161;
    float x1621, y1621, z1621;
    float x27, y27, z27;

    int Counter2;

    uintptr_t L1ocalPlayerCar;
    uintptr_t L1ocalPlayer;
    uintptr_t P1ositionaddrx;
    uintptr_t P1ositionaddry;
    uintptr_t P1ositionaddrz;
    uintptr_t V1elcPositionaddrx;
    uintptr_t V1elcPositionaddry;
    uintptr_t V1elcPositionaddrz;
    uintptr_t R1otationPositionaddrx;
    uintptr_t R1otationPositionaddry;
    uintptr_t R1otationPositionaddrz;

    bool Entity23234;
    bool LocalPlayer;
};

Entity ToPoland[120];



void FreeEverything() {


    TickFirst = NULL;
    TickLast = NULL;

    TickFirst42 = NULL;
    TickLast42 = NULL;

    TickFirst1 = NULL;
    TickLast1 = NULL;


    TickFirst5 = NULL;
    TickLast5 = NULL;

    TickFirst4 = NULL;
    TickLast4 = NULL;

    TickFirst41 = NULL;
    TickLast41 = NULL;

    i22 = NULL;

    TickFirst2 = NULL;
    TickLast2 = NULL;


    TickFirst22 = NULL;
    TickLast22 = NULL;
    TickFirst24 = NULL;
    TickLast24 = NULL;
    preCount = NULL;

    TickFirst25 = NULL;
    TickLast25 = NULL;

    Count232 = NULL;


    Dsd = NULL;


    a3, a4, a5 = 1.0f;
    a6 = 1.0f;
    Gucci = { a3,a4,a5, a6 };

    DOwd = NULL;
    DOwd1 = NULL;
    DOwd2 = NULL;
    DOwd3 = NULL;
    DOwd4 = NULL;
    DOwd5 = NULL;
    Point22 = NULL;
    LastAddr = NULL;
    lastAddra1 = NULL;
    lastAddra12 = NULL;
    CredsBase = NULL;
    PointerToCurrentLevel = NULL;
    LocalPlayerCar = NULL;
    CarObject, CarObjectx, CarObjecty, CarObjectz = NULL;
    AddrsOfCam = NULL;
    LevelCar = NULL;
    moduleBase = NULL;
    moduleBase2 = NULL;
    ModuleBaseSpotify = NULL;


    Cs = NULL;
    hProcess = NULL;
    hSpotify = NULL;


    Box = NULL;
    ses23232 = NULL;

    CreditAddress = NULL;
    MenuTextAddress = NULL;
    CreditAddress2 = NULL;
    LocalPlayer = NULL;
    LocalPlayer2 = NULL;
    LocalPlayer1 = NULL;
    NitroAddress = NULL;
    SpotifySongAddress = NULL;
    Nitro1Address = NULL;
    Positionaddrx = NULL;
    Positionaddry = NULL;
    Positionaddrz = NULL;
    VelcPositionaddrx = NULL;
    VelcPositionaddry = NULL;
    VelcPositionaddrz = NULL;
    RotationPositionaddrx = NULL;
    RotationPositionaddry = NULL;
    RotationPositionaddrz = NULL;
    tempPoint = NULL;
    lastPoint = NULL;
    tmp22 = NULL;
    L12ocalPlayerCar = NULL;
    SpotifyTextAddress = NULL;
    firstAddr = NULL;


    procID = NULL;
    SProcID = NULL;
    DNWWER, DNWWER1 = NULL;
    procID2 = NULL;

    BorrowedVal = NULL;
    Tabs = NULL;
    Tab = NULL;

    Start_Cheat = NULL;
    InitData = NULL;
    InitTick = NULL;
    MenuHidden = NULL;
    vMode = NULL;
    Spawnini = NULL;
    InfiniteNitro = NULL;
    JumpCar = NULL;
    InstantStop = NULL;
    InfiniteNitro1 = NULL;
    SlowFall = NULL;
    FastFall = NULL;
    InitNitro = NULL;
    GhostMode = NULL;
    GhostInit = NULL;
    MainMenu = NULL;
    GhostDet = NULL;
    InitNitro1 = NULL;
    IsInAir = NULL;
    Spotifyini = NULL;
    LoopTp = NULL;
    LoopTpToNig = NULL;
    AutoRefreshEntities = NULL;
    Passright = NULL;
    Lightskin, iniLi = NULL;
    DebugMode = NULL;
    DebugModeU2 = NULL;
    NoTpBack = NULL;
    NoTpBackini = NULL;
    FuncTp = NULL;
    FuncTpIni = NULL;
    AutoStart = NULL;
    AutoWin = NULL;
    MenuSd = NULL;
    ffs = NULL;
    Standart1337Mode, un1337 = NULL;
    SpotifyMode = NULL;
    ShowConsole = NULL;


    x16, y16, z16 = NULL;
    x14, y14, z14 = NULL;
    x24, y24, z24 = NULL;
    x241, y241, z241 = NULL;
    Spawnpointx, SpawnPointz, Spawnpointy, rotx, roty, rotz = NULL;
    t1x = NULL;
    t1z = NULL;
    EntityTime = 0.05f;

    t2x = NULL;
    t2z = NULL;
    radius = NULL;
    FpsCount = NULL;
    x21, y21, z21 = NULL;
    x161, y161, z161 = NULL;
    x1621, y1621, z1621 = NULL;
    x27, y27, z27 = NULL;
    x217, y217, z217 = NULL;
    vx217, vy217, vz217 = NULL;
    b2y, t2y = NULL;

    StandartCarVal = NULL;

    s1232 = "";
    lol124 = "";
    s2334 = "";
    s234 = "";
    SongFirst = "";
    tdeg = "";
    

    CurrentSong = NULL;
}

/*
//a1 = address to value and a2 is CurrentCurrency - value
void __fastcall ChangeCurrencyAndSo(uintptr_t a1, int a2)
{
    int v2; // r8d
    unsigned __int64 v5; // rbx
    __int64 v6; // rsi
    char v7; // cl
    int v8; // edx
    int v9; // r14d
    int v10; // edx
    unsigned int v11; // r14d
    char v12; // cl
    int v13; // eax
    int v14; // r8d
    int v15; // edx
    char v16; // cl
    int v17; // edx
    unsigned int v18; // esi
    char v19; // cl
    int v20; // eax
    unsigned __int64 v21; // rbp
    __int64 v22; // rcx
    bool v23; // zf
    char* v24; // rbx
    char* v25; // rax
    char* v26; // rsi
        v2 = dword_7FF67056D308;
        v5 = 0i64;
        v6 = a1 + 0x618;
        v7 = dword_7FF67056D304;
        v8 = dword_7FF67056D308 ^ *(_DWORD*)v6 ^ v6;
        v9 = *(_DWORD*)v6 ^ v6;
        *(_QWORD*)v6 = 0i64;
        v10 = __ROR4__(v8, v7) - a2;
        v11 = __ROR4__(v2 ^ v9, v7);
        *(_DWORD*)v6 = v2 ^ v6 ^ __ROL4__(v10, v7);
        v12 = dword_7FF67056D30C;
        v13 = dword_7FF67056D310;
        *(_QWORD*)(v6 + 0x8) = 0i64;
        *(_DWORD*)(v6 + 0x8) = v13 ^ v6 ^ __ROL4__(v10, v12);
        v14 = dword_7FF67056D308;
        v15 = dword_7FF67056D308 ^ *(_DWORD*)(a1 + 2592) ^ (a1 + 2592);
        v16 = dword_7FF67056D304;
        LODWORD(v6) = *(_DWORD*)v6 ^ v6;
        *(_QWORD*)(a1 + A20) = 0i64;
        v17 = a2 + __ROR4__(v15, v16);
        v18 = __ROR4__(v14 ^ v6, v16);
        *(_DWORD*)(a1 + A20) = v14 ^ (a1 + A20) ^ __ROL4__(v17, v16);
        v19 = dword_7FF67056D30C;
        v20 = dword_7FF67056D310;
        *(_QWORD*)(a1 + A28) = 0i64;
        *(_DWORD*)(a1 + A28) = v20 ^ (a1 + A20) ^ __ROL4__(v17, v19);
        *(_BYTE*)(a1 + 33) = 1;
        v21 = (__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 8)) >> 3;
        if (v21)
        {
            do
            {
                v22 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v5);
                if (v22)
                    (*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v22 + 16i64))(v22, v11, v18);
                ++v5;
            } while (v5 < v21);
        }
        v23 = *(_BYTE*)(a1 + 32) == 0;
        *(_BYTE*)(a1 + 33) = 0;
        if (!v23)
        {
            v24 = *(char**)(a1 + 8);
            v25 = *(char**)(a1 + 16);
            if (v24 != v25)
            {
                v26 = v24 + 8;
                do
                {
                    if (*(_QWORD*)v24)
                    {
                        v24 += 8;
                        v26 += 8;
                    }
                    else
                    {
                        memmove(v24, v26, v25 - v26);
                        *(_QWORD*)(a1 + 16) -= 8i64;
                        v25 = *(char**)(a1 + 0x10);
                    }
                } while (v24 != v25);
            }
            *(a1 + 32) = 0;
        }
        void(__fastcall*)(a1 + 0x60);
}
*/

bool ThreadCreated = false;
bool fdf = false;
/*
void CallFunctionLmao() {
    if (ThreadCreated == false) {
        HANDLE hThread = CreateRemoteThread(hProcess, 0, 0, (LPTHREAD_START_ROUTINE)Func1, 0, 0, 0);
        if (!hThread)
        {
            std::cout <<"Failed to create thread.\n";
            return;
        }
        WaitForSingleObject(hThread, INFINITE);
        CloseHandle(hThread);
    }

}
*/


int sdsd = 897896974;

void Test3() {
    unsigned int sdsd32 = 0x10;
    for (uintptr_t i = 140; i < 800; i++)
    {
        sdsd32 = sdsd32 * i;
        sdsd32 = sdsd32 + 0x10;
        C1redsOfs = { 0x8, 0x28, 0x148, 0x28, 0x18, 0x78, sdsd32 };
        uintptr_t CreditAddress21 = FindDMAAddy(hProcess, CredsBase, C1redsOfs);
        WriteProcessMemory(hProcess, (BYTE*)CreditAddress21, &sdsd, sizeof(sdsd), 0);
    }
}



void EntityLis2t() {
    if (MenuSd == true || MainMenu == true) {
        return;
    }

    int Temp212;
    int Fails = 0;
    Dsd = 0x8;
    EntityList = { 0x20, 0x78, 0x20 , Dsd , 0x490, 0x0 };
    EntityList20 = { 0x20, 0x78, 0x20 , 0x8 , 0x490, 0x0 }; 
    uintptr_t Ptr23 = moduleBase + 0x01DCF640;
    L12ocalPlayerCar = FindDMAAddy(hProcess, Ptr23, EntityList);
    ReadProcessMemory(hProcess, (BYTE*)L12ocalPlayerCar, &StandartCarVal, sizeof(StandartCarVal), 0);
    
    for (size_t i1 = 0; i1 < PunjabiNoVirus; i1++)
    {
        Balls:
        ToPoland[i1].L1ocalPlayer = FindDMAAddy(hProcess, Ptr23, EntityList);

        if (Fails == 5)break;

        if (ToPoland[i1].L1ocalPlayer <= 0x10000000) {
            Fails = Fails + 1;
        }

        
        if (ToPoland[i1].L1ocalPlayer == LocalPlayerCar) {
            if (i1 == 0) {
                ToPoland[i1].LocalPlayer == true;
                continue;
            }
            Dsd = Dsd + Balls;
            EntityList = { 0x20, 0x78, 0x20,Dsd , 0x490, 0x0 };
            ToPoland[i1].L1ocalPlayer = FindDMAAddy(hProcess, Ptr23, EntityList);
            ReadProcessMemory(hProcess, (BYTE*)ToPoland[i1].L1ocalPlayer, &Temp212, sizeof(Temp212), 0);
            goto Balls;
        }
        ToPoland[i1].Counter2 = i1;
        tempPoint = ToPoland[i1].L1ocalPlayer;
        ReadProcessMemory(hProcess, (BYTE*)ToPoland[i1].L1ocalPlayer, &Temp212, sizeof(Temp212), 0);
        
        if (Temp212 != StandartCarVal) {
            Dsd = Dsd + Balls;
            EntityList = { 0x20, 0x78, 0x20,Dsd , 0x490, 0x0 };
            ToPoland[i1].L1ocalPlayer = FindDMAAddy(hProcess, Ptr23, EntityList);
            ReadProcessMemory(hProcess, (BYTE*)ToPoland[i1].L1ocalPlayer, &Temp212, sizeof(Temp212), 0);
            ToPoland[i1].Entity23234 = false;
            continue;
        }

        ToPoland[i1].Entity23234 = true;
        ToPoland[i1].P1ositionaddrx = ToPoland[i1].L1ocalPlayer + 0x50;
        ToPoland[i1].P1ositionaddrz = ToPoland[i1].L1ocalPlayer + 0x54;
        ToPoland[i1].P1ositionaddry = ToPoland[i1].L1ocalPlayer + 0x58;
        ToPoland[i1].V1elcPositionaddrx = ToPoland[i1].L1ocalPlayer + 0x160;
        ToPoland[i1].V1elcPositionaddrz = ToPoland[i1].L1ocalPlayer + 0x164;
        ToPoland[i1].V1elcPositionaddry = ToPoland[i1].L1ocalPlayer + 0x168;
        ToPoland[i1].R1otationPositionaddrx = ToPoland[i1].L1ocalPlayer + 0x20;
        ToPoland[i1].R1otationPositionaddrz = ToPoland[i1].L1ocalPlayer + 0x24;
        ToPoland[i1].R1otationPositionaddry = ToPoland[i1].L1ocalPlayer + 0x28;
        Dsd = Dsd + Balls;
        EntityList = { 0x20, 0x78, 0x20,Dsd , 0x490, 0x0 };
    }
    Ptr23 = NULL;
    Temp212 = NULL;
}

void CallMessageBox(std::string Test2, int Test3 , int ihdu) {
    DWORD a23;
    uintptr_t a24;
    std::wstring wsTmp(Test2.begin(), Test2.end());
    switch (ihdu)
    {
    case 1:
        wsTmp = wsTmp + L" " + std::to_wstring(Test3);
        break;


    case 2:
        wsTmp = wsTmp + L" " + std::to_wstring((uintptr_t)Test3);
        break;

    case 3:
        wsTmp = wsTmp + L" " + std::to_wstring((DWORD)Test3);
        break;

    default:
        break;
    }

    if (Test3 == 0) { 
        LPCWSTR def21 = wsTmp.c_str();
        MessageBoxW(NULL, def21, L"?????????", MB_OK | MB_SYSTEMMODAL);
        def21 = 0;
    }
    else
    {
        wsTmp = wsTmp + L" " + std::to_wstring(Test3);
        LPCWSTR def21 = wsTmp.c_str();
        MessageBoxW(NULL, def21, L"?????????", MB_OK | MB_SYSTEMMODAL);
        def21 = 0;
    }
    a23 = 0;
    a24 = 0;
    wsTmp = L"";
}

void VMode() {

}

int getEntityCount() {
    int Entity2s = 0;
    for (size_t i = 0; i < 120; i++)
    {
        if (ToPoland[i].LocalPlayer == true) {
            continue;
        }

        if (ToPoland[i].Entity23234 == true) {
            Entity2s = Entity2s + 1;
        }
    }
    return Entity2s;
}


float X5, X6;



void FlyHack(float CamX,float CamY, float CamZ, float PosX,float PosZ, float PosY) {
   
    float X;
    float Y;
    float Z;

    y161 = -0.001f;
    WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddry, &y161, sizeof(y161), 0);
    z161 = -0.001f;
    WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddrz, &z161, sizeof(z161), 0);
    x161 = -0.001f;
    WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddrx, &x161, sizeof(x161), 0);

    WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddry, &X5, sizeof(X5), 0);
    WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddrx, &X6, sizeof(X6), 0);

    //Right and left
    if (GetAsyncKeyState(68))
    {
        if (X6 == 1.0f) {
            X6 = -1.0f;
        }
        X6 = CamX + 0.111f;
        WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddrx, &X6, sizeof(X6), 0);
    }

    if (GetAsyncKeyState(65))
    {
        if (X6 == -1.0f) {
            X6 =  1.0f;
        }
        X6 = CamX - 0.111f;
        WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddrx, &X6, sizeof(X6), 0);
    }

    //Up and Down
    if (GetAsyncKeyState(89))
    {
        if (X5 == 1.0f) {
            X5 = -1.0f;
        }
        X5 = CamY + 0.111f;
        WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddry, &X5, sizeof(X5), 0);
    }

    if (GetAsyncKeyState(86)& 1)
    {
        X5 = 0.0f;
        WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddry, &X5, sizeof(X5), 0);
    }

    if (GetAsyncKeyState(88))
    {
        if (X5 == -1.0f) {
            X5 = 1.0f;
        }
        X5 = CamY - 0.111f;
        WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddry, &X5, sizeof(X5), 0);
    }

    if (GetAsyncKeyState(66))
    {
        Y = PosY + 0.111f;
        WriteProcessMemory(hProcess, (BYTE*)Positionaddry, &Y, sizeof(Y), 0);
    }

    if (GetAsyncKeyState(87))
    {
        /*ReadProcessMemory(hProcess, (BYTE*)ToPoland[Count232].P1ositionaddrx, &ToPoland[Count232].x16, sizeof(ToPoland[Count232].x16), 0);
                                ReadProcessMemory(hProcess, (BYTE*)ToPoland[Count232].P1ositionaddry, &ToPoland[Count232].y16, sizeof(ToPoland[Count232].y16), 0);
                                ReadProcessMemory(hProcess, (BYTE*)ToPoland[Count232].P1ositionaddrz, &ToPoland[Count232].z16, sizeof(ToPoland[Count232].z16), 0);
                                ReadProcessMemory(hProcess, (BYTE*)ToPoland[Count232].V1elcPositionaddrx, &ToPoland[Count232].x161, sizeof(ToPoland[Count232].x161), 0);
                                ReadProcessMemory(hProcess, (BYTE*)ToPoland[Count232].V1elcPositionaddrz, &ToPoland[Count232].z161, sizeof(ToPoland[Count232].z161), 0);
                                ReadProcessMemory(hProcess, (BYTE*)ToPoland[Count232].V1elcPositionaddry, &ToPoland[Count232].y161, sizeof(ToPoland[Count232].y161), 0);
                                ReadProcessMemory(hProcess, (BYTE*)ToPoland[Count232].R1otationPositionaddrx, &ToPoland[Count232].x241, sizeof(ToPoland[Count232].x241), 0);
                                ReadProcessMemory(hProcess, (BYTE*)ToPoland[Count232].R1otationPositionaddry, &ToPoland[Count232].y241, sizeof(ToPoland[Count232].y241), 0);
                                ReadProcessMemory(hProcess, (BYTE*)ToPoland[Count232].R1otationPositionaddrz, &ToPoland[Count232].z241, sizeof(ToPoland[Count232].z241), 0);*/
        X = PosX + CamX;
        Y = PosY + CamY;
        Z = PosZ + CamZ;
        WriteProcessMemory(hProcess, (BYTE*)Positionaddrx, &X, sizeof(X), 0);
        WriteProcessMemory(hProcess, (BYTE*)Positionaddry, &Y, sizeof(Y), 0);
        WriteProcessMemory(hProcess, (BYTE*)Positionaddrz, &Z, sizeof(Z), 0);
    }

    if (GetAsyncKeyState(83))
    {
        X = PosX - CamX;
        Y = PosY - CamY;
        Z = PosZ - CamZ;
        WriteProcessMemory(hProcess, (BYTE*)Positionaddrx, &X, sizeof(X), 0);
        WriteProcessMemory(hProcess, (BYTE*)Positionaddry, &Y, sizeof(Y), 0);
        WriteProcessMemory(hProcess, (BYTE*)Positionaddrz, &Z, sizeof(Z), 0);
    }
    

}

void d3344(HWND hwnd, const std::string& s) {
    OpenClipboard(hwnd);
    EmptyClipboard();
    HGLOBAL hg = GlobalAlloc(GMEM_MOVEABLE, s.size() + 1);
    if (!hg) {
        CloseClipboard();
        return;
    }
    memcpy(GlobalLock(hg), s.c_str(), s.size() + 1);
    GlobalUnlock(hg);
    SetClipboardData(CF_TEXT, hg);
    CloseClipboard();
    GlobalFree(hg);
}

void DerefEntitys() {
    int ts;
    for (ts = getEntityCount(); ts < 120; ts++)
    {
        ToPoland[ts].L1ocalPlayer = 0;
        ToPoland[ts].Entity23234 = false;

        ToPoland[ts].P1ositionaddrx = 0;
        ToPoland[ts].P1ositionaddrz = 0;
        ToPoland[ts].P1ositionaddry = 0;

        ToPoland[ts].V1elcPositionaddrx = 0;
        ToPoland[ts].V1elcPositionaddrz = 0;
        ToPoland[ts].V1elcPositionaddry = 0;

        ToPoland[ts].R1otationPositionaddrx = 0;
        ToPoland[ts].R1otationPositionaddrz = 0;
        ToPoland[ts].R1otationPositionaddry = 0;

        ToPoland[ts].x16 = NULL;
        ToPoland[ts].y16 = NULL;
        ToPoland[ts].z16 = NULL;

        ToPoland[ts].x161 = NULL;
        ToPoland[ts].y161 = NULL;
        ToPoland[ts].z161 = NULL;

        ToPoland[ts].x241 = NULL;
        ToPoland[ts].y241 = NULL;
        ToPoland[ts].z241 = NULL;
    }
    ts = 0;
    Dsd = 0x10;
}


void CleanPc() {
    if (MessageBoxW(NULL, L"Are you sure you want to Delete all Asphalt 8 save files? (Will Delete your Progress too)", L"?????????", MB_YESNO | MB_SYSTEMMODAL) == 6) {
        
        //Get Username and delete Folder Asphalt8 thats saving data
        if (hProcess != NULL)
        {
            TerminateProcess(hProcess, 0);
        }
        
        char username[UNLEN + 1]; DWORD username_len = UNLEN + 1; GetUserNameA(username, &username_len); int Length = sizeof(username); std::string Amongus; Amongus = "C:\\Users\\"; Amongus = Amongus + username; Amongus = Amongus + "\\AppData\\Local\\Packages\\GAMELOFTSA.Asphalt8Airborne_0pp20fcewvvtj";
        if (std::remove(Amongus.c_str()) == 0) {
            std::cout << "Deleted files";
           
        }
        else
        {
            std::cout << "Already deleted?";
        }

        MessageBoxW(NULL, L"Next open Windows Credential Manager go to Webcredentials and search for Asphalt8 and delete it", L"?????????", MB_YESNO | MB_SYSTEMMODAL);
        
    }
}

void SameAddress() {
    /*int tmpdt = 0;
    uintptr_t tfd = 0;
    if (ReadProcessMemory(hSpotify, (BYTE*)firstAddr, &tfd, sizeof(tfd), 0) == false)std::cout << "[DEBUG] Couldnt read from Address: 0x" << std::hex << firstAddr << "\n";
    tmpdt = tfd;
    //std::cout << "[DEBUG] 1Address: 0x" << std::hex << tmpdt << "\n";
    if (ReadProcessMemory(hSpotify, (BYTE*)tmpdt + 0x34, &tfd, sizeof(tfd), 0) == false)std::cout << "[DEBUG] Couldnt read from Address: 0x" << std::hex << firstAddr << "\n";
    tmpdt = tfd;
    //std::cout << "[DEBUG] 2Address: 0x" << std::hex << tmpdt << "\n";
    if (ReadProcessMemory(hSpotify, (BYTE*)tmpdt + 0x30, &tfd, sizeof(tfd), 0) == false)std::cout << "[DEBUG] Couldnt read from Address: 0x" << std::hex << firstAddr << "\n";
    tmpdt = tfd;
    //std::cout << "[DEBUG] 3Address: 0x" << std::hex << tmpdt << "\n";
    if (ReadProcessMemory(hSpotify, (BYTE*)tmpdt + 0x20, &tfd, sizeof(tfd), 0) == false)std::cout << "[DEBUG] Couldnt read from Address: 0x" << std::hex << firstAddr << "\n";
    tmpdt = tfd;
    //std::cout << "[DEBUG] 4Address: 0x" << std::hex << tmpdt << "\n";
    if (ReadProcessMemory(hSpotify, (BYTE*)tmpdt + 0x18, &tfd, sizeof(tfd), 0) == false)std::cout << "[DEBUG] Couldnt read from Address: 0x" << std::hex << firstAddr << "\n";
    tmpdt = tfd;

    SpotifySongAddress = tmpdt;
    */

    int OverDupe = FindDMAAddy32(hSpotify, firstAddr, JoeBidden);
    SpotifySongAddress = OverDupe;

    if (SpotifySongAddress != SpotifyTextAddress) {
        SpotifyTextAddress = SpotifySongAddress;
    }


}

void cod();

//HWND ha3ndle;



// int lxb, lyb;

/*
void MoveTo231(float X, float Y) {
    if (X == 0 && Y == 0)
    {
        GetMouseMovePointsEx(sizeof(lF3ere), lF3ere1)
    }
}
*/

void GetCurrentSong() {
    if (SpotifyMode == true) {
              if (Spotifyini == false) {
            Spotifyini = true;
            SProcID = GetProcId(L"Spotify.exe");
            hSpotify = 0;
            hSpotify = OpenProcess(PROCESS_ALL_ACCESS, 0, SProcID);
            ModuleBaseSpotify = GetModuleBaseAddress(SProcID, L"libcef.dll");
            firstAddr = ModuleBaseSpotify + 0x08D060BC;
            //SpotifyTextAddress = FindDMAAddy(hSpotify, firstAddr, JoeBidden);
            /*int tmpdt = 0;
            uintptr_t tfd = 0;
            if(ReadProcessMemory(hSpotify, (BYTE*)firstAddr, &tfd, sizeof(tfd), 0) == false)std::cout << "[DEBUG] Couldnt read from Address: 0x" << std::hex << firstAddr << "\n";
            tmpdt = tfd;
            //std::cout << "[DEBUG] 1Address: 0x" << std::hex << tmpdt << "\n";
            if (ReadProcessMemory(hSpotify, (BYTE*)tmpdt + 0x34, &tfd, sizeof(tfd), 0) == false)std::cout << "[DEBUG] Couldnt read from Address: 0x" << std::hex << firstAddr << "\n";
            tmpdt = tfd;
            //std::cout << "[DEBUG] 2Address: 0x" << std::hex << tmpdt << "\n";
            if (ReadProcessMemory(hSpotify, (BYTE*)tmpdt + 0x30, &tfd, sizeof(tfd), 0) == false)std::cout << "[DEBUG] Couldnt read from Address: 0x" << std::hex << firstAddr << "\n";
            tmpdt = tfd;
            //std::cout << "[DEBUG] 3Address: 0x" << std::hex << tmpdt << "\n";
            if (ReadProcessMemory(hSpotify, (BYTE*)tmpdt + 0x20, &tfd, sizeof(tfd), 0) == false)std::cout << "[DEBUG] Couldnt read from Address: 0x" << std::hex << firstAddr << "\n";
            tmpdt = tfd;
            //std::cout << "[DEBUG] 4Address: 0x" << std::hex << tmpdt << "\n";
            if (ReadProcessMemory(hSpotify, (BYTE*)tmpdt + 0x18, &tfd, sizeof(tfd), 0) == false)std::cout << "[DEBUG] Couldnt read from Address: 0x" << std::hex << firstAddr << "\n";
            tmpdt = tfd;
            */

            //SpotifyTextAddress = tmpdt;
            int OverDupe = FindDMAAddy32(hSpotify, firstAddr, JoeBidden);
            SpotifyTextAddress = OverDupe;
            std::wstring ddssd; //to_string()
            LPCWSTR Deflord = ddssd.c_str();
            char Textthem;
           if (DebugMode == true) {
                
                std::cout << "[DEBUG] SongNameAddr: 0x" << std::hex << SpotifyTextAddress << "\n";
                std::cout << "[DEBUG] ModuleBase: 0x" << std::hex << ModuleBaseSpotify << "\n";
                std::cout << "[DEBUG] ProcID: 0x" << std::hex << SProcID << "\n";
          }
            TickFirst41 = 0;
            TickLast41 = 0;
          }
       else
         {
           SProcID = GetProcId(L"Spotify.exe");
           if (SProcID != 0) {
               cod();
               SameAddress();
               if (SongFirst != tdeg) {
                   if (DebugMode == true) {
                       std::cout << "Now playing: " << tdeg << "\n";
                   }
                   SongFirst = tdeg;
               }
           }
           else
           {
               SongFirst = "Spotify Closed";
               Spotifyini = false;
           }
       }
    }
}

/*
void NullOutBytes(uintptr_t Address1c,int Cycles) {
    BYTE csd2 = 0x90;
    for (size_t i = 0; i < Cycles; i++)
    {
        WriteProcessMemory(hProcess, (BYTE*)Address1c, &csd2, sizeof(csd2), 0);
        Address1c = Address1c + 0x1;
    }
    csd2 = 0;
}
*/

void CheckPatchedBytes() {
    int Valc;
    uintptr_t Point22;
   


    /*Point22 = moduleBase + 0x15B8242;
                                WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                Valc = 2337554825;
                                Point22 = moduleBase + 0x15B8248;
                                WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                Valc = 1096302985;
                                Point22 = moduleBase + 0x15B824E;
                                WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                WriteProcessMemory(hProcess, (BYTE*)CarObjectx, &x14, sizeof(x14), 0);
                                WriteProcessMemory(hProcess, (BYTE*)CarObjecty, &y14, sizeof(y14), 0);
                                WriteProcessMemory(hProcess, (BYTE*)CarObjectz, &z14, sizeof(z14), 0);
                                Point22 = moduleBase + 0x16BFBCE;*/



    //Ghostmode off
    Point22 = moduleBase + 0x15B8242;
    ReadProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
    if (Valc != 2341507216)
    {
        GhostInit = false;
        Valc = 2337292681;
        WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
        Valc = 2337554825;
        Point22 = moduleBase + 0x15B8248;
        WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
        Valc = 1096302985;
        Point22 = moduleBase + 0x15B824E;
        WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
        Point22 = moduleBase + 0x16BFBCE;
        Valc = 541135119;
        WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
    }

    //unlimited Nitro off

    ReadProcessMemory(hProcess, (BYTE*)NitroAddress, &Valc, sizeof(Valc), 0);
    if (Valc == 1099993232) {
        InitNitro = false;
        Valc = 1090554177;
        WriteProcessMemory(hProcess, (BYTE*)NitroAddress, &Valc, sizeof(Valc), 0);
    }


    //PatchTpBack off

    /*
    * tm2p = moduleBase + 0x15B88B7;
                            DSDsdsd1 = 541069583;
                            WriteProcessMemory(hProcess, (BYTE*)tm2p, &DSDsdsd1, sizeof(DSDsdsd1), 0);
                            tm2p = moduleBase + 0x15B88B0;
*/

    Point22 = moduleBase + 0x15B88B7;
    ReadProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
    if (Valc != 109789526)
    {
        NoTpBackini = false;
        Valc = 109789526;
        WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
        Point22 = moduleBase + 0x15B88B0;
        Valc = 1349521679;
        WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
    }

    


    //Fov Off
    Point22 = moduleBase + 0x14788D0;
    ReadProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
    if (Valc != 1225854963) {
        FovIni = false;
        Valc = 1225854963;
        WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
        Point22 = moduleBase + 0x14788D4;
        byte gf3 = 0x50;
        WriteProcessMemory(hProcess, (BYTE*)Point22, &gf3, sizeof(gf3), 0);
    }

    Valc = NULL;
    Point22 = NULL;
}

void cod() {
    char Textthem;
    tdeg = "";
    tdeg2 = "";
    bool Overflow = false;
    for (size_t i = 0; i < 66; i++)
    {

        if (IsTextUnicode(tdeg.c_str(), tdeg.length(), NULL) == 1) {
            tdeg.erase();
            tdeg = tdeg + " ";
        }
        if (ReadProcessMemory(hSpotify, (BYTE*)SpotifyTextAddress + i, &Textthem, sizeof(Textthem), NULL) == false) { Spotifyini = false;  GetCurrentSong(); };
        if (AlwaysShowName == true) {
            if (Textthem == 0)break;
            if (Textthem == -30 || Textthem == -128 || Textthem == -109) {
                continue;
            }
            if (Overflow == true) {
                tdeg2 = tdeg2 + Textthem;
                EmptyCharacter = true;

            }

            if (Textthem == -94 && Overflow == false)
            {
                Overflow = true;
                continue;
            }

            if (Overflow == false)
            {
                tdeg = tdeg + Textthem;
            }
        }
        else
        {
            if (OnlyName == true) {

                if (Overflow == true) {
                    tdeg2 = tdeg2 + Textthem;
                }

                if (Textthem == -94 && Overflow == false)
                {
                    if (i >= 44) { Overflow = true; }
                    EmptyCharacter = true;
                    continue;
                }
            }
            if (Textthem == 0)break;
            if (Textthem == -30 || Textthem == -128 || Textthem == -109) {
                continue;
            }

            if (Overflow == true) {

                EmptyCharacter = true;
                tdeg2 = tdeg2 + Textthem;
                continue;
            }


            if (Textthem == -94 && Overflow == false)
            {
                if (i >= 12) { Overflow = true; }
                else
                {
                    EmptyCharacter = false;
                    tdeg = tdeg + "By";
                    continue;
                }
                continue;
            }
            /* else
            {
               if (Textthem == -94 && i >= 50)
                {
                    EmptyCharacter = true;
                    tdeg2 = tdeg2 + Textthem;
                    continue;
                }

            }
            */
            tdeg = tdeg + Textthem;
        }   
    }
}


void InstantCock(float x, float z, float Pointx, float Pointz, float Pointy, bool Fer)
{
    t1x = Pointx + Temp1;
    t1z = Pointz + Temp1;
    float nssd = 0.056;
    t2x = Pointx - Temp1;
    t2z = Pointz - Temp1;
    float t3z = Pointz + 400;
    float t4z = Pointz - 400;
    float t3x = Pointx + 400;
    float t4x = Pointx - 400;


    if (AutoWin == true) {
        if (Fer == false || Pointx == 0.0f && Pointz == 0.0f) {
            Fer == false;
            return;
        }

        if (x >= t1x|| x <= t2x) {
            WriteProcessMemory(hProcess, (BYTE*)Positionaddrx, &Pointx, sizeof(Pointx), 0);
            WriteProcessMemory(hProcess, (BYTE*)Positionaddry, &Pointy, sizeof(Pointy), 0);
            WriteProcessMemory(hProcess, (BYTE*)Positionaddrz, &Pointz, sizeof(Pointz), 0);

            WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddrx, &nssd, sizeof(nssd), 0);
            WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddrz, &nssd, sizeof(nssd), 0);
            WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddry, &nssd, sizeof(nssd), 0);

            WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddrx, &rotx, sizeof(rotx), 0);
            WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddry, &roty, sizeof(roty), 0);
            WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddrz, &rotz, sizeof(rotz), 0);
        }

        if (z >= t1z || z <= t2z) {
            WriteProcessMemory(hProcess, (BYTE*)Positionaddrx, &Pointx, sizeof(Pointx), 0);
            WriteProcessMemory(hProcess, (BYTE*)Positionaddry, &Pointy, sizeof(Pointy), 0);
            WriteProcessMemory(hProcess, (BYTE*)Positionaddrz, &Pointz, sizeof(Pointz), 0);

            WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddrx, &nssd, sizeof(nssd), 0);
            WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddrz, &nssd, sizeof(nssd), 0);
            WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddry, &nssd, sizeof(nssd), 0);

            WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddrx, &rotx, sizeof(rotx), 0);
            WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddry, &roty, sizeof(roty), 0);
            WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddrz, &rotz, sizeof(rotz), 0);
        }

    }
    t1x = 0.0f;
    t1z = 0.0f;
    nssd = 0.0f;
    t2x = 0.0f;
    t2z = 0.0f;
    t3z = 0.0f;
    t4z = 0.0f;
    t3x = 0.0f;
    t4x = 0.0f;
}

float xj, yj, zj;

void CopyEntitys() {

    float i2, i3, i4, i82, i83, i84, gk, lb, gj ,gk1, lb1, gj1;


       if (CurrentEntityfollow != 0) {
        ReadProcessMemory(hProcess, (BYTE*)CurrentEntityfollow + 0x160, &xßl, sizeof(xßl), 0);
        ReadProcessMemory(hProcess, (BYTE*)CurrentEntityfollow + 0x164, &zßl, sizeof(zßl), 0);
        ReadProcessMemory(hProcess, (BYTE*)CurrentEntityfollow + 0x168, &yßl, sizeof(yßl), 0);
        WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddrx, &xßl, sizeof(xßl), 0);
        WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddrz, &zßl, sizeof(zßl), 0);
        WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddry, &yßl, sizeof(yßl), 0);
        
        ReadProcessMemory(hProcess, (BYTE*)CurrentEntityfollow + 0x50, &xßl, sizeof(xßl), 0);
        ReadProcessMemory(hProcess, (BYTE*)CurrentEntityfollow + 0x54, &zßl, sizeof(zßl), 0);
        ReadProcessMemory(hProcess, (BYTE*)CurrentEntityfollow + 0x58, &yßl, sizeof(yßl), 0);
        i2 = xßl - x16;
        i3 = yßl - y16;
        i4 = zßl - z16;
        i82 = xßl + x16;
        i83 = yßl + y16;
        i84 = zßl + z16;
        if (i82 <= Reach || i2 >= Reach2 && i83 <= Reach || i3 >= Reach2 && i84 <= Reach || i4 >= Reach2)
        {
            xßl = xßl + 4.0f;
            zßl = zßl + 4.0f;
            yßl = yßl + 1.2f;
            i2 = xßl;
            i3 = yßl;
            i4 = zßl;


            

            WriteProcessMemory(hProcess, (BYTE*)Positionaddrx, &xßl, sizeof(xßl), 0);
            WriteProcessMemory(hProcess, (BYTE*)Positionaddrz, &zßl, sizeof(zßl), 0);
            WriteProcessMemory(hProcess, (BYTE*)Positionaddry, &yßl, sizeof(yßl), 0);
        }
        

        ReadProcessMemory(hProcess, (BYTE*)CurrentEntityfollow + 0x20, &xßl, sizeof(xßl), 0);
        ReadProcessMemory(hProcess, (BYTE*)CurrentEntityfollow + 0x24, &zßl, sizeof(zßl), 0);
        ReadProcessMemory(hProcess, (BYTE*)CurrentEntityfollow + 0x28, &yßl, sizeof(yßl), 0);
        WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddrx, &xßl, sizeof(xßl), 0);
        WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddrz, &zßl, sizeof(zßl), 0);
        WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddry, &yßl, sizeof(yßl), 0);

    }
    else
    {
        for (size_t i = 0; i < getEntityCount(); i++)
        {
            if (ToPoland[i].L1ocalPlayer == 0 || LocalPlayerCar == ToPoland[i].L1ocalPlayer)continue;
            i2 = ToPoland[i].x16 - x16;
            i3 = ToPoland[i].y16 - y16;
            i4 = ToPoland[i].z16 - z16;
            i82 = ToPoland[i].x16 + x16;
            i83 = ToPoland[i].y16 + y16;
            i84 = ToPoland[i].z16 + z16;

            /*t1x = Pointx + Temp1;
            t1z = Pointz + Temp1;
            float nssd = 0.056;
            t2x = Pointx - Temp1;
            t2z = Pointz - Temp1;
            float t3z = Pointz + 400;
            float t4z = Pointz - 400;
            float t3x = Pointx + 400;
            float t4x = Pointx - 400;


            if (AutoWin == true) {
                if (Fer == false || Pointx == 0.0f && Pointz == 0.0f) {
                    Fer == false;
                    return;
                }

                if (x >= t1x || x <= t2x) {
                    WriteProcessMemory(hProcess, (BYTE*)Positionaddrx, &Pointx, sizeof(Pointx), 0);
                    WriteProcessMemory(hProcess, (BYTE*)Positionaddry, &Pointy, sizeof(Pointy), 0);
                    WriteProcessMemory(hProcess, (BYTE*)Positionaddrz, &Pointz, sizeof(Pointz), 0);

                    WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddrx, &nssd, sizeof(nssd), 0);
                    WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddrz, &nssd, sizeof(nssd), 0);
                    WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddry, &nssd, sizeof(nssd), 0);

                    WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddrx, &rotx, sizeof(rotx), 0);
                    WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddry, &roty, sizeof(roty), 0);
                    WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddrz, &rotz, sizeof(rotz), 0);
                }

                if (z >= t1z || z <= t2z) {
                */
            if (i82 >= Reach || i2 <= Reach2 && i83 >= Reach || i3 <= Reach2 && i84 >= Reach || i4 <= Reach2 && CurrentEntityfollow == 0)
            {
                if (CurrentEntityfollow == 0) {
                    CurrentEntityfollow = ToPoland[i].L1ocalPlayer;
                }
                /*ToPoland[i1].V1elcPositionaddrx = ToPoland[i1].L1ocalPlayer + 0x160;
            ToPoland[i1].V1elcPositionaddrz = ToPoland[i1].L1ocalPlayer + 0x164;
            ToPoland[i1].V1elcPositionaddry = ToPoland[i1].L1ocalPlayer + 0x168;
            ToPoland[i1].R1otationPositionaddrx = ToPoland[i1].L1ocalPlayer + 0x20;
            ToPoland[i1].R1otationPositionaddrz = ToPoland[i1].L1ocalPlayer + 0x24;
            ToPoland[i1].R1otationPositionaddry = ToPoland[i1].L1ocalPlayer + 0x28;*/
                break;
            }
        }
    }


}

void menu::render()
{
    //If Insert pressed menu isnt rendering
    if (GetAsyncKeyState(VK_INSERT) & 1) {
        MenuHidden = !MenuHidden;
    }
    
    if (GetAsyncKeyState(VK_F2) & 1 && DebugMode == true) {
        ShowConsole = !ShowConsole;
        if (ShowConsole == true) {
            ::ShowWindow(::GetConsoleWindow(), SW_SHOW);
        }
        else
        {
            ::ShowWindow(::GetConsoleWindow(), SW_HIDE);
        }
    }
   /* if (DebugMode == false && Start_Cheat == true)
    {

        ::ShowWindow(::GetConsoleWindow(), SW_HIDE);
    }
    */

    if (globals.active)
    {
    stas:
        ImGui::SetNextWindowSize(iw.window_size);
        ImGui::SetNextWindowBgAlpha(1.0f);
        if (Start_Cheat == false) {
            if (GetAsyncKeyState(VK_F4) & 1)AutoStart = false;
            //If Insert pressed menu isnt rendering
            if (InitTick == false) {
                TickBest = 20;
                TickFirst1 = GetTickCount64();
                TickLast1 = TickFirst1 + 500;
                TickFirst9 = GetTickCount64();
                TickLast9 = TickFirst9 + 250;
                InitTick = true;
            }
            if (TickBest == 2) {
                s2334 = s234 + "Performance Mode";
            }

            if (RainbowMode == true) {
                TickFirst9 = GetTickCount64();
                if (TickFirst9 >= TickLast9 && SpotifyMode == true) {
                    TickFirst9 = GetTickCount64();
                    TickLast42 = TickFirst42 + 700;
                    if (Spotifyini == false) {
                        GetCurrentSong();
                    }

                    if (a3 > 1.0f)a3 = 0.1f;

                    if (a4 > 1.0f)a4 = 0.1f;

                    if (a5 > 1.0f)a5 = 0.1f;

                    a5 = a5 + 0.04f;

                    a3 = a3 + 0.01f;

                    a4 = a4 + 0.02f;
                    Gucci = { a3, a4, a5, a6 };
                    
                }
            }

            TickFirst1 = GetTickCount64();
            if (TickFirst1 >= TickLast1) {
                TickFirst1 = GetTickCount64();
                TickLast1 = TickFirst1 + 1500;
                procID = GetProcId(L"Asphalt8.exe");//Asphalt8.exe");
                if (procID != 0)Start_Cheat = true;

                if (AutoStart == true && procID == 0) {
                    if (system("explorer.exe shell:appsFolder\\GAMELOFTSA.Asphalt8Airborne_0pp20fcewvvtj!App") == 0 && system("explorer.exe shell:appsFolder\\Microsoft.GAMELOFTSA.Asphalt8Airborne_0pp20fcewvvtj!App") == 0)MessageBoxW(NULL, L"Couldnt find the Path of Asphalt8 open it yourself", L"?????????", MB_OK | MB_SYSTEMMODAL);
                }
                
                if (SpotifyMode == true) {
                    GetCurrentSong();
                }
            }

            if (MenuHidden == false) {
                ImGui::Begin(iw.window_title, &globals.active, iw.window_flags);
                {
                    if (Lightskin == true) {
                        ImGui::StyleColorsLight();
                    }
                    else
                    {
                        ImGui::StyleColorsDark();
                    }
                    ImGui::Spacing();

                    ImGui::Spacing();
                    ImGui::Spacing();
                    ImGui::Text("Waiting for the Process");
                    ImGui::Text("");
                    ImGui::Text("");
                    ImGui::Spacing();
                    if (SpotifyMode == true && DebugMode == false) {
                        if (OnlyName == false) {
                            std::string s34d = "Current Song Playing: " + SongFirst;
                            const char* SafePunja1bi2ß = s34d.data();
                            ImGui::TextColored(Gucci, SafePunja1bi2ß);
                            ImGui::Text("");
                        }
                        if (EmptyCharacter == true) {
                            std::string s34d2 = "By: " + tdeg2;
                            const char* SafePunja1bi2ß1 = s34d2.data();
                            ImGui::TextColored(Gucci, SafePunja1bi2ß1);
                        }
                        ImGui::Text("");
                    }
                    ImGui::Checkbox("Auto Start Game (500 milisec delay, press F4 to stop)",&AutoStart);
                    ImGui::Spacing();
                    ImGui::Spacing();
                    ImGui::Checkbox("Spotify Mode?", &SpotifyMode);
                    ImGui::Spacing();
                    ImGui::Checkbox("Rainbow Mode?", &RainbowMode);
                    ImGui::Spacing();
                    if (ImGui::Button("Open Asphalt") == true) {
                        if (system("explorer.exe shell:appsFolder\\GAMELOFTSA.Asphalt8Airborne_0pp20fcewvvtj!App") == 0 && system("explorer.exe shell:appsFolder\\Microsoft.GAMELOFTSA.Asphalt8Airborne_0pp20fcewvvtj!App") == 0)MessageBoxW(NULL, L"Couldnt find the Path of Asphalt8 open it yourself", L"?????????", MB_OK | MB_SYSTEMMODAL);
                    }
                    ImGui::Spacing();
                    if (ImGui::Button("Clean system from Ban files") == true) {
                        CleanPc();
                    }
                    ImGui::Spacing();
                }
                ImGui::End();

            }

        }
        else
        {
            if (Lightskin == true || Standart1337Mode == true) {
                if (iniLi == false) {
                    ImGui::StyleColorsLight();
                    iniLi = true;
                }
            }
            else
            {
                if (iniLi == true) {
                    ImGui::StyleColorsDark();
                    iniLi = false;
                }
            }
            if (InitData == false) {
                //Gets Process id and modulebase and so on
                TickBest = 2;
                InitTick = false;
                procID = GetProcId(L"Asphalt8.exe");
                if (procID == 0) {
                    if (DebugMode == true) {
                        MessageBoxW(NULL, L"Process not Found make sure Asphalt8 is open", L"?????????", MB_OK | MB_SYSTEMMODAL);
                    }
                    Start_Cheat = false;
                    goto stas;
                }
                hProcess = 0;
                hProcess = OpenProcess(PROCESS_ALL_ACCESS, 0, procID);
                moduleBase = GetModuleBaseAddress(procID, L"Asphalt8.exe");
               // procID2 = GetProcId(L"simple-clicker.exe");;
                if (moduleBase == 0) {
                    if (DebugMode == true) {
                        MessageBoxW(NULL, L"Couldnt Open Asphalt 8 (Not Enough Rights?)", L"?????????", MB_OK | MB_SYSTEMMODAL);
                    }
                    Start_Cheat = false;
                    goto stas;
                }
                NitroAddress = moduleBase + 0x65CC24;// 0x5987B4; //0x6C5874;
                Nitro1Address = moduleBase + 0x65CC44;// 0x5987DA; //0x6C589A;
                PointerToCurrentLevel = moduleBase + 0x01DCF630;//0x1DB42C0;
                ReadProcessMemory(hProcess, (BYTE*)PointerToCurrentLevel, &lastAddra1, sizeof(lastAddra1), 0);
                lastAddra12 = lastAddra1;
                LocalPlayerCar = FindDMAAddy(hProcess, PointerToCurrentLevel, ClassOfCarOffsets);
                LocalPlayer = FindDMAAddy(hProcess, PointerToCurrentLevel, OffsetsOfOffset12);
                Dsd = Balls;
                LocalPlayer2 = LocalPlayer1;
                Positionaddrx = LocalPlayerCar + 0x50;
                Positionaddrz = LocalPlayerCar + 0x54;
                Positionaddry = LocalPlayerCar + 0x58;
                VelcPositionaddrx = LocalPlayerCar + 0x160;
                VelcPositionaddrz = LocalPlayerCar + 0x164;
                VelcPositionaddry = LocalPlayerCar + 0x168;//1AD38
                AddrsOfCam = moduleBase + 0x01DCF580; //0x01DB4848;
                ReadProcessMemory(hProcess, (BYTE*)AddrsOfCam, &CarObject, sizeof(CarObject), 0);
                CarObjectx = FindDMAAddy(hProcess, AddrsOfCam, Offsets22);
                CarObjectz = CarObjectx + 0x4;
                CarObjecty = CarObjectx + 0x8;
                CredsBase = moduleBase + 0x01DCF508;//0x01DCF580;// 0x01DB4280;
                CreditAddress2 = FindDMAAddy(hProcess, CredsBase, CredsOfs);
                InitData = true;
                TickFirst = GetTickCount64();
                TickLast = TickFirst + 200;
                TickFirst2 = GetTickCount64();
                TickFirst24 = GetTickCount64();
                TickLast24 = TickFirst24 + 10000;
                TickFirst42 = GetTickCount64();
                TickLast42 = TickFirst42 + 50;
                tmp22 = moduleBase + 0x01DD07D8; //0x01DCF580;//0x01DB4410;
                MenuTextAddress = FindDMAAddy(hProcess, tmp22, OffMenu);
                EntityLis2t();
                TickLast2 = TickFirst2 + 200;
                CheckPatchedBytes();
                GetCurrentSong();
            }


            //If Insert pressed menu isnt rendering
            if (MenuHidden == false) {
                norm:
                switch (Tabs)
                {

                case 1:
                    ImGui::Begin(iw.window_title, &globals.active, iw.window_flags);
                    {
                        if (Standart1337Mode == false) {
                            if (DebugMode == true) {

                                if (SpotifyMode == true) {
                                    std::string s34d = "Current Song Playing: " + SongFirst;
                                    const char* SafePunja1bi2ß = s34d.data();
                                    ImGui::TextColored(Gucci, SafePunja1bi2ß);
                                    ImGui::Text("");
                                    if (EmptyCharacter == true) {
                                        std::string s34d2 = "By: " + tdeg2;
                                        const char* SafePunja1bi2ß1 = s34d2.data();
                                        ImGui::TextColored(Gucci, SafePunja1bi2ß1);
                                    }
                                    ImGui::Text("");
                                }
                                std::string lol12 = "Entities being rendered: " + std::to_string(getEntityCount());
                                const char* SafePunjabi = lol12.data();

                                std::string l1ol12 = "Spawnpoint set? : " + std::to_string(Spawnini) + "      x: " + std::to_string(Spawnpointx) + " z: " + std::to_string(SpawnPointz) + " y: " + std::to_string(Spawnpointy);
                                const char* S1afePunjabi = l1ol12.data();
                                const char* S1afePunjabi1 = NULL;
                                const char* S1afePunjabi12 = NULL;
                                std::string l1ol121 = "";
                                std::string l1ol1212 = "";

                                if (MenuChecks == true) {
                                        l1ol121 = "MainMenu? : " + std::to_string(MainMenu);
                                        S1afePunjabi1 = l1ol121.data();

                                        l1ol1212 = "In Menu? : " + std::to_string(MenuSd);
                                        S1afePunjabi12 = l1ol1212.data();
                                }
                                else
                                {
                                        S1afePunjabi1 = "Turn on Menu Checks in Performance Settings";
                                        S1afePunjabi12 = "Status: Not Active";
                                }

                                std::string lol11212 = "FPS: " + std::to_string(ImGui::GetIO().Framerate);
                                const char* SafePunja1b2i = lol11212.data();

                                std::string lol1122 = "Your Pos: x: " + std::to_string(x16) + " , y: " + std::to_string(y16) + " , z: " + std::to_string(z16);
                                const char* SafePunja1bi = lol1122.data();
                                ImGui::Text(SafePunjabi);
                                ImGui::Text("");
                                ImGui::Text(SafePunja1b2i);
                                ImGui::Text("");
                                ImGui::Text(SafePunja1bi);
                                ImGui::Text("");
                                ImGui::Text(S1afePunjabi);
                                ImGui::Text("");
                                ImGui::Text(S1afePunjabi1);
                                ImGui::Text("");
                                ImGui::Text(S1afePunjabi12);
                                ImGui::Text("");
                                lol12 = "";
                                l1ol12 = "";
                                lol11212 = "";
                                lol1122 = "";
                                l1ol121 = "";
                                l1ol1212 = "";
                                SafePunjabi = NULL;
                                S1afePunjabi = NULL;
                                SafePunja1b2i = NULL;
                                SafePunja1bi = NULL;
                                S1afePunjabi1 = NULL;
                                S1afePunjabi12 = NULL;
                            }
                            if (SpotifyMode == true && DebugMode == false) {
                                if (OnlyName == false || AlwaysShowName == true) {
                                    std::string s34d = "Current Song Playing: " + SongFirst;
                                    const char* SafePunja1bi2ß = s34d.data();
                                    ImGui::TextColored(Gucci, SafePunja1bi2ß);
                                    ImGui::Text("");
                                }
                                if (EmptyCharacter == true || AlwaysShowName == true) {
                                    std::string s34d2 = "By: " + tdeg2;
                                    const char* SafePunja1bi2ß1 = s34d2.data();
                                    ImGui::TextColored(Gucci, SafePunja1bi2ß1);
                                }
                                ImGui::Text("");
                            }
                                ImGui::Checkbox("Nitro doesnt get used up", &InfiniteNitro);
                                ImGui::Spacing();
                                ImGui::Checkbox("Spotify Mode?", &SpotifyMode);
                                ImGui::Spacing();
                                if (Biggers == true) {
                                    ImGui::Checkbox("Only Name Mode?", &OnlyName);
                                    ImGui::Spacing();
                                    ImGui::Checkbox("Always show Name Seperate", &AlwaysShowName);
                                    ImGui::Spacing();
                                    ImGui::Checkbox("Rainbow Mode?", &RainbowMode);
                                    ImGui::Spacing();
                                }
                                ImGui::Checkbox("More Options", &Biggers);
                                ImGui::Spacing();
                                ImGui::Checkbox("Jump with da car (Press Space)", &JumpCar);
                                ImGui::Spacing();
                                ImGui::Checkbox("SlowFall (Auto slow fall maybe annoying)", &SlowFall);
                                ImGui::Spacing();
                                ImGui::Checkbox("FastFall (Auto Fast fall maybe annoying)", &FastFall);
                                ImGui::Spacing();
                                ImGui::Checkbox("Teleport (O = set TPPoint, L = see TPPoint, K = TP)", &GhostMode);
                                ImGui::Spacing();
                                ImGui::Checkbox("Instant Stop yeah", &InstantStop);
                                ImGui::Spacing();
                                ImGui::Checkbox("Stop Everyone (in your Render Distance) ", &LoopTp); 
                                ImGui::Spacing();
                                ImGui::Checkbox("Fly Hack Test (not finished version imma make a better one)", &FlyHac2k);
                                ImGui::Spacing();//CopyOthers CameraObject
                                ImGui::Checkbox("FOV Changer", &FovChanger);
                                ImGui::Spacing();//CopyOthers CameraObject
                                if (FovChanger == true) {
                                    if (FovIni == false) {
                                        FovIni = true;
                                    //FovOn = 1225854963
                                    //FovOff = 2425393296
                                        //Asphalt8_x64.exe + 1197D10
                                        unsigned int gf2 = 620900683920;
                                        uintptr_t döm = moduleBase + 0x14788D0;//0x1197D10;
                                        WriteProcessMemory(hProcess, (BYTE*)döm, &gf2, sizeof(gf2), 0);
                                        döm = moduleBase + 0x14788D4;
                                        byte gf3 = 0x90;
                                        WriteProcessMemory(hProcess, (BYTE*)döm, &gf3, sizeof(gf3), 0);
                                    }
                                    if (Fov == 0.0f)
                                    {
                                        Fov = 120.0f;
                                    }

                                    ImGui::SliderFloat("Fov Value", &Fov, 5.0f, 251.0f, 0, 4.0f);
                                    ImGui::Spacing();
                                    if (Fov != Fov1) {
                                        Fov1 = Fov;
                                        for (size_t i = 0; i < 20; i++)
                                        {

                                            Camera2 = 0x10 * i;
                                            Camera2 = Camera2 + 0x8;
                                            CameraObject = { 0x60, 0x100, Camera2 , 0x220,0x50 };
                                            CurrentCamera = FindDMAAddy(hProcess, AddrsOfCam, CameraObject);
                                            if (CurrentCamera == 0)
                                            {
                                                continue;
                                            }
                                            float FovT = Fov / 100;
                                            WriteProcessMemory(hProcess, (BYTE*)CurrentCamera, &FovT, sizeof(FovT), 0);
                                            /*
                                            switch (i)
                                            {
                                            case 1:
                                                
                                                break;

                                            case 2:
                                                Camera2 = 0x38;
                                                CameraObject = { 0x60, 0x100, Camera2 , 0x220,0x50 };
                                                CurrentCamera = FindDMAAddy(hProcess, AddrsOfCam, CameraObject);
                                                WriteProcessMemory(hProcess, (BYTE*)CurrentCamera, &Fov, sizeof(Fov), 0);
                                                break;

                                            case 3:
                                                Camera2 = 0x28;
                                                CameraObject = { 0x60, 0x100, Camera2 , 0x220,0x50 };
                                                CurrentCamera = FindDMAAddy(hProcess, AddrsOfCam, CameraObject);
                                                WriteProcessMemory(hProcess, (BYTE*)CurrentCamera, &Fov, sizeof(Fov), 0);
                                                break;
                                            }
                                            */
                                           
                                        }

                                    }
                                }
                                else
                                {
                                    if (FovIni == true)
                                    {
                                        FovIni = false;
                                        int gf2 = 1225854963;
                                        uintptr_t döm = moduleBase + 0x14788D4;//0x1197D14;
                                        WriteProcessMemory(hProcess, (BYTE*)moduleBase + 0x14788D0, &gf2, sizeof(gf2), 0);
                                        byte gf3 = 0x50;
                                        WriteProcessMemory(hProcess, (BYTE*)döm, &gf3, sizeof(gf3), 0);
                                    }
                                }
                                ImGui::Checkbox("Tp Every entity there is", &LoopTpEvery);
                                ImGui::Spacing();
                                ImGui::Checkbox("Copy any entity in your reach", &CopyOthers);
                                ImGui::Spacing();
                                ImGui::Checkbox("Light mode", &Lightskin);
                                ImGui::Spacing();
                                ImGui::Checkbox("Patch TP Back(Dont get Tped back to somewhere)", &NoTpBack);
                                ImGui::Spacing();
                                ImGui::Checkbox("Auto Start Game (500 milisec delay, press F4 to stop)", &AutoStart);
                                ImGui::Spacing();
                                ImGui::Checkbox("Auto Win (Teleport you when your far enough away)-", &AutoWin);
                                ImGui::Spacing();
                                if (AutoWin == true) {
                                    ImGui::SliderFloat("Meters until you get Teleported", &Temp1, 100.0f, 5000.0f, 0, 5.0f);
                                    ImGui::Spacing();
                                }/*
                                ImGui::SliderFloat("Set Y Pos:", &b2y, -600.0f, 600.0f, 0, 50.0f);
                                b2y = x16;
                                if (t2y != b2y && b2y != x16) {
                                    t2y = b2y;
                                    WriteProcessMemory(hProcess, (BYTE*)Positionaddry, &b2y, sizeof(b2y), 0);
                                }
                                */
                                if (un1337 == true) {
                                    ImGui::Checkbox("1337 Mode?", &Standart1337Mode);
                                    ImGui::Spacing();
                                }
                                

                                    ImGui::Checkbox("Debug Mode", &DebugMode);
                                    ImGui::Spacing();
                                if (ImGui::Button("Random Ammount of Creds") == true) {
                                    int TempVal;
                                    ReadProcessMemory(hProcess, (BYTE*)CreditAddress2, &TempVal, sizeof(TempVal), 0);
                                    TempVal = TempVal - 1000;
                                    VirtualProtectEx(hProcess, (BYTE*)CreditAddress2, sizeof(TempVal), 0x40, &OldProtection);
                                    if (WriteProcessMemory(hProcess, (BYTE*)CreditAddress2, &TempVal, sizeof(TempVal), 0) == false) {
                                        if (DebugMode == true) {
                                            MessageBox(NULL, L"Couldnt write", L"?????????", MB_OK | MB_SYSTEMMODAL);
                                        }
                                        
                                    }
                                }
                                ImGui::Spacing();

                                if (ImGui::Button("Shoot someone into the air") == true) {
                                    float i2, i3, i4, i82, i83, i84;


                                    if (CurrentEntityfollow == 0) {
                                        for (size_t i = 0; i < getEntityCount(); i++)
                                        {
                                            if (ToPoland[i].L1ocalPlayer == 0 || LocalPlayerCar == ToPoland[i].L1ocalPlayer)continue;
                                            i2 = ToPoland[i].x16 - x16;
                                            i3 = ToPoland[i].y16 - y16;
                                            i4 = ToPoland[i].z16 - z16;
                                            i82 = ToPoland[i].x16 + x16;
                                            i83 = ToPoland[i].y16 + y16;
                                            i84 = ToPoland[i].z16 + z16;
                                            if (i82 >= Reach || i2 <= Reach2 && i83 >= Reach || i3 <= Reach2 && i84 >= Reach || i4 <= Reach2 && CurrentEntityfollow == 0)
                                            {
                                                if (CurrentEntityfollow == 0) {
                                                    CurrentEntityfollow = ToPoland[i].L1ocalPlayer;
                                                }
                                                break;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        if (Flipini == false)Flipini = true;
                                        xj = x16;
                                        yj = y16;
                                        zj = z16;


                                        ReadProcessMemory(hProcess, (BYTE*)CurrentEntityfollow + 0x160, &i2, sizeof(i2), 0);
                                        ReadProcessMemory(hProcess, (BYTE*)CurrentEntityfollow + 0x164, &i3, sizeof(i3), 0);
                                        ReadProcessMemory(hProcess, (BYTE*)CurrentEntityfollow + 0x168, &i4, sizeof(i4), 0);
                                        x1y = i2;
                                        y1y = i3;
                                        z1y = i4;
                                        ReadProcessMemory(hProcess, (BYTE*)CurrentEntityfollow + 0x20, &xßl, sizeof(xßl), 0);
                                        ReadProcessMemory(hProcess, (BYTE*)CurrentEntityfollow + 0x24, &zßl, sizeof(zßl), 0);
                                        ReadProcessMemory(hProcess, (BYTE*)CurrentEntityfollow + 0x28, &yßl, sizeof(yßl), 0);
                                        yßl = yßl - 0.8f;
                                        x2y = xßl;
                                        y2y = yßl;
                                        z2y = yßl;

                                        ReadProcessMemory(hProcess, (BYTE*)CurrentEntityfollow + 0x50, &xßl, sizeof(xßl), 0);
                                        ReadProcessMemory(hProcess, (BYTE*)CurrentEntityfollow + 0x54, &zßl, sizeof(zßl), 0);
                                        ReadProcessMemory(hProcess, (BYTE*)CurrentEntityfollow + 0x58, &yßl, sizeof(yßl), 0);
                                        x3y = xßl;
                                        y3y = yßl;
                                        z3y = zßl;
                                    }
                                }

                                ImGui::Spacing();
                               /* if (ImGui::Button("Unlock Win (doesnt work anymore)") == true) {
                                    float x69, y69, z69;
                                    float x691, y691, z691;
                                    x691 = x16;
                                    y691 = y16;
                                    z691 = z16;
                                    x69 = x16 + 50000.0f;
                                    y69 = x16 + 50000.0f;
                                    z69 = x16 + 50000.0f;
                                    int Valc;
                                    Valc = 2341507216;
                                    Point22 = moduleBase + 0x11B5A72;
                                    WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                    Valc = 2341507216;
                                    Point22 = moduleBase + 0x11B5A78;
                                    WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                    Valc = 1099993232;
                                    Point22 = moduleBase + 0x11B5A7E;
                                    WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                    WriteProcessMemory(hProcess, (BYTE*)CarObjectx, &x69, sizeof(x69), 0);
                                    WriteProcessMemory(hProcess, (BYTE*)CarObjecty, &y69, sizeof(y69), 0);
                                    WriteProcessMemory(hProcess, (BYTE*)CarObjectz, &z69, sizeof(z69), 0);
                                    WriteProcessMemory(hProcess, (BYTE*)Positionaddrx, &x69, sizeof(x69), 0);
                                    WriteProcessMemory(hProcess, (BYTE*)Positionaddry, &y69, sizeof(y69), 0);
                                    WriteProcessMemory(hProcess, (BYTE*)Positionaddrz, &z69, sizeof(z69), 0);
                                    x69 = -50000.0f;
                                    y69 = -50000.0f;
                                    z69 = -50000.0f;
                                    WriteProcessMemory(hProcess, (BYTE*)CarObjectx, &x69, sizeof(x69), 0);
                                    WriteProcessMemory(hProcess, (BYTE*)CarObjecty, &y69, sizeof(y69), 0);
                                    WriteProcessMemory(hProcess, (BYTE*)CarObjectz, &z69, sizeof(z69), 0);
                                    WriteProcessMemory(hProcess, (BYTE*)Positionaddrx, &x69, sizeof(x69), 0);
                                    WriteProcessMemory(hProcess, (BYTE*)Positionaddry, &y69, sizeof(y69), 0);
                                    WriteProcessMemory(hProcess, (BYTE*)Positionaddrz, &z69, sizeof(z69), 0);
                                    Point22 = moduleBase + 0x1690C9E;
                                    Valc = 2425393296;
                                    WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                    Valc = NULL;
                                    Point22 = NULL;
                                    Valc = 2337292681;
                                    Point22 = moduleBase + 0x11B5A72;
                                    WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                    Valc = 2337554825;
                                    Point22 = moduleBase + 0x11B5A78;
                                    WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                    Valc = 1096302985;
                                    Point22 = moduleBase + 0x11B5A7E;
                                    WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                    WriteProcessMemory(hProcess, (BYTE*)CarObjectx, &x691, sizeof(x691), 0);
                                    WriteProcessMemory(hProcess, (BYTE*)CarObjecty, &y691, sizeof(y691), 0);
                                    WriteProcessMemory(hProcess, (BYTE*)CarObjectz, &z691, sizeof(z691), 0);
                                    WriteProcessMemory(hProcess, (BYTE*)Positionaddrx, &x691, sizeof(x691), 0);
                                    WriteProcessMemory(hProcess, (BYTE*)Positionaddry, &y691, sizeof(y691), 0);
                                    WriteProcessMemory(hProcess, (BYTE*)Positionaddrz, &z691, sizeof(z691), 0);
                                    Point22 = moduleBase + 0x1690C9E;
                                    Valc = 541135119;
                                    WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                    Valc = NULL;
                                    Point22 = NULL;
                                    x69 = NULL;
                                    z69 = NULL;
                                    y69 = NULL;
                                    x691 = NULL;
                                    y691 = NULL;
                                    z691 = NULL;
                                }
                                ImGui::Spacing();
                                */
                                if (ImGui::Button("Force SpawnPoint") == true) {
                                    rotx = x241;
                                    roty = y241;
                                    rotz = z241;
                                    Spawnpointx = x16;
                                    SpawnPointz = z16;
                                    Spawnpointy = y16 + 2.0f;
                                    Spawnini = true;
                                }
                                ImGui::Spacing();/*                                if (ImGui::Button("Test") == true) {
                                    Test3();

                                }
                                
                                ImGui::Spacing();
                                /*
                                if (ImGui::Button("Unlock Carrer shit") == true) {
                                    //Asphalt8_x64.exe+7555A1
                                    unsigned int sd5 = 2103250315;
                                    int s3 = 6;
                                    
                                    uintptr_t gkgl = moduleBase + 0x7555A1;
                                    ReadProcessMemory(hProcess, (BYTE*)gkgl, &sd5, sizeof(sd5), 0);
                                    if (sd5 != 2103250315)
                                    {
                                        WriteProcessMemory(hProcess, (BYTE*)gkgl, &sd5, sizeof(sd5), 0);
                                        
                                    }
                                    else
                                    {
                                        NullOutBytes(gkgl, s3);
                                        
                                    }

                                }
                                ImGui::Spacing();
                                */
                                if (ImGui::Button("Teleport all to you") == true) {
                                    for (size_t i = 0; i < getEntityCount(); i++)
                                    {
                                        if (ToPoland[i].L1ocalPlayer == LocalPlayerCar && ToPoland[i].Entity23234 == false)continue;
                                        float x121 = x16 + 5.0f, z121 = z16 + 5.0f, y121 = y16 + 5.0f;
                                        WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].P1ositionaddrx, &x121, sizeof(x121), 0);
                                        WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].P1ositionaddry, &y121, sizeof(y121), 0);
                                        WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].P1ositionaddrz, &z121, sizeof(z121), 0);
                                        WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].V1elcPositionaddrx, &x161, sizeof(x161), 0);
                                        WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].V1elcPositionaddrz, &z161, sizeof(z161), 0);
                                        WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].V1elcPositionaddry, &y161, sizeof(y161), 0);
                                        WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].R1otationPositionaddrx, &x241, sizeof(x241), 0);
                                        WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].R1otationPositionaddry, &y241, sizeof(y241), 0);
                                        WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].R1otationPositionaddrz, &z241, sizeof(z241), 0);
                                        x121 = 0;
                                        z121 = 0;
                                        y121 = 0;
                                    }

                                }
                                ImGui::Spacing();
                                if (ImGui::Button("Teleport all to Void lmao") == true) {
                                    for (size_t i = 0; i < getEntityCount(); i++)
                                    {
                                        if (ToPoland[i].L1ocalPlayer == LocalPlayerCar && ToPoland[i].Entity23234 == false)continue;
                                        float x121 = -9999999.0f, z121 = -9999999.0f, y121 = -9999999.0f;
                                        WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].P1ositionaddrx, &x121, sizeof(x121), 0);
                                        WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].P1ositionaddry, &y121, sizeof(y121), 0);
                                        WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].P1ositionaddrz, &z121, sizeof(z121), 0);
                                        WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].V1elcPositionaddrx, &x161, sizeof(x161), 0);
                                        WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].V1elcPositionaddrz, &z161, sizeof(z161), 0);
                                        WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].V1elcPositionaddry, &y161, sizeof(y161), 0);
                                        WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].R1otationPositionaddrx, &x241, sizeof(x241), 0);
                                        WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].R1otationPositionaddry, &y241, sizeof(y241), 0);
                                        WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].R1otationPositionaddrz, &z241, sizeof(z241), 0);
                                        x121 = 0;
                                        z121 = 0;
                                        y121 = 0;
                                    }
                                }

                                ImGui::Spacing();
                                if (ImGui::Button("Press if Cheat is broken") == true) {
                                    ReadProcessMemory(hProcess, (BYTE*)PointerToCurrentLevel, &lastAddra1, sizeof(&lastAddra1), 0);
                                    LocalPlayerCar = FindDMAAddy(hProcess, PointerToCurrentLevel, ClassOfCarOffsets);
                                    Positionaddrx = LocalPlayerCar + 0x50;
                                    Positionaddrz = LocalPlayerCar + 0x54;
                                    Positionaddry = LocalPlayerCar + 0x58;
                                    VelcPositionaddrx = LocalPlayerCar + 0x160;
                                    VelcPositionaddrz = LocalPlayerCar + 0x164;
                                    VelcPositionaddry = LocalPlayerCar + 0x168;
                                    RotationPositionaddrx = LocalPlayerCar + 0x20;
                                    RotationPositionaddrz = LocalPlayerCar + 0x24;
                                    RotationPositionaddry = LocalPlayerCar + 0x28;
                                    ReadProcessMemory(hProcess, (BYTE*)AddrsOfCam, &CarObject, sizeof(&CarObject), 0);
                                    CarObjectx = FindDMAAddy(hProcess, AddrsOfCam, Offsets22);
                                    CarObjectz = CarObjectx + 0x4;
                                    CarObjecty = CarObjectx + 0x8;
                                    int DSDsdsd = 1090554177;
                                    WriteProcessMemory(hProcess, (BYTE*)NitroAddress, &DSDsdsd, sizeof(DSDsdsd), 0);
                                    DSDsdsd = NULL;
                                    JumpCar = false;
                                    GhostMode = false;
                                    InfiniteNitro = false;
                                    SlowFall = false;
                                    FastFall = false;
                                    LoopTp = false;
                                    NoTpBack = false;
                                    EntityLis2t();
                                };
                                ImGui::Spacing();
                                if (ImGui::Button("Teleport to Entities") == true) {
                                    Tabs = 2;
                                }

                                ImGui::Spacing();
                                if (ImGui::Button("Unlock Source of Cheat") == true) {
                                   // Tabs = 3;
                                        MessageBox(NULL, L"Turned off because Unknowncheats doesnt allow any External links. My github is somewhere in this thread", L"?????????", MB_OK | MB_SYSTEMMODAL);

                                }
                                ImGui::Spacing();
                                if (ImGui::Button("Clean system from Ban files") == true) {
                                    CleanPc();
                                }
                                ImGui::Spacing();
                                if (ImGui::Button("Performance") == true) {
                                    Tabs = 4;
                                }
                        }
                        else
                        {
                            ImGui::Checkbox("Nitro doesnt get used up", &InfiniteNitro);
                            ImGui::Spacing();
                            ImGui::Checkbox("Jump with da car (Press Space)", &JumpCar);
                            ImGui::Spacing();
                            ImGui::Checkbox("SlowFall (Auto slow fall maybe annoying)", &SlowFall);
                            ImGui::Spacing();
                            ImGui::Checkbox("FastFall (Auto Fast fall maybe annoying)", &FastFall);
                            ImGui::Spacing();
                            ImGui::Checkbox("Teleport (O = set TPPoint, L = see TPPoint, K = TP)", &GhostMode);
                            ImGui::Spacing();
                            ImGui::Checkbox("Instant Stop yeah", &InstantStop);
                            ImGui::Spacing();
                            ImGui::Checkbox("1337 Mode?", &Standart1337Mode);
                            ImGui::Spacing();
                            if (ImGui::Button("Random Ammount of Creds") == true) {
                                int TempVal;
                                ReadProcessMemory(hProcess, (BYTE*)CreditAddress2, &TempVal, sizeof(TempVal), 0);
                                TempVal = TempVal - 1000;
                                if (WriteProcessMemory(hProcess, (BYTE*)CreditAddress2, &TempVal, sizeof(TempVal), 0) == false) {
                                    if (DebugMode == true) {
                                        MessageBox(NULL, L"Couldnt write", L"?????????", MB_OK | MB_SYSTEMMODAL);
                                    }
                                }
                            }
                            ImGui::Spacing();
                            if (ImGui::Button("Unlock Source of Cheat") == true) {
                                Tabs = 3;
                            }
                            ImGui::Spacing();
                            if (ImGui::Button("Performance") == true) {
                                Tabs = 4;
                            }
                            ImGui::Spacing();
                            if (ImGui::Button("Press if Cheat is broken") == true) {
                                ReadProcessMemory(hProcess, (BYTE*)PointerToCurrentLevel, &lastAddra1, sizeof(lastAddra1), 0);
                                LocalPlayerCar = FindDMAAddy(hProcess, PointerToCurrentLevel, ClassOfCarOffsets);
                                Positionaddrx = LocalPlayerCar + 0x50;
                                Positionaddrz = LocalPlayerCar + 0x54;
                                Positionaddry = LocalPlayerCar + 0x58;
                                VelcPositionaddrx = LocalPlayerCar + 0x160;
                                VelcPositionaddrz = LocalPlayerCar + 0x164;
                                VelcPositionaddry = LocalPlayerCar + 0x168;
                                RotationPositionaddrx = LocalPlayerCar + 0x20;
                                RotationPositionaddrz = LocalPlayerCar + 0x24;
                                RotationPositionaddry = LocalPlayerCar + 0x28;
                                ReadProcessMemory(hProcess, (BYTE*)AddrsOfCam, &CarObject, sizeof(CarObject), 0);
                                CarObjectx = FindDMAAddy(hProcess, AddrsOfCam, Offsets22);
                                CarObjectz = CarObjectx + 0x4;
                                CarObjecty = CarObjectx + 0x8;
                                int DSDsdsd = 1090554177;
                                WriteProcessMemory(hProcess, (BYTE*)NitroAddress, &DSDsdsd, sizeof(DSDsdsd), 0);
                                DSDsdsd = NULL;
                                JumpCar = false;
                                GhostMode = false;
                                InfiniteNitro = false;
                                SlowFall = false;
                                FastFall = false;
                            }
                            ImGui::Spacing();
                           
                        }
                        
                            
                           

                    }
                    ImGui::End();
                    break;


                case 2:
                    ImGui::Begin(iw.window_title, &globals.active, ImGuiWindowFlags_NoResize);
                    {
                        for (size_t i = 0; i < getEntityCount(); i++)
                        {
                            std::string Based;
                            if (ToPoland[i22].LocalPlayer == true) {
                                Based = "LocalPlayer";
                            }
                            else
                            {
                                Based = "Entity";
                            }
                            std::string lol12 = "Teleport to " + Based + ": " + std::to_string(i);
                            const char* SafePunjabi = lol12.data();
                            std::string lol112 = "Teleport Entity to SavePoint (VMode Only): " + std::to_string(i);
                            const char* SafePunja1bi = lol12.data();
                            if (ImGui::Button(SafePunjabi) == true) {
                                i22 = i;
                                WriteProcessMemory(hProcess, (BYTE*)Positionaddrx, &ToPoland[i22].x16, sizeof(ToPoland[i22].x16), 0);
                                WriteProcessMemory(hProcess, (BYTE*)Positionaddry, &ToPoland[i22].y16, sizeof(ToPoland[i22].y16), 0);
                                WriteProcessMemory(hProcess, (BYTE*)Positionaddrz, &ToPoland[i22].z16, sizeof(ToPoland[i22].z16), 0);
                                WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddrx, &ToPoland[i22].x161, sizeof(ToPoland[i22].x161), 0);
                                WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddrz, &ToPoland[i22].z161, sizeof(ToPoland[i22].z161), 0);
                                if (WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddry, &ToPoland[i22].y161, sizeof(ToPoland[i22].y161), 0) == false)EntityLis2t();
                            }
                           /* if (ImGui::Button(SafePunja1bi) == true) {
                                i22 = i;/*
                                WriteProcessMemory(hProcess, (BYTE*)Positionaddrx, &ToPoland[i22].x16, sizeof(ToPoland[i22].x16), 0);
                                WriteProcessMemory(hProcess, (BYTE*)Positionaddry, &ToPoland[i22].y16, sizeof(ToPoland[i22].y16), 0);
                                WriteProcessMemory(hProcess, (BYTE*)Positionaddrz, &ToPoland[i22].z16, sizeof(ToPoland[i22].z16), 0);
                                WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddrx, &ToPoland[i22].x161, sizeof(ToPoland[i22].x161), 0);
                                WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddrz, &ToPoland[i22].z161, sizeof(ToPoland[i22].z161), 0);
                                if (WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddry, &ToPoland[i22].y161, sizeof(ToPoland[i22].y161), 0) == false)EntityLis2t();
                                */
                            //}
                        }
                        std::string lol1122 = "Current Entity Pos: x: " + std::to_string(ToPoland[i22].x16) + " , y: " + std::to_string(ToPoland[i22].y16) + " , z: " + std::to_string(ToPoland[i22].z16);
                        const char* SafePunja1bi = lol1122.data();
                        ImGui::Spacing();
                        ImGui::Text(SafePunja1bi);
                        SafePunja1bi = NULL;
                        SafePunja1bi = NULL;

                        ImGui::Spacing();
                        ImGui::Checkbox("Loop tp to Entity (click on the Entities to loop tp)", &LoopTpToNig);
                        ImGui::Spacing();
                        ImGui::Checkbox("VMode (Activate if you cant tp around)", &vMode);

                        if (ImGui::Button("Go Back") == true) {
                            Tabs = 1;
                        }
                    }
                    break;

                case 3:
                   ImGui::Begin(iw.window_title, &globals.active, ImGuiWindowFlags_NoResize);
                   {
                       
                       if (Passright == true) {
                           ImGui::Text("https://github.com/DumbDev69420/safe-Punjabi_tool_noVirus");
                           if (ImGui::Button("Go Back") == true) {
                               Tabs = 1;
                           }
                       }
                       else
                       {
                           const char* TempBus = s1232.data();
                           ImGui::Text(TempBus);
                           for (size_t i = 0; i < 11; i++)
                           {
                               std::string Tempd2 = std::to_string(i);
                               const char* TempBus23 = Tempd2.data();
                               if (i == 10) {
                                   if (ImGui::Button("delete last character") == true) {
                                       s1232.pop_back();
                                   }
                                   continue;
                               }
                               ImGui::Spacing();
                               if (ImGui::Button(TempBus23) == true) {
                                   int Kesy = i;
                                   s1232 = s1232 + std::to_string(Kesy);
                               }
                           }

                           if (ImGui::Button("Try Password") == true) {
                               s1232 = TempBus;
                               if (s1232 == "1") {//337) {
                                   if(Standart1337Mode == true)MessageBox(NULL, L"Already entered", L"?????????", MB_OK | MB_SYSTEMMODAL);
                                   else
                                   {
                                       Standart1337Mode = true;
                                       un1337 = true;
                                       MessageBox(NULL, L"Old Version now Active", L"?????????", MB_OK | MB_SYSTEMMODAL);
                                   }
                                   
                               }
                               else
                               {
                                   if (s1232 == "123123") {
                                       if(DebugModeU2 == true)if (Standart1337Mode == true)MessageBox(NULL, L"Already entered", L"?????????", MB_OK | MB_SYSTEMMODAL);
                                       else
                                       {
                                           DebugModeU2 = true;
                                       }
                                      
                                   }
                                   else
                                   {
                                       if (s1232 == "133769420") {
                                           if(Passright == true)if (Standart1337Mode == true)MessageBox(NULL, L"Already entered", L"?????????", MB_OK | MB_SYSTEMMODAL);
                                           else
                                           {
                                               Passright = true;
                                               d3344(0, "https://github.com/DumbDev69420/safe-Punjabi_tool_noVirus");
                                               ShellExecute(0, 0, L"https://github.com/DumbDev69420/safe-Punjabi_tool_noVirus", 0, 0, SW_SHOW);
                                           }    
                                       }
                                       else
                                       {
                                           s1232 = "";
                                           MessageBox(NULL, L"Nope wrong", L"?????????", MB_OK | MB_SYSTEMMODAL);
                                       }
                                   }
                               }
                           }

                           if (ImGui::Button("Go Back") == true) {
                               const char* TempBus = NULL;
                               s1232 = "";
                               Tabs = 1;
                           }
                       }
                   }
                    break;

                case 4:
                    ImGui::Begin(iw.window_title, &globals.active, ImGuiWindowFlags_NoResize);
                    {
                        const char* Teemp2 = s2334.data();
                        ImGui::Text(Teemp2);
                        ImGui::Spacing();
                        if (ImGui::Button("Super Mode") == true) {
                            TickBest = 0.01;
                            s2334 = s234 + "Super Mode";
                        }
                        if (ImGui::Button("fast Mode") == true) {
                            TickBest = 6.2;
                            s2334 = s234 + "fast Mode";
                        }
                        if (ImGui::Button("Perfomance Mode (Perfect for playing without Lags)") == true) {
                            TickBest = 10;
                            s2334 = s234 + "Performance Mode";
                        }
                        if (ImGui::Button("Slow Mode (If your Pc is a Potato this Option is best for you)") == true) {
                            TickBest = 100;
                            s2334 = s234 + "Slow Mode";
                        }
                        ImGui::SliderFloat("Entity Loop speed", &EntityTime, 0.001f, 10.0f, 0, 0.1f);
                        if (ImGui::Button("Go Back") == true) {
                            Tabs = 1;
                        }
                        ImGui::Spacing();
                        ImGui::Checkbox("Turn off if you have Perfomance issues (Unlimited Nitro only works then)", &ActivityError);
                        ImGui::Spacing();
                        ImGui::Checkbox("Turn on Menu Checks (Improves perfomance but sometimes the check fails, if then go into ingame menu and fixed)", &MenuChecks);
                    }

                    break;
                default:
                    Tabs = 1;
                    goto norm;
                    ImGui::Begin(iw.window_title, &globals.active, iw.window_flags);
                    {
                        ImGui::Spacing();
                        ImGui::Text(" ");
                        if (ImGui::Button("Misc") == true) {
                            Tabs = 1;
                        }
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                        ImGui::Spacing();
                    }
                    ImGui::End();
                    break;
                }
            }
            if (GetAsyncKeyState(VK_F4) & 1)AutoStart = false;

            if (lastAddra12 == lastAddra1) {
                        ReadProcessMemory(hProcess, (BYTE*)Positionaddrx, &x16, sizeof(x16), 0);
                        ReadProcessMemory(hProcess, (BYTE*)Positionaddry, &y16, sizeof(y16), 0);
                        ReadProcessMemory(hProcess, (BYTE*)Positionaddrz, &z16, sizeof(z16), 0);
                        ReadProcessMemory(hProcess, (BYTE*)VelcPositionaddrx, &x161, sizeof(x161), 0);
                        ReadProcessMemory(hProcess, (BYTE*)VelcPositionaddrz, &z161, sizeof(z161), 0);
                        ReadProcessMemory(hProcess, (BYTE*)VelcPositionaddry, &y161, sizeof(y161), 0);
                        ReadProcessMemory(hProcess, (BYTE*)CarObjectx, &x1621, sizeof(x1621), 0);
                        ReadProcessMemory(hProcess, (BYTE*)CarObjecty, &y1621, sizeof(y1621), 0);
                        ReadProcessMemory(hProcess, (BYTE*)CarObjectz, &z1621, sizeof(z1621), 0);
                        ReadProcessMemory(hProcess, (BYTE*)RotationPositionaddrx, &x241, sizeof(x241), 0);
                        ReadProcessMemory(hProcess, (BYTE*)RotationPositionaddry, &y241, sizeof(y241), 0);
                        ReadProcessMemory(hProcess, (BYTE*)RotationPositionaddrz, &z241, sizeof(z241), 0);
                if (MainMenu == false) {
                    if (MenuSd == false) {
                        if (Standart1337Mode == false) {
                            for (Count232 = 0; Count232 < getEntityCount(); Count232++)
                            {
                                ReadProcessMemory(hProcess, (BYTE*)ToPoland[Count232].P1ositionaddrx, &ToPoland[Count232].x16, sizeof(ToPoland[Count232].x16), 0);
                                ReadProcessMemory(hProcess, (BYTE*)ToPoland[Count232].P1ositionaddry, &ToPoland[Count232].y16, sizeof(ToPoland[Count232].y16), 0);
                                ReadProcessMemory(hProcess, (BYTE*)ToPoland[Count232].P1ositionaddrz, &ToPoland[Count232].z16, sizeof(ToPoland[Count232].z16), 0);
                                ReadProcessMemory(hProcess, (BYTE*)ToPoland[Count232].V1elcPositionaddrx, &ToPoland[Count232].x161, sizeof(ToPoland[Count232].x161), 0);
                                ReadProcessMemory(hProcess, (BYTE*)ToPoland[Count232].V1elcPositionaddrz, &ToPoland[Count232].z161, sizeof(ToPoland[Count232].z161), 0);
                                ReadProcessMemory(hProcess, (BYTE*)ToPoland[Count232].V1elcPositionaddry, &ToPoland[Count232].y161, sizeof(ToPoland[Count232].y161), 0);
                                ReadProcessMemory(hProcess, (BYTE*)ToPoland[Count232].R1otationPositionaddrx, &ToPoland[Count232].x241, sizeof(ToPoland[Count232].x241), 0);
                                ReadProcessMemory(hProcess, (BYTE*)ToPoland[Count232].R1otationPositionaddry, &ToPoland[Count232].y241, sizeof(ToPoland[Count232].y241), 0);
                                ReadProcessMemory(hProcess, (BYTE*)ToPoland[Count232].R1otationPositionaddrz, &ToPoland[Count232].z241, sizeof(ToPoland[Count232].z241), 0);
                            }
                        }
                    }
                   
                }
            }
            //Checks if the Process is still Open

            InstantCock(x16, z16, Spawnpointx, SpawnPointz, Spawnpointy, Spawnini);

            TickFirst = GetTickCount64();
            if (TickFirst >= TickLast) {
                TickFirst = GetTickCount64();
                TickLast = TickFirst + 200;
                a3 = a3 + 0.1f;
                //Get Procid takes about 30% of the main power needst to be more optimised
                procID = GetProcId(L"Asphalt8.exe");
                if (procID == 0) {
                    Start_Cheat = false;
                    InitData = false;
                    LoopTp = false;
                    JumpCar = false;
                    GhostMode = false;
                    SlowFall = false;
                    FastFall = false;
                    LoopTpToNig = false;
                    FovChanger = false;
                    InitNitro = false;
                    DerefEntitys();
                    FreeEverything();
                    if (DebugMode == true) {
                        MessageBoxW(NULL, L"Process closed?", L"?????????", MB_OK | MB_SYSTEMMODAL);
                    }
                    goto stas;
                }

                ReadProcessMemory(hProcess, (BYTE*)PointerToCurrentLevel, &lastAddra1, sizeof(lastAddra1), 0);


                if (lastAddra1 != lastAddra12) {
                    uintptr_t Ptr23 = moduleBase + 0x1DB4398;
                        TickFirst5 = 0;
                        TickLast5 = 0;
                        LoopTp = false;
                        ReadProcessMemory(hProcess, (BYTE*)PointerToCurrentLevel, &lastAddra1, sizeof(&lastAddra1), 0);
                        LocalPlayerCar = FindDMAAddy(hProcess, PointerToCurrentLevel, ClassOfCarOffsets);
                        lastAddra12 = lastAddra1;
                        Positionaddrx = LocalPlayerCar + 0x50;
                        Positionaddrz = LocalPlayerCar + 0x54;
                        Positionaddry = LocalPlayerCar + 0x58;
                        VelcPositionaddrx = LocalPlayerCar + 0x160;
                        VelcPositionaddrz = LocalPlayerCar + 0x164;
                        VelcPositionaddry = LocalPlayerCar + 0x168;
                        RotationPositionaddrx = LocalPlayerCar + 0x20;
                        RotationPositionaddrz = LocalPlayerCar + 0x24;
                        RotationPositionaddry = LocalPlayerCar + 0x28;
                        ReadProcessMemory(hProcess, (BYTE*)AddrsOfCam, &CarObject, sizeof(&CarObject), 0);
                        CarObjectx = FindDMAAddy(hProcess, AddrsOfCam, Offsets22);
                        CarObjectz = CarObjectx + 0x4;
                        CarObjecty = CarObjectx + 0x8;
                        CurrentEntityfollow = 0;
                            AutoWin = false;
                            Fov1 = 499.0f;
                        if (Standart1337Mode == false) {
                            Spawnini = false;
                            ffs = true;
                            DerefEntitys();
                            EntityLis2t();
                        }    
                        if (DebugMode == true) {
                            std::cout << "[DEBUG] " << std::hex << Spawnini << " 2 Has been set to false  \n";
                            std::cout << "[DEBUG] Level has been changed \n";
                            std::cout << "[DEBUG] LocalPlayer Address -> 0x" << std::hex << LocalPlayer << "\n";
                        }
                }
                else
                {
                    ReadProcessMemory(hProcess, (BYTE*)LocalPlayer, &LocalPlayer1, sizeof(LocalPlayer1), 0);
                    if (LocalPlayer1 != LocalPlayer2) {
                        TickFirst4 = 0;
                        TickLast4 = 0;
                        ReadProcessMemory(hProcess, (BYTE*)PointerToCurrentLevel, &lastAddra1, sizeof(&lastAddra1), 0);
                        LocalPlayerCar = FindDMAAddy(hProcess, PointerToCurrentLevel, ClassOfCarOffsets);
                        LocalPlayer2 = LocalPlayer1;
                        Positionaddrx = LocalPlayerCar + 0x50;
                        Positionaddrz = LocalPlayerCar + 0x54;
                        Positionaddry = LocalPlayerCar + 0x58;
                        VelcPositionaddrx = LocalPlayerCar + 0x160;
                        VelcPositionaddrz = LocalPlayerCar + 0x164;
                        VelcPositionaddry = LocalPlayerCar + 0x168;
                        RotationPositionaddrx = LocalPlayerCar + 0x20;
                        RotationPositionaddrz = LocalPlayerCar + 0x24;
                        RotationPositionaddry = LocalPlayerCar + 0x28;
                        ReadProcessMemory(hProcess, (BYTE*)AddrsOfCam, &CarObject, sizeof(&CarObject), 0);
                        CarObjectx = FindDMAAddy(hProcess, AddrsOfCam, Offsets22);
                        CarObjectz = CarObjectx + 0x4;
                        CarObjecty = CarObjectx + 0x8;
                        CurrentEntityfollow = 0;
                        LoopTp = false;
                        AutoWin = false;
                        Fov1 = 499.0f;
                        if (Standart1337Mode == false) {
                            ffs = true;
                            Spawnini = false;
                            DerefEntitys();
                            EntityLis2t();
                        }
                        if (DebugMode == true) {
                            std::cout << "[DEBUG] " << std::hex << Spawnini << " 1 Has been set to false  \n";
                            std::cout << "[DEBUG] Level has been restarted \n";
                            std::cout << "[DEBUG] LocalPlayer Address -> 0x" << std::hex << LocalPlayer << "\n";
                        }
                    }
                }
                MenuTextAddress = FindDMAAddy(hProcess, tmp22, OffMenu);
                if (SpotifyMode == true) {
                    GetCurrentSong();
                }
            }

            if (MenuChecks == true)
            {
                if (MenuTextAddress < 0x01000000 || MenuTextAddress > 0x71000000000) { MenuSd = false; }
                else { MenuSd = true; }
                if (CarObject < 0x01000000 || CarObject > 0x71000000000) {
                    MainMenu = true;
                }

                else
                {
                    MainMenu = false;
                }
            }
            else
            {
                if (MenuSd == true|| MainMenu == true)
                {
                    MenuSd = false;
                    MainMenu = false;
                }
            }

              

            if (ffs == true) {
                if (TickFirst4 == 0) {
                    TickFirst4 = GetTickCount64();
                    TickLast4 = TickFirst4 + 3000;
                }
                TickFirst4 = GetTickCount64();
                if (TickFirst4 >= TickLast4 && x16 != 0.0f && z16 != 0.0f) {
                    TickFirst4 = 0;
                    TickLast4 = 0;
                    rotx = x241;
                    roty = y241;
                    rotz = z241;
                    Spawnpointx = x16;
                    SpawnPointz = z16;
                    Spawnpointy = y16 + 2.0f;
                    if (FovChanger == true)
                    {
                        for (size_t i = 0; i < 20; i++)
                        {

                            Camera2 = 0x10 * i;
                            Camera2 = Camera2 + 0x8;
                            CameraObject = { 0x60, 0x100, Camera2 , 0x220,0x50 };
                            CurrentCamera = FindDMAAddy(hProcess, AddrsOfCam, CameraObject);
                            if (CurrentCamera == 0)
                            {
                                continue;
                            }
                            float FovT = Fov / 100;
                            WriteProcessMemory(hProcess, (BYTE*)CurrentCamera, &FovT, sizeof(FovT), 0);
                        }
                    }
                    Spawnini = true;
                    ffs = false;

                }
            }



            TickFirst24 = GetTickCount64();
            if (TickFirst24 >= TickLast24) {
                TickLast2 = TickFirst2 + 6000;
                ReadProcessMemory(hProcess, (BYTE*)PointerToCurrentLevel, &lastAddra1, sizeof(&lastAddra1), 0);
                LocalPlayerCar = FindDMAAddy(hProcess, PointerToCurrentLevel, ClassOfCarOffsets);
                LocalPlayer2 = LocalPlayer1;
                Positionaddrx = LocalPlayerCar + 0x50;
                Positionaddrz = LocalPlayerCar + 0x54;
                Positionaddry = LocalPlayerCar + 0x58;
                VelcPositionaddrx = LocalPlayerCar + 0x160;
                VelcPositionaddrz = LocalPlayerCar + 0x164;
                VelcPositionaddry = LocalPlayerCar + 0x168;
                RotationPositionaddrx = LocalPlayerCar + 0x20;
                RotationPositionaddrz = LocalPlayerCar + 0x24;
                RotationPositionaddry = LocalPlayerCar + 0x28;
                ReadProcessMemory(hProcess, (BYTE*)AddrsOfCam, &CarObject, sizeof(&CarObject), 0);
                CarObjectx = FindDMAAddy(hProcess, AddrsOfCam, Offsets22);
                CarObjectz = CarObjectx + 0x4;
                CarObjecty = CarObjectx + 0x8;
                ReadProcessMemory(hProcess, (BYTE*)AddrsOfCam, &CarObject, sizeof(&CarObject), 0);
                CarObjectx = FindDMAAddy(hProcess, AddrsOfCam, Offsets22);
                CarObjectz = CarObjectx + 0x4;
                CarObjecty = CarObjectx + 0x8;
                if (Standart1337Mode == false && MenuSd == false) {
                    DerefEntitys();
                    EntityLis2t();
                }
            }




            if (RainbowMode == true) {
                TickFirst42 = GetTickCount64();
                if (TickFirst42 >= TickLast42 && SpotifyMode == true) {
                    TickLast42 = TickFirst42 + 10;

                    if (a3 > 1.0f)a3 = 0.05f;

                    if (a4 > 1.0f)a4 = 0.08f;

                    if (a5 > 1.0f)a5 = 0.09f;

                    a3 = a3 + 0.06f;
                    a4 = a4 + 0.02f;
                    a5 = a5 + 0.04f;
                    Gucci = { a3, a4, a5, a6 };
                }
            }



            TickFirst2 = GetTickCount64();
            if (TickFirst2 >= TickLast2) {
                if (MenuSd == false) {
                    TickLast2 = TickFirst2 + 200;
                    /*ReadProcessMemory(hProcess, (BYTE*)PointerToCurrentLevel, &lastAddra1, sizeof(&lastAddra1), 0);
                    LocalPlayerCar = FindDMAAddy(hProcess, PointerToCurrentLevel, ClassOfCarOffsets);
                    Positionaddrx = LocalPlayerCar + 0x50;
                    Positionaddrz = LocalPlayerCar + 0x54;
                    Positionaddry = LocalPlayerCar + 0x58;
                    VelcPositionaddrx = LocalPlayerCar + 0x160;
                    VelcPositionaddrz = LocalPlayerCar + 0x164;
                    VelcPositionaddry = LocalPlayerCar + 0x168;
                    ReadProcessMemory(hProcess, (BYTE*)AddrsOfCam, &CarObject, sizeof(&CarObject), 0);
                    CarObjectx = FindDMAAddy(hProcess, AddrsOfCam, Offsets22);
                    CarObjectz = CarObjectx + 0x4;
                    CarObjecty = CarObjectx + 0x8;
                    RotationPositionaddrx = LocalPlayerCar + 0x20;
                    RotationPositionaddrz = LocalPlayerCar + 0x24;
                    RotationPositionaddry = LocalPlayerCar + 0x28;
                    */
                    EntityLis2t();
                    getEntityCount();
                }
            }
            



            /*Asphalt8_x64.exe + 11B5F9F - 41 56 - push r14
            Asphalt8_x64.exe + 11B5FA1 - 41 5E - pop r14
                Asphalt8_x64.exe + 11B5FA3 - C3 - ret
                */



            if (MainMenu == false && MenuSd == false) {
                //Infinite Nitro Part 
                if (InfiniteNitro == true) {
                    if (InitNitro == false) {
                        int DSDsdsd = 1099993232;
                        WriteProcessMemory(hProcess, (BYTE*)NitroAddress, &DSDsdsd, sizeof(DSDsdsd), 0);
                        InitNitro = true;
                        DSDsdsd = NULL;
                    }
                }
                else
                {
                    if (InitNitro == true) {
                        InitNitro = false;
                        int DSDsdsd = 1090554177;
                        WriteProcessMemory(hProcess, (BYTE*)NitroAddress, &DSDsdsd, sizeof(DSDsdsd), 0);
                        DSDsdsd = NULL;
                    }
                }

                if (Flipini == true) {
                    //float xj, yj, zj;xj x1y
                    if (CurrentEntityfollow != 0 && x3y != 0.0f && y3y != 0.0f && z3y != 0.0f) {//&& CurrentEntityfollow != LocalPlayer && CurrentEntityfollow != CarObject) {
                        float i2, i3, i4;
                        ReadProcessMemory(hProcess, (BYTE*)CurrentEntityfollow + 0x50, &xßl, sizeof(xßl), 0);
                        ReadProcessMemory(hProcess, (BYTE*)CurrentEntityfollow + 0x54, &zßl, sizeof(zßl), 0);
                        ReadProcessMemory(hProcess, (BYTE*)CurrentEntityfollow + 0x58, &yßl, sizeof(yßl), 0);
                        x3y = xßl;
                        y3y = yßl - 0.5f;
                        z3y = zßl;
                        WriteProcessMemory(hProcess, (BYTE*)Positionaddrx, &x3y, sizeof(x3y), 0);
                        WriteProcessMemory(hProcess, (BYTE*)Positionaddry, &y3y, sizeof(y3y), 0);
                        WriteProcessMemory(hProcess, (BYTE*)Positionaddrz, &z3y, sizeof(z3y), 0);
                        CurrentEntityfollow = 0;
                        TickFirs1t2 = GetTickCount64();
                        if (TickFirs1t2 == 0) {
                        lf:
                            TickFirs1t2 = GetTickCount64();
                            TickLas1t2 = TickFirs1t2 + 900;
                        }

                        if (TickFirs1t2 >= TickLas1t2) {
                            if (fdf == false) {
                                float l = 50000.0f;
                                WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddry, &l, sizeof(y1y), 0);
                                fdf = true;
                                goto lf;
                            }
                            else
                            {
                                WriteProcessMemory(hProcess, (BYTE*)Positionaddrx, &xj, sizeof(xj), 0);
                                WriteProcessMemory(hProcess, (BYTE*)Positionaddry, &yj, sizeof(yj), 0);
                                WriteProcessMemory(hProcess, (BYTE*)Positionaddrz, &zj, sizeof(zj), 0);
                                TickFirs1t2 = 0;
                                TickLas1t2 = 0;
                                fdf = false;
                                Flipini = false;
                            }
                        }
                    }
                    Flipini = false;

                }

                if (LoopTpEvery == true) {
                    if (getEntityCount() != 1 || getEntityCount() != 0)
                    {
                        float yp = y16 + 4.9f;
                        float lp = 0.0f;
                        for (size_t i = 0; i < getEntityCount(); i++)
                        {
                            if (L12ocalPlayerCar == LocalPlayer || CarObject == LocalPlayer)continue;
                            if (ToPoland[i].x16 != 0) {
                                /*
                                ToPoland[i1].P1ositionaddrx = ToPoland[i1].L1ocalPlayer + 0x50;
                                ToPoland[i1].P1ositionaddrz = ToPoland[i1].L1ocalPlayer + 0x54;
                                ToPoland[i1].P1ositionaddry = ToPoland[i1].L1ocalPlayer + 0x58;
                                ToPoland[i1].V1elcPositionaddrx = ToPoland[i1].L1ocalPlayer + 0x160;
                                ToPoland[i1].V1elcPositionaddrz = ToPoland[i1].L1ocalPlayer + 0x164;
                                ToPoland[i1].V1elcPositionaddry = ToPoland[i1].L1ocalPlayer + 0x168;
                                ToPoland[i1].R1otationPositionaddrx = ToPoland[i1].L1ocalPlayer + 0x20;
                                ToPoland[i1].R1otationPositionaddrz = ToPoland[i1].L1ocalPlayer + 0x24;
                                ToPoland[i1].R1otationPositionaddry = ToPoland[i1].L1ocalPlayer + 0x28;
                                */
                                WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].P1ositionaddrx, &x16, sizeof(x16), 0);
                                WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].P1ositionaddry, &yp, sizeof(yp), 0);
                                WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].P1ositionaddrz, &z16, sizeof(z16), 0);
                                WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].V1elcPositionaddrx, &x161, sizeof(x161), 0);
                                WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].V1elcPositionaddrz, &z161, sizeof(z161), 0);
                                WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].V1elcPositionaddry, &y161, sizeof(y161), 0);
                                WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].R1otationPositionaddrx, &x21, sizeof(x21), 0);
                                WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].R1otationPositionaddrz, &z21, sizeof(z21), 0);
                                WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].R1otationPositionaddry, &y21, sizeof(y21), 0);
                                //rotation y21
                            }

                        }
                        yp = NULL;
                    }
                }

                if (ActivityError == true) {
                    if (IsInAir == false) {
                        if (y161 > 3.0f) {
                            IsInAir == true;
                        }
                    }

                    if (IsInAir == true) {
                        if (y161 <= 2.40f) {
                            IsInAir == true;
                        }
                    }

                    if (SlowFall == true) {
                        if (FastFall == true)FastFall = false;
                        if (y161 <= -7.0f) {
                            y161 = y161 + 1.04f;
                            WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddry, &y161, sizeof(y161), 0);
                        }
                    }

                    if (InstantStop == true) {
                        if (GetAsyncKeyState(83) & 1) {

                            x161 = -0.004f;
                            WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddrx, &x161, sizeof(x161), 0);
                            z161 = -0.004f;
                            WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddrz, &z161, sizeof(z161), 0);
                        }
                    }


                    if (FastFall == true) {
                        if (SlowFall == true)SlowFall = false;
                        if (y161 <= -7.0f) {
                            y161 = y161 - 0.08f;
                            WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddry, &y161, sizeof(y161), 0);
                        }
                    }


                    if (LoopTp == true) {
                        for (size_t i = 0; i < getEntityCount(); i++)
                        {
                            ToPoland[i].x161 = 0.0001f;
                            ToPoland[i].y161 = 0.0001f;
                            ToPoland[i].z161 = 0.0001f;
                            if (CarObjectx == ToPoland[i].V1elcPositionaddrx && CarObjecty == ToPoland[i].V1elcPositionaddry && CarObjectz == ToPoland[i].V1elcPositionaddrz) {
                                continue;
                            }
                            if (VelcPositionaddrx == ToPoland[i].V1elcPositionaddrx && VelcPositionaddry == ToPoland[i].V1elcPositionaddry && VelcPositionaddrz == ToPoland[i].V1elcPositionaddrz) {
                                continue;
                            }
                            WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].V1elcPositionaddrx, &ToPoland[i].x161, sizeof(ToPoland[i].x161), 0);
                            WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].V1elcPositionaddrz, &ToPoland[i].z161, sizeof(ToPoland[i].z161), 0);
                            WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].V1elcPositionaddry, &ToPoland[i].y161, sizeof(ToPoland[i].y161), 0);
                        }
                    }

                    if (JumpCar == true) {
                        if (IsInAir != true) {
                            if (GetAsyncKeyState(VK_SPACE)) {
                                y16 = y16 + 2.0f;
                                WriteProcessMemory(hProcess, (BYTE*)Positionaddry, &y16, sizeof(&y16), 0);
                            }
                        }
                    }

                    if (LoopTpToNig == true) {
                        float xs = ToPoland[i22].y16 + 5.0f;
                        if (ToPoland[i22].x16 != 0) {
                            WriteProcessMemory(hProcess, (BYTE*)Positionaddrx, &ToPoland[i22].x16, sizeof(ToPoland[i22].x16), 0);
                            WriteProcessMemory(hProcess, (BYTE*)Positionaddry, &ToPoland[i22].y16, sizeof(ToPoland[i22].y16), 0);
                            WriteProcessMemory(hProcess, (BYTE*)Positionaddrz, &ToPoland[i22].z16, sizeof(ToPoland[i22].z16), 0);
                            WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddrx, &ToPoland[i22].x161, sizeof(ToPoland[i22].x161), 0);
                            WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddrz, &ToPoland[i22].z161, sizeof(ToPoland[i22].z161), 0);
                            WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddry, &ToPoland[i22].y161, sizeof(ToPoland[i22].y161), 0);//, 0) == false)EntityLis2t();
                            WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddrx, &ToPoland[i22].x241, sizeof(ToPoland[i22].x241), 0);
                            WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddry, &ToPoland[i22].y241, sizeof(ToPoland[i22].y241), 0);
                            WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddrz, &ToPoland[i22].z241, sizeof(ToPoland[i22].z241), 0);
                        }
                    }

                    if (CopyOthers == true) {
                        CopyEntitys();
                    }

                    if (GhostMode == true) {
                        if (GetAsyncKeyState(79) & 1) {
                            ReadProcessMemory(hProcess, (BYTE*)Positionaddrx, &x16, sizeof(x16), 0);
                            ReadProcessMemory(hProcess, (BYTE*)Positionaddry, &y16, sizeof(y16), 0);
                            ReadProcessMemory(hProcess, (BYTE*)Positionaddrz, &z16, sizeof(z16), 0);
                            x14 = x16;
                            z14 = z16;
                            y14 = y16;
                        }
                        if (GetAsyncKeyState(75) & 1) {
                            WriteProcessMemory(hProcess, (BYTE*)Positionaddrx, &x14, sizeof(x14), 0);
                            WriteProcessMemory(hProcess, (BYTE*)Positionaddry, &y14, sizeof(y14), 0);
                            WriteProcessMemory(hProcess, (BYTE*)Positionaddrz, &z14, sizeof(z14), 0);
                            x161 = 0.2f;
                            y161 = -0.3111175112629f;
                            z161 = 0.3333274424;
                            WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddrx, &x161, sizeof(x161), 0);
                            WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddrz, &z161, sizeof(z161), 0);
                            WriteProcessMemory(hProcess, (BYTE*)VelcPositionaddry, &y161, sizeof(y161), 0);
                            WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddrx, &x21, sizeof(x21), 0);
                            WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddry, &y21, sizeof(y21), 0);
                            WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddrz, &z21, sizeof(z21), 0);
                        }

                        if (GetAsyncKeyState(76) & 1) {
                            if (GhostInit == false) {
                                x16 = x24;
                                y16 = y24;
                                z16 = z24;
                                int Valc;
                                Valc = 2341507216;
                                Point22 = moduleBase + 0x15B8242;
                                WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                Valc = 2341507216;
                                Point22 = moduleBase + 0x15B8248;
                                WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                Valc = 1099993232;
                                Point22 = moduleBase + 0x15B824E;
                                WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                WriteProcessMemory(hProcess, (BYTE*)CarObjectx, &x14, sizeof(x14), 0);
                                WriteProcessMemory(hProcess, (BYTE*)CarObjecty, &y14, sizeof(y14), 0);
                                WriteProcessMemory(hProcess, (BYTE*)CarObjectz, &z14, sizeof(z14), 0);
                                Point22 = moduleBase + 0x16BFBCE;
                                Valc = 2425393296;
                                WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);

                                Valc = NULL;
                                Point22 = NULL;
                                GhostInit = true;

                            }
                            else
                            {
                                int Valc;
                                Valc = 2337292681;
                                Point22 = moduleBase + 0x15B8242;
                                WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                Valc = 2337554825;
                                Point22 = moduleBase + 0x15B8248;
                                WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                Valc = 1096302985;
                                Point22 = moduleBase + 0x15B824E;
                                WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                WriteProcessMemory(hProcess, (BYTE*)CarObjectx, &x14, sizeof(x14), 0);
                                WriteProcessMemory(hProcess, (BYTE*)CarObjecty, &y14, sizeof(y14), 0);
                                WriteProcessMemory(hProcess, (BYTE*)CarObjectz, &z14, sizeof(z14), 0);
                                Point22 = moduleBase + 0x16BFBCE;
                                Valc = 541135119;
                                WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                Valc = NULL;
                                Point22 = NULL;
                                GhostInit = false;
                            }
                        }

                        /*  if (GhostInit == true) {
                              int Valc;
                              Valc = 2337292681;
                              Point22 = moduleBase + 0x11B5A72;
                              WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(&Valc), 0);
                              Valc = 2341507216;
                              Point22 = moduleBase + 0x11B5A78;
                              WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(&Valc), 0);
                              Valc = 1099993232;
                              Point22 = moduleBase + 0x11B5A7E;
                              WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(&Valc), 0);
                              GhostInit = false;
                          }


                          if (GhostDet == true) {
                                  int Valc;
                                  Valc = 2341507216;
                                  Point22 = moduleBase + 0x11B5A72;
                                  WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(&Valc), 0);
                                  Valc = 2337554825;
                                  Point22 = moduleBase + 0x11B5A78;
                                  WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(&Valc), 0);
                                  Valc = 1096302985;
                                  Point22 = moduleBase + 0x11B5A7E;
                                  WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(&Valc), 0);
                                  GhostDet = false;
                          }
                          */
                    }

                    if (NoTpBack == true) {
                        if (NoTpBackini == false) {
                            uintptr_t tm2p;
                            int DSDsdsd1;
                            tm2p = moduleBase + 0x15B88B0;
                            DSDsdsd1 = 2425393296;
                            WriteProcessMemory(hProcess, (BYTE*)tm2p, &DSDsdsd1, sizeof(DSDsdsd1), 0);
                            tm2p = moduleBase + 0x15B88B7;
                            DSDsdsd1 = 2425393296;
                            WriteProcessMemory(hProcess, (BYTE*)tm2p, &DSDsdsd1, sizeof(DSDsdsd1), 0);
                            NoTpBackini = true;
                            tm2p = NULL;
                            DSDsdsd1 = NULL;
                        }
                    }
                    else
                    {
                        if (NoTpBackini == true) {
                            NoTpBackini = false;
                            uintptr_t tm2p;
                            int DSDsdsd1;
                            tm2p = moduleBase + 0x15B88B7;
                            DSDsdsd1 = 541069583;
                            WriteProcessMemory(hProcess, (BYTE*)tm2p, &DSDsdsd1, sizeof(DSDsdsd1), 0);
                            tm2p = moduleBase + 0x15B88B0;
                            DSDsdsd1 = 1349521679;
                            WriteProcessMemory(hProcess, (BYTE*)tm2p, &DSDsdsd1, sizeof(DSDsdsd1), 0);
                            tm2p = NULL;
                            DSDsdsd1 = NULL;
                        }
                    }

                    if (FlyHac2k == true)
                    {

                        /*ReadProcessMemory(hProcess, (BYTE*)Positionaddrx, &x16, sizeof(x16), 0);
                        ReadProcessMemory(hProcess, (BYTE*)Positionaddry, &y16, sizeof(y16), 0);
                        ReadProcessMemory(hProcess, (BYTE*)Positionaddrz, &z16, sizeof(z16), 0);
                        ReadProcessMemory(hProcess, (BYTE*)VelcPositionaddrx, &x161, sizeof(x161), 0);
                        ReadProcessMemory(hProcess, (BYTE*)VelcPositionaddrz, &z161, sizeof(z161), 0);
                        ReadProcessMemory(hProcess, (BYTE*)VelcPositionaddry, &y161, sizeof(y161), 0);
                        ReadProcessMemory(hProcess, (BYTE*)CarObjectx, &x1621, sizeof(x1621), 0);
                        ReadProcessMemory(hProcess, (BYTE*)CarObjecty, &y1621, sizeof(y1621), 0);
                        ReadProcessMemory(hProcess, (BYTE*)CarObjectz, &z1621, sizeof(z1621), 0);
                        ReadProcessMemory(hProcess, (BYTE*)RotationPositionaddrx, &x241, sizeof(x241), 0);
                        ReadProcessMemory(hProcess, (BYTE*)RotationPositionaddry, &y241, sizeof(y241), 0);
                        ReadProcessMemory(hProcess, (BYTE*)RotationPositionaddrz, &z241, sizeof(z241), 0);
                if (MainMenu == false) {
                */
                        FlyHack(x241, y241, z241, x16, z16, y16);
                    }

                    if (InfiniteNitro1 == true) {
                        if (InitNitro1 == false) {
                            int DSDsdsd = 1150324880;
                            WriteProcessMemory(hProcess, (BYTE*)Nitro1Address, &DSDsdsd, sizeof(DSDsdsd), 0);
                            InitNitro1 = true;
                            DSDsdsd = NULL;
                        }
                    }
                    else
                    {
                        if (InitNitro1 == true) {
                            InitNitro1 = false;
                            int DSDsdsd = 1153512257;
                            WriteProcessMemory(hProcess, (BYTE*)Nitro1Address, &DSDsdsd, sizeof(DSDsdsd), 0);
                            DSDsdsd = NULL;
                        }
                    }
                }
            }
            

            
        }
        Sleep(TickBest);
    }
    else
    {
    if (MessageBoxW(NULL, L"Are you sure you want to close da hacckk?", L"?????????", MB_YESNO | MB_SYSTEMMODAL) == 7) {
        globals.active = true;
        if (Start_Cheat == false)goto stas;
        else
        {
            goto norm;
        }
    }
        exit(0);
    }



}
