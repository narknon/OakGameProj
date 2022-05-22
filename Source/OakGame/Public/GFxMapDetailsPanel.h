#pragma once
#include "CoreMinimal.h"
#include "GbxHintInfo.h"
#include "GbxGFxObject.h"
#include "GFxMapDetailsPanel.generated.h"

class UGbxTextField;
class UGFxMapMenu;
class UGbxGFxHintWidget;
class UUIStatData;
class AOakPlayerController;

UCLASS(NonTransient)
class OAKGAME_API UGFxMapDetailsPanel : public UGbxGFxObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxGFxObject* ContentPanel;
    
    UPROPERTY(Transient)
    UGbxGFxObject* LocationPreviewContainer;
    
    UPROPERTY(Transient)
    UGbxTextField* HeaderField;
    
    UPROPERTY(Transient)
    UGbxTextField* SubHeaderField;
    
    UPROPERTY(Transient)
    UGbxTextField* DescriptionText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* GeneralIcon;
    
    UPROPERTY(Transient)
    UGbxGFxObject* DLCChallengeIcon;
    
    UPROPERTY(Transient)
    UGbxGFxObject* BackgroundPanel;
    
    UPROPERTY(Transient)
    UGbxGFxObject* DetailsPanelHintWrapper;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* PanelHint;
    
    UPROPERTY(Transient)
    UGbxTextField* RewardsHeader;
    
    UPROPERTY(Transient)
    TArray<UGbxTextField*> RewardLines;
    
    UPROPERTY(Transient)
    TArray<UGbxGFxObject*> RewardLineSymbols;
    
    UPROPERTY(Transient)
    UGbxGFxObject* RewardItemTypeContainer;
    
    UPROPERTY(Transient)
    UGbxGFxObject* RewardRarityContainer;
    
    UPROPERTY(Transient)
    UGbxGFxObject* RewardItemType;
    
    UPROPERTY(Transient)
    UGbxGFxObject* RewardBackground;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MissionTypeIcon;
    
    UPROPERTY(Transient)
    TArray<UGbxTextField*> ObjectiveLines;
    
    UPROPERTY(Transient)
    UGFxMapMenu* OwnerMapMenu;
    
    UPROPERTY(Transient)
    UGbxTextField* MayhemModLines[5];
    
    UPROPERTY(Transient)
    UGbxTextField* MayhemCoreMods[6];
    
    UPROPERTY(Transient)
    UGbxTextField* MayhemLevel;
    
    UPROPERTY(Transient)
    TArray<UUIStatData*> CollatedMayhemCoreUIStats;
    
protected:
    UPROPERTY(Transient)
    AOakPlayerController* OwnerPlayerController;
    
    UPROPERTY(Transient)
    FGbxHintInfo CachedDetailsHintInfo;
    
public:
    UGFxMapDetailsPanel();
};

