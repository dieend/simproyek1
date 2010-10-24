// basis.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "basis.h"
const int MaxJenisBaju = 10000;

// This is an example of an exported variable
 
// This is an example of an exported function.
 int fnbasis(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see basis.h for the class definition
VAR::VAR()
{
	return;
}
 KoleksiBaju VAR::Lemari(0);
 msi VAR::Mapping;
 FILE * VAR::text;
 int VAR::n;


 TypeBaju ElmtBajuKode(kode a)
// mengembalikan Baju dengan Kode a dari Koleksi Baju dengan index diambil dari VAR::Mapping 
// return (VAR::Lemari
{
	return (VAR::Lemari[VAR::Mapping[a]]);
}

 bool AddMapping(TypeBaju Baju,int nJenisBaju)
// mengeset VAR::Mapping index. m[Baju.Kode] = nJenisBaju
{
	if (VAR::Mapping.find(Baju.Kode) == VAR::Mapping.end()){
		VAR::Mapping[Baju.Kode] = nJenisBaju;
		return true;
	}
	else return false;
}

 bool TambahBaju(TypeBaju BajuBaru)
// VAR::Lemari.push_back(BajuBaru); AddMapping(BajuBaru, VAR::Lemari.size());
{
	if (VAR::Lemari.size() > MaxJenisBaju) return false;
	if (AddMapping(BajuBaru, VAR::Lemari.size())) {
		VAR::Lemari.push_back(BajuBaru);
		return true;
	}
	else return false;
}

 void SimpanData() {
	 VAR::text = fopen ("Data.dat","w");
	fprintf(VAR::text, "%d\n", VAR::Lemari.size());
	for (int i=0; i<(int)VAR::Lemari.size(); i++) {
		fprintf(VAR::text,"%d\n", VAR::Lemari[i].StokGudang);
		fprintf(VAR::text,"%d\n", VAR::Lemari[i].StokToko);
		fprintf(VAR::text,"%d\n", VAR::Lemari[i].StokIdealToko);
		fprintf(VAR::text,"%d\n", VAR::Lemari[i].StokMinimumToko);
		fprintf(VAR::text,"%c\n", VAR::Lemari[i].Ukuran);
		fprintf(VAR::text,"%lf\n", VAR::Lemari[i].Harga);
		fprintf(VAR::text,"%lf\n", VAR::Lemari[i].Diskon);
		fprintf(VAR::text,"%s\n", VAR::Lemari[i].Kode.c_str());
		fprintf(VAR::text,"%s\n", VAR::Lemari[i].Image.c_str());
	}
	fclose(VAR::text);
}

 void LoadData() {
	VAR::text = fopen("Data.dat","r");
	int n;
	TypeBaju BajuBaru;
	char Tmp[1000];
	fscanf_s(VAR::text, "%d", &n);
	for (int i=0; i<n; i++) {
		fscanf_s(VAR::text,"%d\n", &BajuBaru.StokGudang);
		fscanf_s(VAR::text,"%d\n", &BajuBaru.StokToko);
		fscanf_s(VAR::text,"%d\n", &BajuBaru.StokIdealToko);
		fscanf_s(VAR::text,"%d\n", &BajuBaru.StokMinimumToko);
		fscanf_s(VAR::text,"%c\n", &BajuBaru.Ukuran);
		fscanf_s(VAR::text,"%lf\n", &BajuBaru.Harga);
		fscanf_s(VAR::text,"%lf\n", &BajuBaru.Diskon);
		fscanf_s(VAR::text,"%s\n", &Tmp);
		BajuBaru.Kode = Tmp;
		fscanf_s(VAR::text,"%s\n", &Tmp);
		BajuBaru.Image = Tmp;
		TambahBaju(BajuBaru);
	}
	fclose(VAR::text);
}

 void PindahGudangkeToko(TypeBaju& Baju, int n)
// memindahkan baju sebanyak n dari gudang ke toko
{
	Baju.StokToko += n;
	Baju.StokGudang -= n;
}

 void PindahTokokeGudang(TypeBaju * Baju, int n)
// memindahkan baju sebanyak n dari toko ke gudang
{
	(*Baju).StokToko -= n;
	(*Baju).StokGudang += n;
}


bool  CekAdaDiToko(TypeBaju Baju)
{
	if (Baju.StokToko == 0)	return false;
	return true;
}

bool  CekAdaDiGudang(TypeBaju Baju)
{
	if (Baju.StokGudang == 0) return false;
	return true;
}

bool  NextBaju(TypeBaju * Baju, int TGA) // TGA toko gudang all
{
	int i = VAR::Mapping[(*Baju).Kode];
	i+=1;
	if (TGA == 2) {
		while (i<(int)VAR::Lemari.size() && VAR::Lemari[i].StokGudang<=0)
			i++;
	}
	else if (TGA == 1) {
		while (i<(int)VAR::Lemari.size() && VAR::Lemari[i].StokToko<=0)
			i++;
	}
	if (i>=(int)VAR::Lemari.size()) return false;
	else {
		(*Baju).Diskon = VAR::Lemari[i].Diskon;
		(*Baju).Harga = VAR::Lemari[i].Harga;
		(*Baju).Image = VAR::Lemari[i].Image;
		(*Baju).Kode = VAR::Lemari[i].Kode;
		(*Baju).StokGudang = VAR::Lemari[i].StokGudang;
		(*Baju).StokIdealToko = VAR::Lemari[i].StokIdealToko;
		(*Baju).StokMinimumToko = VAR::Lemari[i].StokMinimumToko;
		(*Baju).StokToko = VAR::Lemari[i].StokToko;
		(*Baju).Ukuran= VAR::Lemari[i].Ukuran;
		return true;
	}
	
}
