// Fill out your copyright notice in the Description page of Project Settings.

#include "TankBarrel.h"


void UTankBarrel::Elevate(float DegreePerSecond)
{
	// Move the barrel the right amount this frame
	// Given a max elevation speed, and the frame time
	UE_LOG(LogTemp, Warning, TEXT("Barrel-Elevate() called at speed %f"), DegreePerSecond);
}


