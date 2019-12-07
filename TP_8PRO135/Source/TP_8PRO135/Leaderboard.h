// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Misc/OutputDeviceNull.h"
#include "Blueprint/UserWidget.h"
#include "Leaderboard.generated.h"

/**
 * 
 */
UCLASS()
class TP_8PRO135_API ULeaderboard : public UUserWidget
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	void SetRankText(FString newValue);
	UFUNCTION(BlueprintCallable)
	void SetNameText(FString newValue);
	UFUNCTION(BlueprintCallable)
	void SetScoreText(FString newValue);
	
protected:
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Leaderboard Entry - Set New Rank"))
	void SetNewRank(const FString& newValue);
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Leaderboard Entry - Set New Name"))
	void SetNewName(const FString& newValue);
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Leaderboard Entry - Set New Score"))
	void SetNewScore(const FString& newValue);
};
