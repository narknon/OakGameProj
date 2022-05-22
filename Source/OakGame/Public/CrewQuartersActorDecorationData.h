#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CrewQuartersAssetDecorationData.h"
#include "CrewQuartersActorDecorationData.generated.h"

class ACrewQuartersDecorationDisplayActor;

UCLASS(BlueprintType)
class UCrewQuartersActorDecorationData : public UCrewQuartersAssetDecorationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ACrewQuartersDecorationDisplayActor> DecorationActorClass;
    
    UCrewQuartersActorDecorationData();
};

