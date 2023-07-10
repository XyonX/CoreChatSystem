// Fill out your copyright notice in the Description page of Project Settings.


#include "ChatSystemHud.h"
#include "Widgets/SWeakWidget.h"
#include "ChatData.h"

AChatSystemHud::AChatSystemHud()
{
	
}

void AChatSystemHud::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (GEngine && GEngine->GameViewport) // make sure our screen is ready for the widget
	{
		//SAssignNew(ChatBox, SChatBox).OwnerHUD(this); // add the widget and assign it to the var
		//GEngine->GameViewport->AddViewportWidgetContent(SNew(SWeakWidget).PossiblyNullContent(ChatBox.ToSharedRef()));
	}
	
}

void AChatSystemHud::DrawHUD()
{
	Super::DrawHUD();
/*	if(!PlayerController)
	{
		PlayerController  =  Cast<ACorePlayerController>(GetOwningPlayerController()) ;
	}*/
}

void AChatSystemHud::AddMessageBP(const int32 Type, const FString& Username, const FString& Text, const bool Replicate)
{

	/*if (!PlayerController || !ChatBox.IsValid())
		return;
	
	FSChatMsg NewMessage  ;
	NewMessage.Init(Type,FText::FromString(Username),FText::FromString(Text));

	if (NewMessage.Type > 0)
		if (Replicate)
		{
			APlayerState* PlayerState =PlayerController->PlayerState;
			if (PlayerState)
				PlayerState->UserChatRPC(NewMessage); // Send the complete chat message to the PlayerState so it can be replicated then displayed
		}
		else
			ChatBox->AddMessage(NewMessage); // Send a local message to this client only, no one else receives it*/
}


