// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PPInGameUIMain.generated.h"

/**
 * 
 */
UCLASS()
class PEEEP_PROTOTYPE_API UPPInGameUIMain : public UUserWidget
{
	GENERATED_BODY()
	
	virtual void NativeConstruct() override;
	
protected:
	UPROPERTY()
	TObjectPtr <class UUserWidget> PlayerStatusWidget;

	UPROPERTY()
	TObjectPtr <class UUserWidget> KeyManualWidget;
};
