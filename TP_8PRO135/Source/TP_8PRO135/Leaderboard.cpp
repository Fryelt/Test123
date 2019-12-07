// Fill out your copyright notice in the Description page of Project Settings.


#include "Leaderboard.h"

void ULeaderboard::SetRankText(FString newValue)
{
	this->SetNewRank("# " + newValue);
}

void ULeaderboard::SetScoreText(FString newValue)
{
	this->SetNewScore(newValue);
}

void ULeaderboard::SetNameText(FString newValue)
{
	this->SetNewName(newValue);
}