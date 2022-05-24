#pragma once
#include "CoreMinimal.h"
#include "EGbxStrafeType.h"
#include "StanceData.h"
#include "AIStanceData.generated.h"

class UHavokPathFindingData;

UCLASS(Abstract)
class GBXAI_API UAIStanceData : public UStanceData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UHavokPathFindingData* AIPathFindData;
    
    UPROPERTY(EditAnywhere)
    EGbxStrafeType AIStrafeType;
    
public:
    UAIStanceData();
};

