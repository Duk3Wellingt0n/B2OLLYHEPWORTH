// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


	// adding mapping context
	// checks if the player controller has a conttroller
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		// get the local player susbsytem see if it has the enhanced input system an stores it
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			// add input mapping context 
			Subsystem->AddMappingContext(InputMapping, 0);
		}
	}

	// setting up the input actions for the input mapping context
	if (UEnhancedInputComponent* Input = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// this is where we will bind all our actions for future reference to keep code clean
		Input->BindAction(IA_Move, ETriggerEvent::Triggered, this, &AMainCharacter::Move);
	}

}
void AMainCharacter::Move(const FInputActionValue& Value)
{
	// makes sure there is a controller so we can continue
	if (Controller != nullptr) 
	{
		FVector2D MovementVector = Value.Get<FVector2D>();

		// get forward and right direction
		// gets controller rotation and declare it as rotation
		const FRotator Rotation = Controller->GetControlRotation();
		// gets the yaw rotation of controller rotation
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		// gets forward direction and gets the corresponding axis to the direction
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add the input of the direction we want this actually moves the character
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

