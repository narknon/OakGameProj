#pragma once
#include "CoreMinimal.h"
#include "AttributeDefinedValueRow.h"
#include "AttributeInitializationData.h"
#include "PlayerCountDefinedValueRow.generated.h"

USTRUCT()
struct FPlayerCountDefinedValueRow : public FAttributeDefinedValueRow {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData OnePlayer;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData TwoPlayers;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ThreePlayers;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData FourPlayers;
    
public:
    OAKGAME_API FPlayerCountDefinedValueRow();
};

