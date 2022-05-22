#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IncomingDamagePresentationGroup.h"
#include "IncomingDamagePresentationSource.generated.h"

class UDamageSource;

USTRUCT(BlueprintType)
struct FIncomingDamagePresentationSource {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UDamageSource>> DamageSources;
    
    UPROPERTY(EditAnywhere)
    FIncomingDamagePresentationGroup PresentationGroup;
    
    OAKGAME_API FIncomingDamagePresentationSource();
};

