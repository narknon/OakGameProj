#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "GbxDataAsset.h"
#include "AITicketDataAsset.generated.h"

UCLASS(BlueprintType)
class UAITicketDataAsset : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxParam MaxValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxParam DefaultMaxHoldTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPerActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ActorBlackboardKeyName;
    
    UAITicketDataAsset();
};

