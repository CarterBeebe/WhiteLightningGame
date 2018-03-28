// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCharacter.h"


// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

// Character_Hit function that occurs on enemy projectile collision with character. **Marcus**
void AMyCharacter::Character_Hit(float damage) {
    AMyCharacter.setHealth(AMyCharacter.getHealth()-damage);
    AMyCharacter.SetSpriteColor(this.Sprite,1,1,1);
    Delay(0.1);
    AMyCharacter.SetSpriteColor(this.Sprite,0.568,0.568,0.568);
}


