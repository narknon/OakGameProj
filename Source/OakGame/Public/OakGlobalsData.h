#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxGlobalsData.h"
#include "OakGlobalsData.generated.h"

class UFriendGlobals;
class UGbxUIGlobals;
class UInventoryGlobals;
class UExperienceGlobals;
class UStandInGlobals;
class UOakStreamingInteractionGlobals;
class UOakDialogSettings;
class UOakLoadingScreenGlobals;
class UPlayerClassIdentifier;
class UOakDeveloperPerks;
class UDataTable;
class UOakDownloadableContentGlobalsData;
class UOakCustomizationData;
class UOakWeaponGlobalsData;

UCLASS()
class OAKGAME_API UOakGlobalsData : public UGbxGlobalsData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UGbxUIGlobals* UIGlobals;
    
    UPROPERTY(EditDefaultsOnly)
    UFriendGlobals* FriendGlobals;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UInventoryGlobals> InventoryGlobals;
    
    UPROPERTY(EditAnywhere)
    UExperienceGlobals* ExperienceGlobals;
    
    UPROPERTY(EditAnywhere)
    UStandInGlobals* StandInGlobals;
    
    UPROPERTY(EditDefaultsOnly)
    UOakDialogSettings* DialogSettings;
    
    UPROPERTY(EditDefaultsOnly)
    UOakStreamingInteractionGlobals* StreamingInteractionGlobals;
    
    UPROPERTY(EditDefaultsOnly)
    UOakLoadingScreenGlobals* LoadingScreenGlobals;
    
    UPROPERTY(EditAnywhere)
    TArray<UPlayerClassIdentifier*> AllPlayerClasses;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* MicroPatchSwitchesTable;
    
    UPROPERTY(EditDefaultsOnly)
    UOakDownloadableContentGlobalsData* DLCGlobalsData;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOakDeveloperPerks> DeveloperPerks;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UOakCustomizationData*> DeveloperSkins;
    
    UPROPERTY(EditAnywhere)
    UOakWeaponGlobalsData* WeaponsGlobals;
    
public:
    UOakGlobalsData();
};

