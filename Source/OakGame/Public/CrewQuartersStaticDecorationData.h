#pragma once
#include "CoreMinimal.h"
#include "CrewQuartersAssetDecorationData.h"
#include "CrewQuartersStaticDecorationData.generated.h"

class UStaticMeshComponent;

UCLASS(BlueprintType)
class UCrewQuartersStaticDecorationData : public UCrewQuartersAssetDecorationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UStaticMeshComponent* DecorationStaticMeshComponent;
    
    UCrewQuartersStaticDecorationData();
};

