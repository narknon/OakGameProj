#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EGbxAttributeModifierType -FallbackName=EGbxAttributeModifierType
#include "WeaponBonusDataTableAttributeMappingData.generated.h"

class UGbxAttributeData;
class UWeaponBonusDataTableAttributeValueResolver;

USTRUCT(BlueprintType)
struct OAKGAME_API FWeaponBonusDataTableAttributeMappingData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bInstigatorAttribute;
    
    UPROPERTY(EditAnywhere)
    FString ColumnName;
    
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* Attribute;
    
    UPROPERTY(EditAnywhere)
    EGbxAttributeModifierType ModifierType;
    
    UPROPERTY(VisibleAnywhere)
    UWeaponBonusDataTableAttributeValueResolver* DataTableAttributeValueResolver;
    
public:
    FWeaponBonusDataTableAttributeMappingData();
};

