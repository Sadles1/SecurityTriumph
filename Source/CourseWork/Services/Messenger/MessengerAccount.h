﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Message.h"
#include "MessengerChat.h"
#include "CourseWork/Services/Base/BaseServiceAccount.h"
#include "MessengerAccount.generated.h"

UCLASS()
class COURSEWORK_API UMessengerAccount : public UBaseServiceAccount
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	TArray<UMessengerChat*> GetChats() const {return Chats;}

	void AddToChat(UMessengerChat* Chat) {Chats.Add(Chat);}

	void SendMsg(UMessengerChat* ToChat, FMessage Msg);
	
protected:
	UPROPERTY(VisibleInstanceOnly, Instanced, Category = "Messages")
	TArray<UMessengerChat*> Chats;
};