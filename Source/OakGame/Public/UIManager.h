#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ETravelStatus.h"
#include "MessageHandle.h"
#include "UIManager.generated.h"

class UTravelStationData;
class UUIGlobals;
class AOakPlayerController;
class UInputComponent;
class UMessageStackManager;

UCLASS()
class UUIManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UUIGlobals* UIGlobals;
    
protected:
    UPROPERTY(Transient)
    AOakPlayerController* PlayerOwner;
    
    UPROPERTY(Export, Transient)
    UInputComponent* OnlineMessageInputComponent;
    
    UPROPERTY(Transient)
    UMessageStackManager* TravelMessageManager;
    
    UPROPERTY(Transient)
    UMessageStackManager* OnlineMessageManager;
    
    UPROPERTY(Transient)
    UMessageStackManager* SocialEventMessageManager;
    
public:
    UUIManager();
    UFUNCTION()
    FMessageHandle DisplaySocialMessage(const FString& PlayerDisplayName, const int32 Level, const FText& ClassDisplayName, const FText& Description, const FText& CommandText);
    
    UFUNCTION()
    void AutoUpdateTravelMessage(UTravelStationData* DestinationTravelStation, int32 RemainingTime, ETravelStatus CurrentStatus);
    
};

