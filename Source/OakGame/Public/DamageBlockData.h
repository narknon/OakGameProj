#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AttributeInitializationData.h"
#include "GbxDataAsset.h"
#include "DamageBlockData.generated.h"

class UDamageSource;
class UGbxDamageType;

UCLASS()
class UDamageBlockData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData BlockedDamageScale;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData BlockAngle;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UDamageSource>> BlockDamageSources;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UGbxDamageType>> BlockDamageTypes;
    
public:
    UDamageBlockData();
};

