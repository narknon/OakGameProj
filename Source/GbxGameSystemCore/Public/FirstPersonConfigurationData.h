#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FirstPersonConfigurationData.generated.h"

class UGbxSkeletalMeshComponent;

UCLASS(Const, NotPlaceable, Transient)
class GBXGAMESYSTEMCORE_API AFirstPersonConfigurationData : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAutoFillComponentVariables;
    
    UPROPERTY(Export, VisibleAnywhere)
    UGbxSkeletalMeshComponent* Arms;
    
    AFirstPersonConfigurationData();
};

