#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CauseDamageAsyncRequestEntry.h"
#include "DamageAsyncManager.generated.h"

UCLASS(Transient, Config=Game)
class GBXGAMESYSTEMCORE_API UDamageAsyncManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FCauseDamageAsyncRequestEntry> CauseDamageRequests;
    
    UPROPERTY(Transient)
    TArray<FCauseDamageAsyncRequestEntry> PendingCauseDamageRequests;
    
    UPROPERTY(Config)
    int32 MaxNumCauseDamagePerFrame;
    
public:
    UDamageAsyncManager();
};

