#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AttributeContextResolver.h"
#include "GbxAttributeSetContextResolver.generated.h"

class UGbxAttributeSet;

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxAttributeSetContextResolver : public UAttributeContextResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    TSubclassOf<UGbxAttributeSet> AttributeSetClass;
    
public:
    UGbxAttributeSetContextResolver();
};

