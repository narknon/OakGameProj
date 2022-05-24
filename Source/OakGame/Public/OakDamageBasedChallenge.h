#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakChallenge.h"
#include "OakDamageBasedChallenge.generated.h"

class UWeaponTypeData;
class UManufacturerData;
class UGbxDamageType;

UCLASS(EditInlineNew)
class OAKGAME_API UOakDamageBasedChallenge : public UOakChallenge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWeaponTypeData* RequiredWeaponType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UManufacturerData* RequiredManufacturer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UGbxDamageType>> RequiredDamageTypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRequireCrit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRequireHostile;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIncrementBasedOnDamageDealt;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bTreatMultipleHitsAsSingleHit;
    
    UOakDamageBasedChallenge();
};

