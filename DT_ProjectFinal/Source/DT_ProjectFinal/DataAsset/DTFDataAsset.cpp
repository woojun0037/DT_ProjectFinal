// Fill out your copyright notice in the Description page of Project Settings.

#include "DataAsset/DTFDataAsset.h"

UDTFDataAsset::UDTFDataAsset()
{
	Parts.Add(FPartsInfo(TEXT("Hood") ,  100.f, 0.f, 0.f));
	Parts.Add(FPartsInfo(TEXT("Left") ,  100.f, 0.f, 0.f));
	Parts.Add(FPartsInfo(TEXT("Boot") , -100.f, 0.f, 0.f));
	Parts.Add(FPartsInfo(TEXT("Right"), -100.f, 0.f, 0.f));
}
