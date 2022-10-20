#include "ImGui/ImGui.h"
#include "ImGui/imgui_impl_dx9.h"
#include "ImGui/imgui_impl_win32.h"

#include "menu.h"
#include "globals.h"

#include <fstream>
#include <string>
#include <iostream>
#include "../../../../borderless-imgui-window-main/borderless-imgui-window-main/icl.h"

int TickFirst;
int TickLast;

int TickFirst1;
int TickLast1;
int i22;

int TickFirst2;
int TickLast2;
int Count232;

class initWindow {
public:
    const char* window_title = "Asphalt8 Cheeto";
    ImVec2 window_size{ 600, 600 };
    
    DWORD window_flags = ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoBringToFrontOnFocus;
} iw;


unsigned int Dsd;


std::vector<unsigned int>ClassOfCarOffsets = { 0x10, 0x10, 0x568, 0x8, 0x10, 0x70, 0x0 };
std::vector<unsigned int>OffsetsOfOffset12 = { 0x10, 0x10, 0x568 };
std::vector<unsigned int>Offsets22 = { 0x60, 0x100, 0x48, 0x558, 0x18, 0x50 };
std::vector<unsigned int>CredsOfs = { 0x8, 0x28, 0x148, 0x28, 0x18, 0x78, 0x618 };
std::vector<unsigned int>EntityList = { 0x20, 0x78, 0x20,Dsd , 0x490, 0x0 };
std::vector<unsigned int>EntityList20 = { 0x20, 0x78, 0x20 , 0x8 , 0x490, 0x0 };



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


HANDLE Cs = NULL;
HANDLE hProcess = 0;


LPCWSTR Box;
LPCWSTR ses23232;
//auto draw = ImGui::GetBackgroundDrawList();

uintptr_t CreditAddress;
uintptr_t CreditAddress2;
uintptr_t LocalPlayer;
uintptr_t LocalPlayer2;
uintptr_t LocalPlayer1;
uintptr_t NitroAddress;
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
uintptr_t L12ocalPlayerCar;


DWORD procID;
DWORD DNWWER, DNWWER1;
DWORD procID2;

int BorrowedVal;
int Entity2s;
int Tabs;
int Tab;
int PunjabiNoVirus = 120;

bool Start_Cheat = false;
bool InitData = false;
bool InitTick = false;
bool MenuHidden = false;
bool vMode = false;
bool InfiniteNitro = false;
bool JumpCar = false;
bool InstantStop = false;
bool InfiniteNitro1 = false;
bool SlowFall = false;
bool FastFall = false;
bool InitNitro = false;
bool GhostMode = false;
bool GhostInit = false;
bool GhostDet = false;
bool InitNitro1 = false;
bool IsInAir = false;
bool LoopTp = false;
bool LoopTpToNig = false;
bool AutoRefreshEntities = false;

float x16, y16, z16;
float x14, y14, z14;
float x24, y24, z24;
float x241, y241, z241;
float x21, y21, z21;
float x161, y161, z161;
float x1621, y1621, z1621;
float x27, y27, z27;
float x217, y217, z217;
float vx217, vy217, vz217;

const int Balls = 0x8;
int StandartCarVal;


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

