#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HealthTypeBalanceData.h"
#include "OakHealthTypeBalanceData.generated.h"

USTRUCT()
struct FOakHealthTypeBalanceData : public FHealthTypeBalanceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float NonelementalModifier;
    
    UPROPERTY(EditAnywhere)
    float CorrosiveModifier;
    
    UPROPERTY(EditAnywhere)
    float CryoModifier;
    
    UPROPERTY(EditAnywhere)
    float FireModifier;
    
    UPROPERTY(EditAnywhere)
    float ShockModifier;
    
    UPROPERTY(EditAnywhere)
    float RadiationModifier;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle PlayThroughTwoOverride;
    
    UPROPERTY()
    FDataTableRowHandle MayhemLevel4Override;
    
    OAKGAME_API FOakHealthTypeBalanceData();
};

