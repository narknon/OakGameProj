#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AttributeContextResolver.generated.h"

class UActorComponent;
class UGbxAttributeData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GBXGAMESYSTEMCORE_API UAttributeContextResolver : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UActorComponent> ComponentTypeToFurtherResolveTo;
    
public:
    UAttributeContextResolver();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    TArray<UObject*> GetContextForAttribute(const UGbxAttributeData* Attribute, UObject* ContextSource);
    
};

