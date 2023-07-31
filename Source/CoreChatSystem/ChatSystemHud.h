/******************************************************************************
* Project Core - Generic UE Project
* Copyright (c) [2023] [ Joydip chakraborty ]
* This class is part of the ProjectCore open-source project. 
* ******************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "ChatData.h"
#include  "GameFramework/HUD.h"
//#include "../../../../Source/CoreGame/Player/CorePlayerController.h"
#include "UI/CoreHUD.h"
#include "ChatSystemHud.generated.h"




UCLASS()
class CORECHATSYSTEM_API AChatSystemHud : public ACoreHUD
{
	GENERATED_BODY()

public:
	
	AChatSystemHud();

	//ACorePlayerController* PlayerController;

	//TSharedPtr<class SChatBox> ChatBox; // Reference to the main chat widget

	UFUNCTION(BlueprintCallable, Category = "User")
	void AddMessageBP(const int32 Type, const FString& Username, const FString& Text, const bool Replicate); // A Blueprint function you can use to place messages in the chat box during runtime

protected:
	
	virtual void PostInitializeComponents() override; // All game elements are created, add our chat box

	virtual void DrawHUD() override; // The HUD is drawn on our screen
	
};
