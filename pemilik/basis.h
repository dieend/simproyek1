// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the BASIS_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
//  functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#pragma once
#include <string>
#include <map>
#include <vector>
using namespace std;

// This class is exported from the basis.dll
class  Cbasis {
public:
	Cbasis(void);
	// TODO: add your methods here.
};


 int fnbasis(void);

typedef string kode;
typedef map<string, int> msi;
typedef struct { // tipe sebuah baju
	int StokGudang, StokToko, StokIdealToko, StokMinimumToko;
	char Ukuran;
	double Harga, Diskon;
	kode Kode;
	string Image;
} TypeBaju;

typedef vector<TypeBaju> KoleksiBaju;

typedef struct {
	int Jumlah;
	kode Kode;
	double TotalHarga;
} Pembelian;



// This class is exported from the basis.dll
class  VAR
{
public: static KoleksiBaju Lemari;
public: static msi Mapping;
public: static FILE * text;
public: static int n;
public:
	VAR(void);
};


TypeBaju  ElmtBajuKode(kode a);
// mengembalikan Baju dengan Kode a dari Koleksi Baju dengan index diambil dari mapping msi
// return (StokBaju

bool  AddMapping(TypeBaju Baju,int nJenisBaju);
// mengeset mapping index. m[Baju.Kode] = nJenisBaju

bool  TambahBaju(TypeBaju BajuBaru);
// StokBaju.push_back(BajuBaru); AddMapping(BajuBaru, StokBaju.size());

void  PindahGudangkeToko(TypeBaju * Baju, int n);
// memindahkan baju sebanyak n dari gudang ke toko

void  PindahTokokeGudang(TypeBaju * Baju, int n);
// memindahkan baju sebanyak n dari toko ke gudang
void  SimpanData();
// menyimpan data ke file

void  LoadData();
// mengambil data dari file

bool  CekAdaDiToko(TypeBaju Baju);

bool  CekAdaDiGudang(TypeBaju Baju);

bool  NextBaju(TypeBaju * Baju, int TGA); 
// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