void EntityLis2t() {

    int Temp212;
    Dsd = 0x8;
    EntityList = { 0x20, 0x78, 0x20 , Dsd , 0x490, 0x0 };
    EntityList20 = { 0x20, 0x78, 0x20 , 0x8 , 0x490, 0x0 }; 

    uintptr_t Ptr23 = moduleBase + 0x1DB4398;
    L12ocalPlayerCar = FindDMAAddy(hProcess, Ptr23, EntityList);
    ReadProcessMemory(hProcess, (BYTE*)L12ocalPlayerCar, &StandartCarVal, sizeof(StandartCarVal), 0);
    for (size_t i1 = 0; i1 < PunjabiNoVirus; i1++)
    {
        Balls:
        ToPoland[i1].L1ocalPlayer = FindDMAAddy(hProcess, Ptr23, EntityList);

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
}

void VMode() {

}

void getEntityCount() {
    Entity2s = 0;
    for (size_t i = 0; i < 120; i++)
    {
        if (ToPoland[i].LocalPlayer == true) {
            continue;
        }

        if (ToPoland[i].Entity23234 == true) {
            Entity2s = Entity2s + 1;
        }
    }
}


void menu::render()
{
    //If Insert pressed menu isnt rendering
    if (GetAsyncKeyState(VK_INSERT) & 1) {
        MenuHidden = !MenuHidden;
    }

    if (globals.active)
    {
    stas:
        ImGui::SetNextWindowSize(iw.window_size);
        ImGui::SetNextWindowBgAlpha(1.0f);
        if (Start_Cheat == false) {
            //If Insert pressed menu isnt rendering
            if (InitTick == false) {
                TickFirst1 = GetTickCount64();
                TickLast1 = TickFirst1 + 500;
                InitTick = true;
            }

            TickFirst1 = GetTickCount64();
            if (TickFirst1 >= TickLast1) {
                TickFirst1 = GetTickCount64();
                TickLast1 = TickFirst1 + 500;
                procID = GetProcId(L"Asphalt8_x64.exe");
                if (procID != 0)Start_Cheat = true;
            }

            if (MenuHidden == false) {
                ImGui::Begin(iw.window_title, &globals.active, iw.window_flags);
                {
                    ImGui::StyleColorsLight();
                    ImGui::Spacing();
                    ImGui::Spacing();
                    ImGui::Spacing();
                    ImGui::Spacing();
                    ImGui::Spacing();
                    ImGui::Spacing();
                    ImGui::Text("Waiting for the Process");
                }
                ImGui::End();

            }

        }
        else
        {
            if (InitData == false) {
                //Gets Process id and modulebase and so on
                procID = GetProcId(L"Asphalt8_x64.exe");
                if (procID == 0) {
                    Start_Cheat = false;
                    MessageBoxW(NULL, L"Process not Found make sure Asphalt8 is open", L"?????????", MB_OK | MB_SYSTEMMODAL);
                    goto stas;
                }
                hProcess = 0;
                hProcess = OpenProcess(PROCESS_ALL_ACCESS, 0, procID);
                moduleBase = GetModuleBaseAddress(procID, L"Asphalt8_x64.exe");
                procID2 = GetProcId(L"simple-clicker.exe");
                std::cout << "Hello\n";
                if (moduleBase == 0) {
                    MessageBoxW(NULL, L"Couldnt Open Asphalt 8 (Not Enough Rights?)", L"?????????", MB_OK | MB_SYSTEMMODAL);
                }
                NitroAddress = moduleBase + 0x5987B4; //0x6C5874;
                Nitro1Address = moduleBase + 0x5987DA; //0x6C589A;
                PointerToCurrentLevel = moduleBase + 0x1DB42C0;
                ReadProcessMemory(hProcess, (BYTE*)PointerToCurrentLevel, &lastAddra1, sizeof(lastAddra1), 0);
                lastAddra12 = lastAddra1;
                LocalPlayerCar = FindDMAAddy(hProcess, PointerToCurrentLevel, ClassOfCarOffsets);
                LocalPlayer = FindDMAAddy(hProcess, PointerToCurrentLevel, OffsetsOfOffset12);
                ReadProcessMemory(hProcess, (BYTE*)LocalPlayer, &LocalPlayer1, sizeof(LocalPlayer1), 0);
                Dsd = Balls;
                LocalPlayer2 = LocalPlayer1;
                Positionaddrx = LocalPlayerCar + 0x50;
                Positionaddrz = LocalPlayerCar + 0x54;
                Positionaddry = LocalPlayerCar + 0x58;
                VelcPositionaddrx = LocalPlayerCar + 0x160;
                VelcPositionaddrz = LocalPlayerCar + 0x164;
                VelcPositionaddry = LocalPlayerCar + 0x168;
                AddrsOfCam = moduleBase + 0x01DB4848;
                ReadProcessMemory(hProcess, (BYTE*)AddrsOfCam, &CarObject, sizeof(CarObject), 0);
                CarObjectx = FindDMAAddy(hProcess, AddrsOfCam, Offsets22);
                CarObjectz = CarObjectx + 0x4;
                CarObjecty = CarObjectx + 0x8;
                CredsBase = moduleBase + 0x01DB4280;
                CreditAddress2 = FindDMAAddy(hProcess, CredsBase, CredsOfs);
                InitData = true;
                TickFirst = GetTickCount64();
                TickLast = TickFirst + 200;
                TickFirst2 = GetTickCount64();
                EntityLis2t();
                TickLast2 = TickFirst2 + 200;
                getEntityCount();
            }



            //If Insert pressed menu isnt rendering
            if (MenuHidden == false) {
                norm:
                switch (Tabs)
                {

                case 1:
                    ImGui::Begin(iw.window_title, &globals.active, iw.window_flags);
                    {
                        std::string lol12 = "Entities being rendered: " + std::to_string(Entity2s);
                        const char* SafePunjabi = lol12.data();

                        std::string lol1122 = "lcp Pos: x: " + std::to_string(x16) + " , y: " + std::to_string(y16) + " , z: " + std::to_string(z16);
                        const char* SafePunja1bi = lol1122.data();
                        ImGui::Text(SafePunjabi);
                            ImGui::Spacing();
                            ImGui::Text(SafePunja1bi);
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
                            ImGui::Checkbox("Stop Everyone", &LoopTp);
                            ImGui::Spacing();
                            if(ImGui::Button("Random Ammount of Creds") == true){
                            int TempVal;
                            ReadProcessMemory(hProcess, (BYTE*)CreditAddress2, &TempVal, sizeof(TempVal), 0);
                            TempVal = TempVal - 1000;
                            if (WriteProcessMemory(hProcess, (BYTE*)CreditAddress2, &TempVal, sizeof(TempVal), 0) == false) {
                                MessageBox(NULL, L"Couldnt write", L"?????????", MB_OK | MB_SYSTEMMODAL);
                             }
                            }


                            if (ImGui::Button("Teleport all to you") == true) {
                                for (size_t i = 0; i < Entity2s; i++)
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
                                }
                            }

                            if (ImGui::Button("Teleport all to Void lmao") == true) {
                                for (size_t i = 0; i < Entity2s; i++)
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
                                EntityLis2t();
                            };

                            ImGui::Spacing();
                            if (ImGui::Button("Teleport to Entities") == true) {
                                Tabs = 2;
                            }
                    }
                    ImGui::End();
                    break;


                case 2:
                    ImGui::Begin(iw.window_title, &globals.active, ImGuiWindowFlags_NoResize);
                    {
                        for (size_t i = 0; i < Entity2s; i++)
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
                        ImGui::Text(SafePunja1bi);
                        ImGui::Checkbox("Loop tp to Entity (click on the Entities to loop tp)", &LoopTpToNig);
                        ImGui::Checkbox("VMode (Activate if you cant tp around)", &vMode);

                        if (ImGui::Button("Go Back") == true) {
                            Tabs = 1;
                        }
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
                for (Count232 = 0; Count232 < Entity2s; Count232++)
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
                if (vMode == true) {

                }
            }

            //Checks if the Process is still Open
            TickFirst = GetTickCount64();
            if (TickFirst >= TickLast) {
                TickFirst = GetTickCount64();
                TickLast = TickFirst + 200;
                procID = GetProcId(L"Asphalt8_x64.exe");
                if (procID == 0) {
                    Start_Cheat = false;
                    InitData = false;
                    LoopTp = false;
                    JumpCar = false;
                    GhostMode = false;
                    SlowFall = false;
                    FastFall = false;
                    LoopTpToNig = false;
                    MessageBoxW(NULL, L"Process closed?", L"?????????", MB_OK | MB_SYSTEMMODAL);
                    goto stas;
                }
                ReadProcessMemory(hProcess, (BYTE*)PointerToCurrentLevel, &lastAddra1, sizeof(&lastAddra1), 0);
                ReadProcessMemory(hProcess, (BYTE*)LocalPlayer, &LocalPlayer1, sizeof(&LocalPlayer1), 0);

                if (LocalPlayer1 != LocalPlayer2) {
                    LocalPlayer2 = LocalPlayer1;
                    ReadProcessMemory(hProcess, (BYTE*)PointerToCurrentLevel, &lastAddra1, sizeof(&lastAddra1), 0);
                    LocalPlayerCar = FindDMAAddy(hProcess, PointerToCurrentLevel, ClassOfCarOffsets);
                    Positionaddrx = LocalPlayerCar + 0x50;
                    Positionaddrz = LocalPlayerCar + 0x54;
                    Positionaddry = LocalPlayerCar + 0x58;
                    LoopTp = false;
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
                    EntityLis2t();
                }
                
                if (lastAddra1 != lastAddra12) {
                    LoopTp = false;
                    ReadProcessMemory(hProcess, (BYTE*)PointerToCurrentLevel, &lastAddra1, sizeof(&lastAddra1), 0);
                    lastAddra12 = lastAddra1;
                    LocalPlayerCar = FindDMAAddy(hProcess, PointerToCurrentLevel, ClassOfCarOffsets);
                    Positionaddrx = LocalPlayerCar + 0x50;
                    Positionaddrz = LocalPlayerCar + 0x54;
                    Positionaddry = LocalPlayerCar + 0x58;
                    VelcPositionaddrx = LocalPlayerCar + 0x160;
                    VelcPositionaddrz = LocalPlayerCar + 0x164;
                    VelcPositionaddry = LocalPlayerCar + 0x168;
                    LocalPlayer = FindDMAAddy(hProcess, PointerToCurrentLevel, OffsetsOfOffset12);
                    ReadProcessMemory(hProcess, (BYTE*)AddrsOfCam, &CarObject, sizeof(&CarObject), 0);
                    CarObjectx = FindDMAAddy(hProcess, AddrsOfCam, Offsets22);
                    CarObjectz = CarObjectx + 0x4;
                    CarObjecty = CarObjectx + 0x8;
                    RotationPositionaddrx = LocalPlayerCar + 0x20;
                    RotationPositionaddrz = LocalPlayerCar + 0x24;
                    RotationPositionaddry = LocalPlayerCar + 0x28;
                    EntityLis2t();
                }
                
            }

            TickFirst2 = GetTickCount64();
            if (TickFirst2 >= TickLast2) {
                TickLast2 = TickFirst2 + 200;
                ReadProcessMemory(hProcess, (BYTE*)PointerToCurrentLevel, &lastAddra1, sizeof(&lastAddra1), 0);
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
                EntityLis2t();
                getEntityCount();
            }
            

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


            if (LoopTp == true) {
                for (size_t i = 0; i < Entity2s; i++)
                {
                ToPoland[i].x161 = 0.0001f;
                ToPoland[i].y161 = 0.0001f;
                ToPoland[i].z161 = 0.0001f;
                    WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].V1elcPositionaddrx, &ToPoland[i].x161, sizeof(ToPoland[i].x161), 0);
                    WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].V1elcPositionaddrz, &ToPoland[i].z161, sizeof(ToPoland[i].z161), 0);
                    WriteProcessMemory(hProcess, (BYTE*)ToPoland[i].V1elcPositionaddry, &ToPoland[i].y161, sizeof(ToPoland[i].y161), 0);
                }
            }

            if (AutoRefreshEntities == true) {

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
                        x161 =  0.2f;
                        y161 = -0.3111175112629f;
                        z161 =  0.3333274424;
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
                                Point22 = moduleBase + 0x11B5A72;
                                WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                Valc = 2341507216;
                                Point22 = moduleBase + 0x11B5A78;
                                WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                Valc = 1099993232;
                                Point22 = moduleBase + 0x11B5A7E;
                                WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                WriteProcessMemory(hProcess, (BYTE*)CarObjectx, &x14, sizeof(x14), 0);
                                WriteProcessMemory(hProcess, (BYTE*)CarObjecty, &y14, sizeof(y14), 0);
                                WriteProcessMemory(hProcess, (BYTE*)CarObjectz, &z14, sizeof(z14), 0);
                                Point22 = moduleBase + 0x1690C9E;
                                Valc = 2425393296;
                                WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddrx, &x21, sizeof(x21), 0);
                                WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddry, &y21, sizeof(y21), 0);
                                WriteProcessMemory(hProcess, (BYTE*)RotationPositionaddrz, &z21, sizeof(z21), 0);
                                Valc = NULL;
                                Point22 = NULL;
                                GhostInit = true;

                            }
                            else
                            {
                                int Valc;
                                Valc = 2337292681;
                                Point22 = moduleBase + 0x11B5A72;
                                WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                Valc = 2337554825;
                                Point22 = moduleBase + 0x11B5A78;
                                WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                Valc = 1096302985;
                                Point22 = moduleBase + 0x11B5A7E;
                                WriteProcessMemory(hProcess, (BYTE*)Point22, &Valc, sizeof(Valc), 0);
                                WriteProcessMemory(hProcess, (BYTE*)CarObjectx, &x14, sizeof(x14), 0);
                                WriteProcessMemory(hProcess, (BYTE*)CarObjecty, &y14, sizeof(y14), 0);
                                WriteProcessMemory(hProcess, (BYTE*)CarObjectz, &z14, sizeof(z14), 0);
                                Point22 = moduleBase + 0x1690C9E;
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
        Sleep(0.2);
    }
    else
    {
        exit(0);
    }



}