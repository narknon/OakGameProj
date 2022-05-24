#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "ECharacterMovementAttributeValueType.h"
#include "CharacterMovementAttributeValueResolver.generated.h"

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UCharacterMovementAttributeValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECharacterMovementAttributeValueType ValueToResolve;
    
    UCharacterMovementAttributeValueResolver();
};

