#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "GFxBuddyWidgetAnimQueueItem.h"
#include "EBuddyWidgetContainerAnimState.h"
#include "GFxBuddyWidgetContainer.generated.h"

class AOakPlayerState;
class AGbxCharacter;
class UGFxBuddyWidget;
class AOakCharacter;
class UGbxGFxObject;

UCLASS()
class OAKGAME_API UGFxBuddyWidgetContainer : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxBuddyWidget* PlayerBuddyWidgets[3];
    
    UPROPERTY(Transient)
    UGFxBuddyWidget* PetBuddyWidget;
    
    UPROPERTY(Transient)
    UGbxGFxObject* PlayerGodRays[3];
    
    UPROPERTY(Transient)
    UGbxGFxObject* PetGodRays;
    
    UPROPERTY(Transient)
    TArray<FGFxBuddyWidgetAnimQueueItem> AnimQueue;
    
    UPROPERTY(Transient)
    EBuddyWidgetContainerAnimState AnimState;
    
public:
    UGFxBuddyWidgetContainer();
protected:
    UFUNCTION()
    void OnPlayerStateUpdated() const;
    
    UFUNCTION()
    void OnPlayerStateRemoved() const;
    
    UFUNCTION()
    void OnPlayerStateAdded(AOakPlayerState* NewPlayerState) const;
    
    UFUNCTION()
    void OnPetSpawnStateChanged(AOakCharacter* Pet) const;
    
public:
    UFUNCTION()
    void NotifyPrimaryCharacterChanged(AGbxCharacter* NewPrimaryCharacter) const;
    
    UFUNCTION()
    void extSlideFinished() const;
    
    UFUNCTION()
    void extFanfareAnimationFinished(const FString& TargetName) const;
    
};

