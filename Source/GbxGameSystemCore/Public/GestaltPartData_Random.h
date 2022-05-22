#pragma once
#include "CoreMinimal.h"
#include "GestaltPartData.h"
#include "GestaltRandomPartData.h"
#include "GestaltPartData_Random.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UGestaltPartData_Random : public UGestaltPartData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FGestaltRandomPartData> RandomParts;
    
public:
    UGestaltPartData_Random();
};

