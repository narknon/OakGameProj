#pragma once
#include "CoreMinimal.h"
#include "OakWeaponNamingAttributePair.generated.h"

class UInventoryNamePartData;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakWeaponNamingAttributePair {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName FirstAttributeName;
    
    UPROPERTY()
    FName SecondAttributeName;
    
    UPROPERTY()
    UInventoryNamePartData* NamePart;
    
    FOakWeaponNamingAttributePair();
};

