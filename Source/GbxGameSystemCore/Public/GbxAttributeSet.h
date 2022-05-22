#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxAttributeSet.generated.h"

class UAttributeContextResolver;

UCLASS(Abstract, EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxAttributeSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, Instanced)
    UAttributeContextResolver* ContextResolver;
    
    UGbxAttributeSet();
};

