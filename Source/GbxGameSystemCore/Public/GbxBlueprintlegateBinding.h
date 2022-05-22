#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParsedProperty -FallbackName=ParsedProperty
#include "GbxBlueprintlegateBinding.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxBlueprintlegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString SubobjectPath;
    
    UPROPERTY()
    FParsedProperty ParsedDelegateOwnerPath;
    
    UPROPERTY()
    FParsedProperty ParsedDelegatePath;
    
    UPROPERTY()
    FName FunctionNameToBind;
    
    FGbxBlueprintlegateBinding();
};

