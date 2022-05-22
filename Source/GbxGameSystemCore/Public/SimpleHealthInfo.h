#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "SimpleHealthInfo.generated.h"

class UHealthTypeData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FSimpleHealthInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, NotReplicated)
    FAttributeInitializationData MaxHealthFormula;
    
    UPROPERTY(EditAnywhere, NotReplicated)
    UHealthTypeData* HealthType;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat MaxHealth;
    
private:
    UPROPERTY(Transient)
    float CurrentHealth;
    
public:
    FSimpleHealthInfo();
};

