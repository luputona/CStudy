#pragma once

const int WINCX = 800;
const int WINCY = 600;

//외부파일까지도 연결되서 데이타가 공유
extern HWND g_hWnd;

const DWORD STATE_STAND  = 0x00000001;  
const DWORD STATE_WALK   = 0x00000002;  
const DWORD STATE_ATT    = 0x00000004;  
const DWORD STATE_HIT    = 0x00000008;  
const DWORD STATE_DIE    = 0x00000010;  


const DWORD  KEY_UP      = 0x00000001;  
const DWORD  KEY_DOWN    = 0x00000002;  
const DWORD  KEY_LEFT    = 0x00000004;  
const DWORD  KEY_RIGHT   = 0x00000008;
const DWORD  KEY_SPACE   = 0x00000010;
const DWORD  KEY_RETUN   = 0x00000020;
const DWORD  KEY_LBUTTON = 0x00000040;
const DWORD  KEY_RBUTTON = 0x00000080;




