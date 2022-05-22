#pragma once
#include "CoreMinimal.h"
#include "DamageContextSource.h"
#include "CauseDamageAsyncRequest.generated.h"

class UDamageData;
class AActor;

USTRUCT()
struct GBXGAMESYSTEMCORE_API FCauseDamageAsyncRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    UDamageData* DamageData;
    
    UPROPERTY()
    FDamageContextSource DamageContext;
    
    UPROPERTY()
    AActor* DamageTarget;
    
    FCauseDamageAsyncRequest();
};

