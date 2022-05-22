#pragma once
#include "CoreMinimal.h"
#include "AttributeDefinedValueRow.h"
#include "AttributeInitializationData.h"
#include "PlayerCountAndPlaythroughDefinedValueRow.generated.h"

USTRUCT()
struct FPlayerCountAndPlaythroughDefinedValueRow : public FAttributeDefinedValueRow {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData OnePlayer_PT1;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData TwoPlayers_PT1;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ThreePlayers_PT1;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData FourPlayers_PT1;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData OnePlayer_PT2;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData TwoPlayers_PT2;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ThreePlayers_PT2;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData FourPlayers_PT2;
    
public:
    OAKGAME_API FPlayerCountAndPlaythroughDefinedValueRow();
};

