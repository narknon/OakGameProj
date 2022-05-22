#pragma once
#include "CoreMinimal.h"
#include "CrewQuartersAssetDecorationData.h"
#include "CrewQuartersSkeletalDecorationData.generated.h"

class USkeletalMeshComponent;
class UAnimSequence;

UCLASS(BlueprintType)
class UCrewQuartersSkeletalDecorationData : public UCrewQuartersAssetDecorationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    USkeletalMeshComponent* DecorationSkeletalMeshComponent;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* DefaultAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* UseAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* SecondaryUseAnimation;
    
    UCrewQuartersSkeletalDecorationData();
};

