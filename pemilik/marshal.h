#pragma once

#include <string>
#include <iostream>
using namespace std;
using namespace System;

void MarshalString ( String ^ s, string& os );
void MarshalString ( String ^ s, wstring& os );
