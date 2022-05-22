#pragma once
#include "CoreMinimal.h"
#include "GbxAnimTable.h"
#include "EGbxNavAnimTableType.h"
#include "GbxNavAnimTable.generated.h"

UCLASS()
class GBXNAV_API UGbxNavAnimTable : public UGbxAnimTable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EGbxNavAnimTableType Type;
    
    UPROPERTY(EditAnywhere)
    float MinStopDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxInterpDistance;
    
    UPROPERTY(EditAnywhere)
    float AutoFillAngle;
    
public:
    UGbxNavAnimTable();
};

