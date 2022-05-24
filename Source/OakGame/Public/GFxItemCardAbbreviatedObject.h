#pragma once
#include "CoreMinimal.h"
#include "GFxItemCardObjectElementalUpdatedDelegateDelegate.h"
#include "ItemCardElementalDetails.h"
#include "UObject/NoExportTypes.h"
#include "GFxItemCardAbbreviatedObject.generated.h"

class UGFxItemCardMainStat;
class AOakPlayerController;
class UInventoryBalanceStateComponent;
class UInventoryShopComponent;
class UGbxGFxObject;
class UGFxItemCardArtifactLine;
class UGFxItemCardSkillEntry;
class USwfMovie;

USTRUCT(BlueprintType)
struct FGFxItemCardAbbreviatedObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FGFxItemCardObjectElementalUpdatedDelegate ElementalUpdatedDelegate;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AOakPlayerController> OwningPC;
    
protected:
    UPROPERTY(Transient)
    UGbxGFxObject* ItemCardRootClip;
    
    UPROPERTY(Export, Transient)
    UInventoryShopComponent* CachedInventoryShop;
    
    UPROPERTY(Transient)
    TArray<UGFxItemCardMainStat*> MainStatWidgets;
    
    UPROPERTY(Transient)
    TArray<UGFxItemCardMainStat*> MainStatMirroredWidgets;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ArtifactRarityIcon;
    
    UPROPERTY(Transient)
    UGbxGFxObject* AbbreviatedAmmoIcon;
    
    UPROPERTY(EditAnywhere)
    float UpdateElementalInfoTime;
    
    UPROPERTY(Export, Transient)
    UInventoryBalanceStateComponent* CurrentBalanceComponent;
    
    UPROPERTY(Export, Transient)
    UInventoryBalanceStateComponent* CurrentComparisonItem;
    
    UPROPERTY(Transient)
    TArray<FItemCardElementalDetails> ElementalEffects;
    
    UPROPERTY(Transient)
    FString LastElementalFrame;
    
    UPROPERTY(Transient)
    TArray<UGFxItemCardArtifactLine*> ArtifactMainStats;
    
    UPROPERTY(Transient)
    TArray<UGFxItemCardSkillEntry*> ClassModSkillEntries;
    
    UPROPERTY(Transient)
    USwfMovie* SkillIconSWF;
    
    UPROPERTY(Transient)
    FSoftObjectPath CurrentSkillIconSWFPath;
    
public:
    OAKGAME_API FGFxItemCardAbbreviatedObject();
};

