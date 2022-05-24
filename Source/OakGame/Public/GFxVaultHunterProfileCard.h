#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "EGFxVaultHunterProfileCardView.h"
#include "EGFxVaultHunterProfileCardMode.h"
#include "GFxVaultHunterProfileCard.generated.h"

class UGFxVaultHunterProfileCardInventoryWidget;
class UGFxVaultHunterProfileCardStatsWidget;
class AOakPlayerController;
class UGbxTextField;
class UGFxVaultHunterProfileCardPlayerStatusWidget;
class UGFxVaultHunterProfileCardSkillsWidget;

UCLASS(NonTransient)
class UGFxVaultHunterProfileCard : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* PictureClip;
    
    UPROPERTY(Transient)
    UGbxTextField* PlayerNameClip;
    
    UPROPERTY(Transient)
    UGFxVaultHunterProfileCardPlayerStatusWidget* PlayerStatusClip;
    
    UPROPERTY(Transient)
    UGFxVaultHunterProfileCardSkillsWidget* SkillClip;
    
    UPROPERTY(Transient)
    UGFxVaultHunterProfileCardInventoryWidget* InventoryClip;
    
    UPROPERTY(Transient)
    UGFxVaultHunterProfileCardStatsWidget* StatsClip;
    
    UPROPERTY(Transient)
    UGbxTextField* MissionNameTextClip;
    
    UPROPERTY(Transient)
    EGFxVaultHunterProfileCardMode CardMode;
    
    UPROPERTY(Transient)
    EGFxVaultHunterProfileCardView CurrentView;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AOakPlayerController> SelfOakPC;
    
    UPROPERTY(Transient)
    bool bIsOff;
    
public:
    UGFxVaultHunterProfileCard();
};

